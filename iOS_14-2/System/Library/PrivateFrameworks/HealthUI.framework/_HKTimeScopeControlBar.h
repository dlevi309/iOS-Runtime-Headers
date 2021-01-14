/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKTimeScopeControl.h>

@class UISegmentedControl;

@interface _HKTimeScopeControlBar : HKTimeScopeControl {

	UISegmentedControl* _segments;

}
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelectedTimeScope:(long long)arg1 ;
-(long long)selectedTimeScope;
-(id)initWithFrame:(CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(BOOL)arg3 ;
-(void)_segmentValueChanged:(id)arg1 ;
@end

