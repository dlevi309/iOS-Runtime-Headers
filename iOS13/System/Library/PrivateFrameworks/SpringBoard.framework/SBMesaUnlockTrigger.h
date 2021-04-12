/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBMesaUnlockTriggerDelegate;
@interface SBMesaUnlockTrigger : NSObject {

	id<SBMesaUnlockTriggerDelegate> _delegate;
	BOOL _authenticated;

}

@property (assign,nonatomic,__weak) id<SBMesaUnlockTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL authenticated;                                           //@synthesize authenticated=_authenticated - In the implementation block
-(id)description;
-(id<SBMesaUnlockTriggerDelegate>)delegate;
-(void)setDelegate:(id<SBMesaUnlockTriggerDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)authenticated;
-(void)screenOff;
-(BOOL)bioUnlock;
-(void)significantUserInteractionOccurred;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)fingerOn;
-(void)fingerOff;
@end

