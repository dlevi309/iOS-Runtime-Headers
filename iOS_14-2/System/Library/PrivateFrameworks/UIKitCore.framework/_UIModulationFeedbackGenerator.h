/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_stats_key;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)playingContinuousFeedback;
-(void)deactivate;
-(void)setPlayingContinuousFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(void)activateWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_modulationConfiguration;
-(void)activateWithInitialValue:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)valueUpdated:(double)arg1 ;
@end

