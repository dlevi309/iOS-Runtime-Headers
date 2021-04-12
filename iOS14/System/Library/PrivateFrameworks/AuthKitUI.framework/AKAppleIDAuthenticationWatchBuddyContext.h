/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRemoteUIStyle:(RUIStyle *)arg1 ;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(RUIStyle *)remoteUIStyle;
-(NSString *)password;
-(void)willPresentModalNavigationController:(id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPassword:(NSString *)arg1 ;
@end

