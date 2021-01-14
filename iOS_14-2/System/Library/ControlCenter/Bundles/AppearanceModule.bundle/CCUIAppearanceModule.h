/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/AppearanceModule.bundle/AppearanceModule
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>

@interface CCUIAppearanceModule : CCUIToggleModule
-(id)_timeFormatter;
-(id)init;
-(BOOL)_uses24HourTime;
-(id)_timeStringForHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(id)glyphState;
-(BOOL)isSelected;
-(void)_toggleStyleMode;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateState;
-(void)_styleModeDidChange;
-(id)glyphPackageDescription;
-(double)glyphScale;
-(unsigned long long)_formattedHourForHour:(unsigned long long)arg1 ;
-(id)_subtitleForUserInterfaceStyle:(long long)arg1 nextTransition:(id)arg2 ;
-(void)dealloc;
-(void)_observeArbiterStyleChangeNotifications;
-(void)_unobserveArbiterStyleChangeNotifications;
@end

