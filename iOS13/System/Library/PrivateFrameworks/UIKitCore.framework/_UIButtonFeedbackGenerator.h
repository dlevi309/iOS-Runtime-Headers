/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@class _UIButtonFeedbackGeneratorConfiguration;

@interface _UIButtonFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

@property (getter=_buttonConfiguration,nonatomic,readonly) _UIButtonFeedbackGeneratorConfiguration * buttonConfiguration; 
+(Class)_configurationClass;
-(id)initWithStyle:(long long)arg1 ;
-(void)userInteractionStarted;
-(void)userInteractionEnded;
-(void)userInteractionCancelled;
-(id)_stats_key;
-(id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
-(id)_buttonConfiguration;
@end

