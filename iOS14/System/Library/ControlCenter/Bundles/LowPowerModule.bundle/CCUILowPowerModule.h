/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/LowPowerModule.bundle/LowPowerModule
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>

@class _CDBatterySaver;

@interface CCUILowPowerModule : CCUIToggleModule {

	_CDBatterySaver* _batterySaver;

}
-(void)_observeSystemNotifications;
-(void)_updateForDarkerSystemColorsChange;
-(id)init;
-(id)glyphState;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateState;
-(id)glyphPackageDescription;
-(void)_unobserveSystemNotifications;
-(void)dealloc;
@end

