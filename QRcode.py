import qrcode

# Data to be encoded
data = "https://www.example.com"

# Create a QR Code object
qr = qrcode.QRCode(
    version=1,  # controls the size of the QR Code
    error_correction=qrcode.constants.ERROR_CORRECT_L,  # error correction level
    box_size=10,  # size of each box in the QR code
    border=4,  # thickness of the border (minimum is 4)
)

# Add data to the QR Code
qr.add_data(data)
qr.make(fit=True)

# Create an image from the QR Code instance
img = qr.make_image(fill='black', back_color='white')

# Save the image
img.save("qrcode.png")
