#
# Compass configuration file.
# It will allow you to manually 'compass watch' your project
# Read more about Compass configuration options here:
# http://compass-style.org/help/tutorials/configuration-reference/
#

# Load any additional Sasson sub-theme here.
# load '/var/www/sasson/sites/all/themes/yourtheme'

# Require any additional compass plugins here.
# require 'compass-bootstrap'

# Change this to :production when ready to deploy the CSS to the live server.
environment = :development
# environment = :production

# Project files
http_path = "/"
# project_path = "sites/all/themes/ace"

sass_dir = "assets/sass"
# scss_dir = "assets/sass"
images_dir = "images"
# sprite_load_path << "assets/images"
javascripts_dir = "assets/js"
fonts_dir = "assets/fonts"

css_dir = "css"

# generated_images_dir = "images"
# config.compass.generated_images_dir = "images"
# generated_images_path = "sites/all/themes/ace/images"
# http_generated_images_path = http_images_path

# http_images_path = http_path + "/" + generated_images_dir

# output_style = There are four options we can select :expanded, :compact, :compressedand :nested.
# output_style = (environment == :production) ? :compressed : :expanded
output_style = (environment == :development) ? :expanded : :compressed

# You can select your preferred output style here (can be overridden via the command line):
# output_style = :expanded or :nested or :compact or :compressed

# To enable relative paths to assets via compass helper functions. Uncomment:
relative_assets = true

# While developing, FireSass can be very usefull (https://addons.mozilla.org/en-US/firefox/addon/firesass-for-firebug/)
# firesass = true

# To disable debugging comments that display the original location of your selectors. Uncomment:
# line_comments = false

# If you prefer the indented syntax, you might want to regenerate this
# project again passing --syntax sass, or you can uncomment this:
# preferred_syntax = :sass
# and then run:
# sass-convert -R --from scss --to sass sass scss && rm -rf sass && mv scss sass
preferred_syntax = :scss

#Boolean Set this to true to enable sourcemap output.
sourcemap = true

trace_selectors = true

# sass_options = {
#   :debug_info => (environment == :development) ? true : false
# }
