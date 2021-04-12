/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable;
@class _UIFeedback;

@interface _UIFeedbackStateChangeConfiguration : NSObject <NSCopying> {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _thresholdFeedback;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _approachFeedback;
	double _approachStart;
	double _approachEnd;
	double _approachCurvature;
	double _approachVolumeMax;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> thresholdFeedback;               //@synthesize thresholdFeedback=_thresholdFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> approachFeedback;              //@synthesize approachFeedback=_approachFeedback - In the implementation block
@property (assign,nonatomic) double approachStart;                                                      //@synthesize approachStart=_approachStart - In the implementation block
@property (assign,nonatomic) double approachEnd;                                                        //@synthesize approachEnd=_approachEnd - In the implementation block
@property (assign,nonatomic) double approachCurvature;                                                  //@synthesize approachCurvature=_approachCurvature - In the implementation block
@property (assign,nonatomic) double approachVolumeMax;                                                  //@synthesize approachVolumeMax=_approachVolumeMax - In the implementation block
-(double)approachEnd;
-(double)approachStart;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)approachFeedback;
-(double)approachCurvature;
-(double)approachVolumeMax;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)thresholdFeedback;
-(void)setThresholdFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setApproachFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(void)setApproachStart:(double)arg1 ;
-(void)setApproachEnd:(double)arg1 ;
-(void)setApproachCurvature:(double)arg1 ;
-(void)setApproachVolumeMax:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

