/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class UIViewController, PSSpecifier, NSString;

@interface STSetUpForFamilyGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {

	UIViewController* _presenter;
	PSSpecifier* _setupFamilySpecifier;

}

@property (assign,nonatomic,__weak) UIViewController * presenter;               //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) PSSpecifier * setupFamilySpecifier;              //@synthesize setupFamilySpecifier=_setupFamilySpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithCoordinator:(id)arg1 presenter:(id)arg2 ;
-(void)setPresenter:(UIViewController *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(UIViewController *)presenter;
-(void)dealloc;
-(void)_updateEnabledValue;
-(void)presentAppleAccountSetupFamilyController:(id)arg1 ;
-(PSSpecifier *)setupFamilySpecifier;
@end

