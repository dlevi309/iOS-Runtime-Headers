/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@protocol UIFeedbackGeneratorUserInteractionDriven;
@interface _TVRButtonHaptic : NSObject {

	id<UIFeedbackGeneratorUserInteractionDriven> _behavior;

}

@property (nonatomic,retain) id<UIFeedbackGeneratorUserInteractionDriven> behavior;              //@synthesize behavior=_behavior - In the implementation block
+(id)hapticForView:(id)arg1 ;
-(void)setBehavior:(id<UIFeedbackGeneratorUserInteractionDriven>)arg1 ;
-(void)userInteractionCancelled;
-(id<UIFeedbackGeneratorUserInteractionDriven>)behavior;
-(void)userInteractionEnded;
-(void)userInteractionBegan;
@end

