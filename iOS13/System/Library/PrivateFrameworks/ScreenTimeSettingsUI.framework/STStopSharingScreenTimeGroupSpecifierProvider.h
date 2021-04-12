/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STStopSharingScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _stopSharingScreenTimeSpecifier;

}

@property (nonatomic,retain) PSSpecifier * stopSharingScreenTimeSpecifier;              //@synthesize stopSharingScreenTimeSpecifier=_stopSharingScreenTimeSpecifier - In the implementation block
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
-(void)disableScreenTime:(id)arg1 ;
-(void)confirmStopSharingScreenTime:(id)arg1 ;
-(void)setStopSharingScreenTimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)stopSharingScreenTimeSpecifier;
@end

