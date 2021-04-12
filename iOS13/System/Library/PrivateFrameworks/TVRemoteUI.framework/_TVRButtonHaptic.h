/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@protocol UIFeedbackGeneratorUserInteractionDriven;
@interface _TVRButtonHaptic : NSObject {

	id<UIFeedbackGeneratorUserInteractionDriven> _behavior;

}

@property (nonatomic,retain) id<UIFeedbackGeneratorUserInteractionDriven> behavior;              //@synthesize behavior=_behavior - In the implementation block
+(id)hapticForView:(id)arg1 ;
-(void)userInteractionEnded;
-(void)userInteractionCancelled;
-(id<UIFeedbackGeneratorUserInteractionDriven>)behavior;
-(void)setBehavior:(id<UIFeedbackGeneratorUserInteractionDriven>)arg1 ;
-(void)userInteractionBegan;
@end

