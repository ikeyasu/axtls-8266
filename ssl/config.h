/*
 * Automatically generated header file: don't edit
 */

#define HAVE_DOT_CONFIG 1
#undef CONFIG_PLATFORM_LINUX
#define CONFIG_PLATFORM_CYGWIN 1
#undef CONFIG_PLATFORM_WIN32

/*
 * General Configuration
 */
#define PREFIX "/usr/local"
#define CONFIG_DEBUG 1
#undef CONFIG_STRIP_UNWANTED_SECTIONS
#undef CONFIG_VISUAL_STUDIO_7_0
#undef CONFIG_VISUAL_STUDIO_8_0
#undef CONFIG_VISUAL_STUDIO_10_0
#define CONFIG_VISUAL_STUDIO_7_0_BASE ""
#define CONFIG_VISUAL_STUDIO_8_0_BASE ""
#define CONFIG_VISUAL_STUDIO_10_0_BASE ""
#define CONFIG_EXTRA_CFLAGS_OPTIONS ""
#define CONFIG_EXTRA_LDFLAGS_OPTIONS ""

/*
 * SSL Library
 */
#undef CONFIG_SSL_SERVER_ONLY
#undef CONFIG_SSL_CERT_VERIFICATION
#undef CONFIG_SSL_ENABLE_CLIENT
#define CONFIG_SSL_FULL_MODE 1
#undef CONFIG_SSL_SKELETON_MODE
#undef CONFIG_SSL_PROT_LOW
#define CONFIG_SSL_PROT_MEDIUM 1
#undef CONFIG_SSL_PROT_HIGH
#define CONFIG_SSL_USE_DEFAULT_KEY
#define CONFIG_SSL_PRIVATE_KEY_LOCATION ""
#define CONFIG_SSL_PRIVATE_KEY_PASSWORD ""
#define CONFIG_SSL_X509_CERT_LOCATION ""
#undef CONFIG_SSL_GENERATE_X509_CERT
#define CONFIG_SSL_X509_COMMON_NAME ""
#define CONFIG_SSL_X509_ORGANIZATION_NAME ""
#define CONFIG_SSL_X509_ORGANIZATION_UNIT_NAME ""
#undef CONFIG_SSL_ENABLE_V23_HANDSHAKE
#define CONFIG_SSL_HAS_PEM 1
#undef CONFIG_SSL_USE_PKCS12
#define CONFIG_SSL_EXPIRY_TIME 24
#define CONFIG_X509_MAX_CA_CERTS 150
#define CONFIG_SSL_MAX_CERTS 3
#undef CONFIG_SSL_CTX_MUTEXING
#undef CONFIG_USE_DEV_URANDOM
#undef CONFIG_WIN32_USE_CRYPTO_LIB
#undef CONFIG_OPENSSL_COMPATIBLE
#undef CONFIG_PERFORMANCE_TESTING
#define CONFIG_SSL_TEST 1
#undef CONFIG_AXTLSWRAP
#define CONFIG_AXHTTPD 1

/*
 * Axhttpd Configuration
 */
#undef CONFIG_HTTP_STATIC_BUILD
#define CONFIG_HTTP_PORT 80
#define CONFIG_HTTP_HTTPS_PORT 443
#define CONFIG_HTTP_SESSION_CACHE_SIZE 5
#define CONFIG_HTTP_WEBROOT "../www"
#define CONFIG_HTTP_TIMEOUT 300

/*
 * CGI
 */
#undef CONFIG_HTTP_HAS_CGI 
#define CONFIG_HTTP_CGI_EXTENSIONS ".lua,.lp,.php"
#define CONFIG_HTTP_ENABLE_LUA 1
#define CONFIG_HTTP_LUA_PREFIX "/usr"
#undef CONFIG_HTTP_BUILD_LUA
#define CONFIG_HTTP_CGI_LAUNCHER "/usr/bin/cgi"
#define CONFIG_HTTP_DIRECTORIES 1
#define CONFIG_HTTP_HAS_AUTHORIZATION 1
#undef CONFIG_HTTP_HAS_IPV6
#undef CONFIG_HTTP_ENABLE_DIFFERENT_USER
#define CONFIG_HTTP_USER ""
#define CONFIG_HTTP_VERBOSE 0
#undef CONFIG_HTTP_IS_DAEMON

/*
 * Language Bindings
 */
#undef CONFIG_BINDINGS
#undef CONFIG_CSHARP_BINDINGS
#undef CONFIG_VBNET_BINDINGS
#define CONFIG_DOT_NET_FRAMEWORK_BASE ""
#undef CONFIG_JAVA_BINDINGS
#define CONFIG_JAVA_HOME ""
#undef CONFIG_PERL_BINDINGS
#define CONFIG_PERL_CORE ""
#define CONFIG_PERL_LIB ""
#undef CONFIG_LUA_BINDINGS
#define CONFIG_LUA_CORE ""

/*
 * Samples
 */
#define CONFIG_SAMPLES 1
#define CONFIG_C_SAMPLES 1
#undef CONFIG_CSHARP_SAMPLES
#undef CONFIG_VBNET_SAMPLES
#undef CONFIG_JAVA_SAMPLES
#undef CONFIG_PERL_SAMPLES
#undef CONFIG_LUA_SAMPLES

/*
 * BigInt Options
 */
#undef CONFIG_BIGINT_CLASSICAL
#undef CONFIG_BIGINT_MONTGOMERY
#define CONFIG_BIGINT_BARRETT 1
#define CONFIG_BIGINT_CRT 1
#undef CONFIG_BIGINT_KARATSUBA
#define MUL_KARATSUBA_THRESH 
#define SQU_KARATSUBA_THRESH 
#define CONFIG_BIGINT_SLIDING_WINDOW 1
#define CONFIG_BIGINT_SQUARE 1
#define CONFIG_BIGINT_CHECK_ON 1
#define CONFIG_INTEGER_32BIT 1
#undef CONFIG_INTEGER_16BIT
#undef CONFIG_INTEGER_8BIT
