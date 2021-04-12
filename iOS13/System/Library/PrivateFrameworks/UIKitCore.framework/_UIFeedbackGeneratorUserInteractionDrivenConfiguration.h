/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIFeedbackGeneratorUserInteractionDrivenConfiguration : _UIFeedbackGeneratorConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _interactionStartedFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _interactionEndedFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _interactionCancelledFeedback;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> interactionStartedFeedback;                //@synthesize interactionStartedFeedback=_interactionStartedFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> interactionEndedFeedback;                  //@synthesize interactionEndedFeedback=_interactionEndedFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> interactionCancelledFeedback;              //@synthesize interactionCancelledFeedback=_interactionCancelledFeedback - In the implementation block
-(id)feedbackKeyPaths;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)interactionStartedFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)interactionEndedFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)interactionCancelledFeedback;
-(void)setInteractionStartedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setInteractionEndedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setInteractionCancelledFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
@end

