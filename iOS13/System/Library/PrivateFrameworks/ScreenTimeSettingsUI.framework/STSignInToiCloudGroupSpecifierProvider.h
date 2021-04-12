/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setCoordinator:(id)arg1 ;
-(void)signInController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)signInControllerDidCancel:(id)arg1 ;
-(PSSpecifier *)signInSpecifier;
-(void)setSignInSpecifier:(PSSpecifier *)arg1 ;
-(void)_updateEnabledValue;
-(void)presentAppleAccountSignInController:(id)arg1 ;
@end

