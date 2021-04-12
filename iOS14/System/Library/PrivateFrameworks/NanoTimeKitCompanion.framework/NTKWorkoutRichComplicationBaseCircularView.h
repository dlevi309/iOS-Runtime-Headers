/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKWorkoutRichComplicationCircularContentView;

@interface NTKWorkoutRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {

	NTKWorkoutRichComplicationCircularContentView* _richView;

}
-(void)layoutSubviews;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_applyPausedUpdate;
-(id)_workoutImageName;
-(id)_animatedImagesName;
@end

