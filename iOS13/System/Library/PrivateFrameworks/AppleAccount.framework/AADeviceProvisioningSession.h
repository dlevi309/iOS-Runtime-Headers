/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AADeviceProvisioningSession : NSObject {

	NSString* _dsid;
	unsigned long long _dsidNumber;
	OpaqueCFHTTPCookieStorageRef _cookieStorageRef;

}
-(id)init;
-(id)initWithAccount:(id)arg1 ;
-(void)addProvisioningInfoToAARequest:(id)arg1 ;
-(id)initWithDSID:(id)arg1 ;
-(void)setCookieStorageRef:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(int)provisionDeviceWithData:(id)arg1 ;
-(int)synchronizeProvisioningWithData:(id)arg1 ;
-(int)eraseProvisioning;
-(void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(BOOL)arg2 ;
-(id)deviceProvisioningInfo;
-(void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(BOOL)arg2 ;
@end

