/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@class _UIButtonFeedbackGeneratorConfiguration;

@interface _UIButtonFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

@property (getter=_buttonConfiguration,nonatomic,readonly) _UIButtonFeedbackGeneratorConfiguration * buttonConfiguration; 
+(Class)_configurationClass;
-(id)_stats_key;
-(id)initWithStyle:(long long)arg1 ;
-(void)userInteractionCancelled;
-(id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
-(void)userInteractionEnded;
-(void)userInteractionStarted;
-(id)_buttonConfiguration;
@end

