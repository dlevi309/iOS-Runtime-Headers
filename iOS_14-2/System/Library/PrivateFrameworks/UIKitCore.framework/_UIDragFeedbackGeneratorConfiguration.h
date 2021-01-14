/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@protocol _UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIDragFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {

	_UIFeedback*<_UIFeedbackContinuousPlayable> _interactionProgressingFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _interactionUpdatedFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _targetUpdatedFeedback;
	double _progressingFeedbackDelay;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> interactionProgressingFeedback;              //@synthesize interactionProgressingFeedback=_interactionProgressingFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> interactionUpdatedFeedback;                    //@synthesize interactionUpdatedFeedback=_interactionUpdatedFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> targetUpdatedFeedback;                         //@synthesize targetUpdatedFeedback=_targetUpdatedFeedback - In the implementation block
@property (assign,nonatomic) double progressingFeedbackDelay;                                                         //@synthesize progressingFeedbackDelay=_progressingFeedbackDelay - In the implementation block
+(id)defaultConfiguration;
-(id)feedbackKeyPaths;
-(void)setInteractionProgressingFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(double)progressingFeedbackDelay;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)targetUpdatedFeedback;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)interactionProgressingFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)interactionUpdatedFeedback;
-(void)setInteractionUpdatedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(long long)requiredSupportLevel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTargetUpdatedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setProgressingFeedbackDelay:(double)arg1 ;
@end

