/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@protocol _UIFeedbackContinuousPlayable;
@class NSString, _UIFeedback, _UIStatesFeedbackGeneratorConfiguration;

@interface _UIStatesFeedbackGenerator : UIFeedbackGenerator {

	BOOL _approachActivated;
	NSString* _currentState;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;

}

@property (assign,setter=_setApproachActivated:,getter=_approachActivated,nonatomic) BOOL approachActivated;                           //@synthesize approachActivated=_approachActivated - In the implementation block
@property (getter=_statesConfiguration,nonatomic,readonly) _UIStatesFeedbackGeneratorConfiguration * statesConfiguration; 
@property (nonatomic,retain) NSString * currentState;                                                                                  //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;                                    //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
+(Class)_configurationClass;
-(id)_stats_key;
-(void)setCurrentState:(NSString *)arg1 ;
-(void)_stopPlayingContinuousFeedback;
-(void)transitionToState:(id)arg1 updated:(double)arg2 ;
-(NSString *)currentState;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)playingContinuousFeedback;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
-(void)_setApproachActivated:(BOOL)arg1 ;
-(id)_configurationFromState:(id)arg1 toState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2 ;
-(id)_statesConfiguration;
-(void)transitionToState:(id)arg1 ended:(BOOL)arg2 ;
-(void)setPlayingContinuousFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(BOOL)_approachActivated;
@end

