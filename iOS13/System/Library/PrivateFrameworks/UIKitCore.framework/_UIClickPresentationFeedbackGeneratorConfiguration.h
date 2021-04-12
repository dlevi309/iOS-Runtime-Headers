/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@interface _UIClickPresentationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (nonatomic,readonly) _UIFeedback*<_UIFeedbackDiscretePlayable> previewedPattern; 
@property (nonatomic,readonly) _UIFeedback*<_UIFeedbackDiscretePlayable> poppedPattern; 
@property (nonatomic,readonly) _UIFeedback*<_UIFeedbackDiscretePlayable> draggedPattern; 
+(id)defaultConfiguration;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)previewedPattern;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)poppedPattern;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)draggedPattern;
@end

