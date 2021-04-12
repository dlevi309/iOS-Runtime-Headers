/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libboringssl.dylib
*/

#import <libboringssl.dylib/libboringssl.dylib-Structs.h>
#import <libobjc.A.dylib/OS_boringssl_identity.h>

@protocol OS_sec_array, OS_sec_identity, OS_dispatch_queue, OS_dispatch_data;
@class NSObject, NSString;

@interface boringssl_concrete_boringssl_identity : NSObject <OS_boringssl_identity> {

	_SecKey* private_key;
	NSObject*<OS_sec_array> certificates;
	NSObject*<OS_sec_identity> identity;
	/*^block*/id sign_block;
	/*^block*/id decrypt_block;
	NSObject*<OS_dispatch_queue> queue;
	BOOL private_key_operation_complete;
	NSObject*<OS_dispatch_data> signature_result;
	NSObject*<OS_dispatch_data> decryption_result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

