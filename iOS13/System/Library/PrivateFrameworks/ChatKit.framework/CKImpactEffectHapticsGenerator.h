/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CK_UIFeedBackImpactBehavior;
@class NSObject;

@interface CKImpactEffectHapticsGenerator : NSObject {

	BOOL _sendFeedbackImpactBehavior;
	NSObject*<CK_UIFeedBackImpactBehavior> _expressiveSendFeedbackImpactBehavior;
	double _feedbackImpactBehaviorDispatchDelay;

}

@property (nonatomic,retain) NSObject*<CK_UIFeedBackImpactBehavior> expressiveSendFeedbackImpactBehavior;              //@synthesize expressiveSendFeedbackImpactBehavior=_expressiveSendFeedbackImpactBehavior - In the implementation block
@property (assign,nonatomic) double feedbackImpactBehaviorDispatchDelay;                                               //@synthesize feedbackImpactBehaviorDispatchDelay=_feedbackImpactBehaviorDispatchDelay - In the implementation block
@property (assign,nonatomic) BOOL sendFeedbackImpactBehavior;                                                          //@synthesize sendFeedbackImpactBehavior=_sendFeedbackImpactBehavior - In the implementation block
-(id)init;
-(void)setFeedbackImpactBehaviorDispatchDelay:(double)arg1 ;
-(void)setSendFeedbackImpactBehavior:(BOOL)arg1 ;
-(void)setExpressiveSendFeedbackImpactBehavior:(NSObject*<CK_UIFeedBackImpactBehavior>)arg1 ;
-(void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg1 cleanUpOnSend:(BOOL)arg2 ;
-(BOOL)sendFeedbackImpactBehavior;
-(NSObject*<CK_UIFeedBackImpactBehavior>)expressiveSendFeedbackImpactBehavior;
-(void)_setUpExpressiveSendFeedbackImpactBehaviorForCoordinateSpace:(id)arg1 ;
-(double)feedbackImpactBehaviorDispatchDelay;
-(void)cleanUpImpactBehaviorFeedback;
-(void)setImpactBehaviorFeedbackDispatchTimeForSendWithImpactMessage:(id)arg1 ;
-(void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg1 ;
@end

