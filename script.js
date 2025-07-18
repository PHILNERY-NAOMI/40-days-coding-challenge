function updateClock(){
    const now = new Date();
    // formatting time
    let hours = now.getHours();
    const minutes = now.getMinutes().toString().padStart(2, '0');
    const seconds = now.getSeconds().toString().padStart(2, '0');
    const ampm = hours>= 12? 'PM' : 'AM';

    hours = hours % 12;
    hours = hours ? hours :12;
    hours = hours.tpString().padStart(2, '0');
    
    const timeString = '${hours}:${minutes}:${seconds} ${ampm}';
    document.getElementById('clock').textContent = timeString;

    // formatting date
    const days = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];
    const months=[
              'January', 'February', 'March', 'April', 'May', 'June',
              'July', 'August', 'September', 'October', 'November', 'December'
    ];
    const dayName = days[now.getDay()];
    const monthName = months[now.getMonth()];
    const dateString = '${dayName}, ${monthName}, ${now.getDate()}, ${now.getFullYear()}';
    document.getElementById('date').textContent = dateString;

    setInterval(updateClock, 1000);
    updateClock();
}