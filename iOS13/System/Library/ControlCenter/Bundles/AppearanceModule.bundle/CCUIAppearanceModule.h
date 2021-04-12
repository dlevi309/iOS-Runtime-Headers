/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/AppearanceModule.bundle/AppearanceModule
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>

@interface CCUIAppearanceModule : CCUIToggleModule
-(id)init;
-(void)dealloc;
-(BOOL)isSelected;
-(id)_timeFormatter;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateState;
-(id)glyphPackageDescription;
-(id)glyphState;
-(double)glyphScale;
-(void)_toggleStyleMode;
-(void)_styleModeDidChange;
-(id)_subtitleForUserInterfaceStyle:(long long)arg1 nextTransition:(id)arg2 ;
-(id)_timeStringForHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(unsigned long long)_formattedHourForHour:(unsigned long long)arg1 ;
-(BOOL)_uses24HourTime;
-(void)_observeArbiterStyleChangeNotifications;
-(void)_unobserveArbiterStyleChangeNotifications;
@end

