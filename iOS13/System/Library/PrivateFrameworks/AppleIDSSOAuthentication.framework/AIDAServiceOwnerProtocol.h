/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
*/


@protocol AIDAServiceOwnerProtocol <NSObject>
@required
+(id)supportedServices;
-(id)initWithAccountStore:(id)arg1;
-(void)signInService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)accountForService:(id)arg1;
-(id)altDSIDForAccount:(id)arg1 service:(id)arg2;
-(id)DSIDForAccount:(id)arg1 service:(id)arg2;
-(id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
-(void)signOutService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;

@end

