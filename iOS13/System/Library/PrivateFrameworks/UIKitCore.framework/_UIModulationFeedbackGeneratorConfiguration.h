/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback;

@interface _UIModulationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	_UIFeedback*<_UIFeedbackContinuousPlayable> _feedback;
	/*^block*/id _feedbackUpdateBlock;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy) id feedbackUpdateBlock;                                              //@synthesize feedbackUpdateBlock=_feedbackUpdateBlock - In the implementation block
+(id)defaultConfiguration;
+(id)sliderConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)feedback;
-(void)setFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(void)setFeedbackUpdateBlock:(id)arg1 ;
-(id)feedbackUpdateBlock;
@end

