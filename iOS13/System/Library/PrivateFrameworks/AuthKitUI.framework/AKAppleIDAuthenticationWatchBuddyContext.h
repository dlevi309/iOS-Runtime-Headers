/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class NSString, RUIStyle;

@interface AKAppleIDAuthenticationWatchBuddyContext : AKAppleIDAuthenticationInAppContext <RemoteUIControllerDelegate> {

	NSString* _password;
	RUIStyle* _remoteUIStyle;

}

@property (nonatomic,retain) RUIStyle * remoteUIStyle;              //@synthesize remoteUIStyle=_remoteUIStyle - In the implementation block
@property (nonatomic,retain) NSString * password;                   //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(RUIStyle *)remoteUIStyle;
-(void)willPresentModalNavigationController:(id)arg1 ;
-(void)setRemoteUIStyle:(RUIStyle *)arg1 ;
@end

