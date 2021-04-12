/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(BOOL)arg2 ;
-(id)deviceProvisioningInfo;
-(void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(BOOL)arg2 ;
-(id)initWithDSID:(id)arg1 ;
-(void)addProvisioningInfoToAARequest:(id)arg1 ;
-(void)setCookieStorageRef:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(int)provisionDeviceWithData:(id)arg1 ;
-(int)synchronizeProvisioningWithData:(id)arg1 ;
-(int)eraseProvisioning;
-(id)initWithAccount:(id)arg1 ;
@end

