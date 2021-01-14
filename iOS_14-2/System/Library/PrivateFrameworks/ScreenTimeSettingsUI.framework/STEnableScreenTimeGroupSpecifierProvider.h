/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)dealloc;
-(void)saveValuesForModel:(id)arg1 ;
-(void)setupScreenTime:(id)arg1 ;
-(id)enableScreenTimeFooterText;
-(PSSpecifier *)setupScreenTimeSpecifier;
-(void)setSetupScreenTimeSpecifier:(PSSpecifier *)arg1 ;
@end

