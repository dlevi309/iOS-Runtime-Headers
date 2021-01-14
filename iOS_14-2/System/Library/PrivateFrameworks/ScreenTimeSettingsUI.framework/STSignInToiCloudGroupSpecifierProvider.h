/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>
#import <libobjc.A.dylib/AAUISignInControllerDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class PSSpecifier, NSString;

@interface STSignInToiCloudGroupSpecifierProvider : STRootGroupSpecifierProvider <AAUISignInControllerDelegate, MCProfileConnectionObserver> {

	PSSpecifier* _signInSpecifier;

}

@property (nonatomic,retain) PSSpecifier * signInSpecifier;              //@synthesize signInSpecifier=_signInSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)signInController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)signInControllerDidCancel:(id)arg1 ;
-(void)dealloc;
-(PSSpecifier *)signInSpecifier;
-(void)setSignInSpecifier:(PSSpecifier *)arg1 ;
-(void)_updateEnabledValue;
-(void)presentAppleAccountSignInController:(id)arg1 ;
@end

