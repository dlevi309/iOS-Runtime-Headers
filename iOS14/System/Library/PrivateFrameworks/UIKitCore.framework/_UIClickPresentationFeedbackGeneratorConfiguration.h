/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@interface _UIClickPresentationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (nonatomic,readonly) _UIFeedback*<_UIFeedbackDiscretePlayable> previewedPattern; 
@property (nonatomic,readonly) _UIFeedback*<_UIFeedbackDiscretePlayable> poppedPattern; 
@property (nonatomic,readonly) _UIFeedback*<_UIFeedbackDiscretePlayable> draggedPattern; 
+(id)defaultConfiguration;
-(id)feedbackKeyPaths;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)previewedPattern;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)draggedPattern;
-(long long)requiredSupportLevel;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)poppedPattern;
@end

