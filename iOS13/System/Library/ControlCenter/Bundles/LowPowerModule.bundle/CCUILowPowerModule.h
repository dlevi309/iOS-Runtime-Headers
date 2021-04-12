/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/LowPowerModule.bundle/LowPowerModule
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>

@class _CDBatterySaver;

@interface CCUILowPowerModule : CCUIToggleModule {

	_CDBatterySaver* _batterySaver;

}
-(id)init;
-(void)dealloc;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateState;
-(id)glyphPackageDescription;
-(id)glyphState;
-(void)_observeSystemNotifications;
-(void)_unobserveSystemNotifications;
-(void)_updateForDarkerSystemColorsChange;
@end

