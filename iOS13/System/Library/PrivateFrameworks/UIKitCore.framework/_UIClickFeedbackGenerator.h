/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
+(Class)_configurationClass;
-(void)userInteractionStarted;
-(void)userInteractionEnded;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(void)userInteractionCancelled;
-(id)_clickConfiguration;
-(void)pressedDown;
-(void)pressedUp;
@end

