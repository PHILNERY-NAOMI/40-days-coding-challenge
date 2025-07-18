<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        body {
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
            background-color: #121212;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
        }

        .clock-container {
            background: #222;
            padding: 40px 60px;
            border-radius: 12px;
            text-align: center;
            box-shadow: 0 0 2px rgba(0, 255, 255, 0.3);
        }

        #clock {
            color: #00ffff;
            font-size: 3rem;
            margin-top: 10px;
        }

        #date {
            color: #ccc;
            font-size: 1.2rem;
        }
    </style>
</head>

<body>
    <div class="clock-container">
        <div id="date">Laoding Date...</div>
        <div id="clock">00:00:00 AM</div>
    </div>

    <script src="script.js"></script>
</body>

</html>
