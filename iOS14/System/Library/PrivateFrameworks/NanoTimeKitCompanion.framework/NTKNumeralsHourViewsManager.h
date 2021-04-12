/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CLKDevice, NSArray;

@interface NTKNumeralsHourViewsManager : NSObject {

	CLKDevice* _device;
	NSArray* _hourViews;
	long long _visibleHour;
	long long _visibleComplicationSlot;
	BOOL _areComplicationsOff;
	BOOL _adjustingForStatusIndicator;
	BOOL _hasUpperComplication;

}
-(void)applyFaceColorFromFaceConfiguration:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4 ;
-(void)setAdjustsForStatusIndicator:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)configureForEditMode:(long long)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 faceConfiguration:(id)arg4 ;
-(void)removeHourViews;
-(id)initWithStyleFromFaceConfiguration:(id)arg1 forDevice:(id)arg2 ;
-(void)updateVisibleHour:(long long)arg1 targetUtilitySlot:(long long)arg2 faceConfiguration:(id)arg3 animationProgress:(double)arg4 forEditMode:(long long)arg5 ;
-(void)addHourViewsToSuperview:(id)arg1 ;
-(void)applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 ;
-(void)applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 ;
-(BOOL)needHourAnimationForChangeToHour:(long long)arg1 toFaceConfiguration:(id)arg2 ;
-(id)_visibleHourView;
-(id)_hourViewForHour:(long long)arg1 loadIfNeeded:(BOOL)arg2 ;
-(void)_update12AdjustmentForStatusIndicator;
-(double)_hourAlphaForEditMode:(long long)arg1 ;
-(CGPoint)_currentHourViewPlacementForEditMode:(long long)arg1 faceConfiguration:(id)arg2 ;
@end

