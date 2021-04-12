/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKTimeScopeControl.h>

@class NSArray;

@interface _HKTimeScopeControlPill : HKTimeScopeControl {

	NSArray* _buttons;
	long long _selectedButtonIndex;

}
-(void)layoutSubviews;
-(void)setSelectedTimeScope:(long long)arg1 ;
-(long long)selectedTimeScope;
-(id)initWithFrame:(CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(BOOL)arg3 ;
-(id)_generateButtonsWithTimeScopes:(id)arg1 shortTextStyle:(BOOL)arg2 ;
-(void)_selectButtonAtIndex:(long long)arg1 ;
-(void)_setSelectedButtonIndex:(long long)arg1 ;
-(void)_deselectAllButtons;
-(void)_buttonSelected:(id)arg1 ;
@end

