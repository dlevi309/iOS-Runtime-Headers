/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback, _UIModulationFeedbackGeneratorConfiguration;

@interface _UIModulationFeedbackGenerator : UIFeedbackGenerator {

	double _currentValue;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;

}

@property (getter=_modulationConfiguration,nonatomic,readonly) _UIModulationFeedbackGeneratorConfiguration * modulationConfiguration; 
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;                                                //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
+(Class)_configurationClass;
-(void)deactivate;
-(void)activateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)valueUpdated:(double)arg1 ;
-(id)_stats_key;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)playingContinuousFeedback;
-(id)_modulationConfiguration;
-(void)setPlayingContinuousFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(void)activateWithInitialValue:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

