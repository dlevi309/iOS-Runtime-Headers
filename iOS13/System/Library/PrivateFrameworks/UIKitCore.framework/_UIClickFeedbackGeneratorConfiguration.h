/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _clickDownFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _clickDownAudioFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _clickUpFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _clickUpAudioFeedback;

}

@property (nonatomic,readonly) _UIFeedback*<_UIFeedbackDiscretePlayable> clickDownPattern; 
@property (nonatomic,readonly) _UIFeedback*<_UIFeedbackDiscretePlayable> clickUpPattern; 
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> clickDownFeedback;                   //@synthesize clickDownFeedback=_clickDownFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> clickDownAudioFeedback;              //@synthesize clickDownAudioFeedback=_clickDownAudioFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> clickUpFeedback;                     //@synthesize clickUpFeedback=_clickUpFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> clickUpAudioFeedback;                //@synthesize clickUpAudioFeedback=_clickUpAudioFeedback - In the implementation block
+(id)defaultConfiguration;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)clickDownPattern;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)clickUpPattern;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)clickDownFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)clickDownAudioFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)clickUpFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)clickUpAudioFeedback;
-(void)setClickDownFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setClickDownAudioFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setClickUpFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setClickUpAudioFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setclickDownFeedback:(id)arg1 ;
@end

