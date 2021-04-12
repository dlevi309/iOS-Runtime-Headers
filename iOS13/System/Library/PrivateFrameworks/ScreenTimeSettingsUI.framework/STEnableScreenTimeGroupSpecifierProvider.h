/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class PSSpecifier, UIViewController, NSString;

@interface STEnableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {

	PSSpecifier* _setupScreenTimeSpecifier;
	UIViewController* _rootViewController;

}

@property (retain) PSSpecifier * setupScreenTimeSpecifier;              //@synthesize setupScreenTimeSpecifier=_setupScreenTimeSpecifier - In the implementation block
@property (__weak) UIViewController * rootViewController;               //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)setCoordinator:(id)arg1 ;
-(void)saveValuesForModel:(id)arg1 ;
-(void)setupScreenTime:(id)arg1 ;
-(id)enableScreenTimeFooterText;
-(PSSpecifier *)setupScreenTimeSpecifier;
-(void)setSetupScreenTimeSpecifier:(PSSpecifier *)arg1 ;
@end

