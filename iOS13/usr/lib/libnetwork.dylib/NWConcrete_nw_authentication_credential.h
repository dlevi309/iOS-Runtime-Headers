/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_authentication_credential.h>

@protocol OS_sec_identity, OS_xpc_object;
@class NSObject, NSString;

@interface NWConcrete_nw_authentication_credential : NSObject <OS_nw_authentication_credential> {

	int type;
	char* username;
	char* password;
	NSObject*<OS_sec_identity> identity;
	NSObject*<OS_xpc_object> valid_authentication_types;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
@end

