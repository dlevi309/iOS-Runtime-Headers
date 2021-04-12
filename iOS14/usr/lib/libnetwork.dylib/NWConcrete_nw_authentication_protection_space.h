/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_authentication_protection_space.h>

@protocol OS_nw_endpoint;
@class NSObject, NSString;

@interface NWConcrete_nw_authentication_protection_space : NSObject <OS_nw_authentication_protection_space> {

	NSObject*<OS_nw_endpoint> endpoint;
	unsigned is_proxy : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

