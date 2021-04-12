/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback, _UIDragFeedbackGeneratorConfiguration;

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {

	long long _state;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;

}

@property (getter=_dragConfiguration,nonatomic,readonly) _UIDragFeedbackGeneratorConfiguration * dragConfiguration; 
@property (assign,setter=_setState:,getter=_state,nonatomic) long long state;                                                                                                            //@synthesize state=_state - In the implementation block
@property (setter=_setPlayingContinuousFeedback:,getter=_playingContinuousFeedback,nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;              //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
+(Class)_configurationClass;
-(long long)_state;
-(void)_setState:(long long)arg1 ;
-(void)userInteractionStarted;
-(void)userInteractionEnded;
-(void)positionUpdated;
-(void)userInteractionCancelled;
-(id)_stats_key;
-(id)_dragConfiguration;
-(void)_startPlayingContinuousFeedback;
-(void)_stopPlayingContinuousFeedback;
-(void)_startPlayingContinuousFeedbackNow;
-(void)_setPlayingContinuousFeedback:(id)arg1 ;
-(void)dropTargetUpdated;
-(id)_playingContinuousFeedback;
@end

