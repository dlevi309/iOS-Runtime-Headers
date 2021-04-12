/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@protocol UIFeedbackGeneratorUserInteractionDriven;
@interface _TVRSiriHaptic : NSObject {

	BOOL _shouldExecuteStartCompletionBlock;
	id<UIFeedbackGeneratorUserInteractionDriven> _behavior;
	long long _state;

}

@property (nonatomic,retain) id<UIFeedbackGeneratorUserInteractionDriven> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) long long state;                                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL shouldExecuteStartCompletionBlock;                             //@synthesize shouldExecuteStartCompletionBlock=_shouldExecuteStartCompletionBlock - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id<UIFeedbackGeneratorUserInteractionDriven>)behavior;
-(void)setBehavior:(id<UIFeedbackGeneratorUserInteractionDriven>)arg1 ;
-(id)initWithButton:(id)arg1 ;
-(void)performSiriStartWithCompletion:(/*^block*/id)arg1 ;
-(void)siriButtonTouchesEnded;
-(void)performSiriEndWithSuccess:(BOOL)arg1 ;
-(BOOL)shouldExecuteStartCompletionBlock;
-(void)setShouldExecuteStartCompletionBlock:(BOOL)arg1 ;
@end

