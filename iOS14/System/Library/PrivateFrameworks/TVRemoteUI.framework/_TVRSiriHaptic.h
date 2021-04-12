/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBehavior:(id<UIFeedbackGeneratorUserInteractionDriven>)arg1 ;
-(id<UIFeedbackGeneratorUserInteractionDriven>)behavior;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id)initWithButton:(id)arg1 ;
-(void)performSiriStartWithCompletion:(/*^block*/id)arg1 ;
-(void)siriButtonTouchesEnded;
-(void)performSiriEndWithSuccess:(BOOL)arg1 ;
-(BOOL)shouldExecuteStartCompletionBlock;
-(void)setShouldExecuteStartCompletionBlock:(BOOL)arg1 ;
@end

