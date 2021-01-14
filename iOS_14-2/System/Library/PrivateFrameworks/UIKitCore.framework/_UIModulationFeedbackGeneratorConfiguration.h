/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)feedbackKeyPaths;
-(void)setFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)feedback;
-(void)setFeedbackUpdateBlock:(id)arg1 ;
-(id)feedbackUpdateBlock;
-(long long)requiredSupportLevel;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

