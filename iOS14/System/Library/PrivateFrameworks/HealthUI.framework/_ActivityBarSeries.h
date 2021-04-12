/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKBarSeries.h>

@protocol HKActivityBarSeriesDelegate;
@class HKUnitPreferenceController, HKFillStyle, HKDisplayTypeController;

@interface _ActivityBarSeries : HKBarSeries {

	HKUnitPreferenceController* _unitPreferenceController;
	HKFillStyle* _missedGoalUnselectedFillStyle;
	id<HKActivityBarSeriesDelegate> _activityBarDelegate;
	HKDisplayTypeController* _displayTypeController;
	long long _activityDisplayTypeIdentifier;
	double _lastLegendUpdateTime;

}

@property (nonatomic,readonly) HKUnitPreferenceController * unitPreferenceController;                 //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (nonatomic,retain) HKFillStyle * missedGoalUnselectedFillStyle;                             //@synthesize missedGoalUnselectedFillStyle=_missedGoalUnselectedFillStyle - In the implementation block
@property (assign,nonatomic,__weak) id<HKActivityBarSeriesDelegate> activityBarDelegate;              //@synthesize activityBarDelegate=_activityBarDelegate - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;                       //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (assign,nonatomic) long long activityDisplayTypeIdentifier;                                 //@synthesize activityDisplayTypeIdentifier=_activityDisplayTypeIdentifier - In the implementation block
@property (assign,nonatomic) double lastLegendUpdateTime;                                             //@synthesize lastLegendUpdateTime=_lastLegendUpdateTime - In the implementation block
-(BOOL)supportsMultiTouchSelection;
-(HKDisplayTypeController *)displayTypeController;
-(HKUnitPreferenceController *)unitPreferenceController;
-(void)updateLegendsForTimeScope:(long long)arg1 range:(id)arg2 ;
-(void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContextRef)arg4 axisRect:(CGRect)arg5 ;
-(void)_drawPath:(id)arg1 withFillStyle:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
-(id)initWithUnitPreferenceController:(id)arg1 activityBarDelegate:(id)arg2 displayTypeController:(id)arg3 ;
-(void)setActivityDisplayTypeIdentifier:(long long)arg1 ;
-(void)setMissedGoalUnselectedFillStyle:(HKFillStyle *)arg1 ;
-(double)lastLegendUpdateTime;
-(void)setLastLegendUpdateTime:(double)arg1 ;
-(HKFillStyle *)missedGoalUnselectedFillStyle;
-(id<HKActivityBarSeriesDelegate>)activityBarDelegate;
-(void)setActivityBarDelegate:(id<HKActivityBarSeriesDelegate>)arg1 ;
-(long long)activityDisplayTypeIdentifier;
@end

