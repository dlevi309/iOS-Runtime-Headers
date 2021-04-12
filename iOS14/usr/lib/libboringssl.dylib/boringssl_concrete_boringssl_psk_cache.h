/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libboringssl.dylib
*/

#import <libobjc.A.dylib/OS_boringssl_psk_cache.h>

@protocol OS_sec_array, OS_dispatch_queue;
@class NSObject, boringssl_concrete_boringssl_ctx, NSString;

@interface boringssl_concrete_boringssl_psk_cache : NSObject <OS_boringssl_psk_cache> {

	NSObject*<OS_sec_array> list;
	boringssl_concrete_boringssl_ctx* context;
	/*^block*/id psk_selection_block;
	NSObject*<OS_dispatch_queue> psk_selection_queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@end

