/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
*/


@protocol AIDAServiceOwnerProtocol <NSObject>
@required
+(id)supportedServices;
-(void)signOutService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)altDSIDForAccount:(id)arg1 service:(id)arg2;
-(id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
-(id)accountForService:(id)arg1;
-(id)DSIDForAccount:(id)arg1 service:(id)arg2;
-(void)signInService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)initWithAccountStore:(id)arg1;

@end

