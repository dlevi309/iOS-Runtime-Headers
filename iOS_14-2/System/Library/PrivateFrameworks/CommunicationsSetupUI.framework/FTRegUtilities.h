/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/


@interface FTRegUtilities : NSObject
+(id)serviceWithType:(long long)arg1 ;
+(id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3 ;
+(id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2 ;
+(void)changePasswordControllerDidCancel:(id)arg1 ;
+(void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
+(void)authorizationController:(id)arg1 authorizedAccount:(BOOL)arg2 ;
@end

