/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_stats_key;
-(void)dropTargetUpdated;
-(void)_stopPlayingContinuousFeedback;
-(long long)_state;
-(void)_setState:(long long)arg1 ;
-(void)userInteractionCancelled;
-(void)positionUpdated;
-(id)_playingContinuousFeedback;
-(void)_startPlayingContinuousFeedback;
-(id)_dragConfiguration;
-(void)userInteractionEnded;
-(void)userInteractionStarted;
-(void)_setPlayingContinuousFeedback:(id)arg1 ;
-(void)_startPlayingContinuousFeedbackNow;
@end

