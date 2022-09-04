///////////////////////////////////////////////////////////////////////
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: key.cpp
///
/// Author: $author$
///   Date: 4/16/2022
///////////////////////////////////////////////////////////////////////
#include "xos/crypto/rsa/mp/key.hpp"
#include "xos/crypto/rsa/mp/license.cpp"

#if !defined(XOS_CRYPTO_RSA_MP_KEY_INSTANCE)
///#define XOS_CRYPTO_RSA_MP_KEY_INSTANCE
#endif /// !defined(XOS_CRYPTO_RSA_MP_KEY_INSTANCE)

namespace xos {
namespace crypto {
namespace rsa {
namespace mp {

///  Class: keyt
#if defined(XOS_CRYPTO_RSA_MP_KEY_INSTANCE)
static key the_key;
#endif /// defined(XOS_CRYPTO_RSA_MP_KEY_INSTANCE)


} /// namespace mp
} /// namespace rsa
} /// namespace crypto
} /// namespace xos
