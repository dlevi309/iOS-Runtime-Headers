/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBMesaUnlockTriggerDelegate;
@interface SBMesaUnlockTrigger : NSObject {

	id<SBMesaUnlockTriggerDelegate> _delegate;
	BOOL _authenticated;

}

@property (assign,nonatomic,__weak) id<SBMesaUnlockTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL authenticated;                                           //@synthesize authenticated=_authenticated - In the implementation block
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)menuButtonUp;
-(id)succinctDescription;
-(id<SBMesaUnlockTriggerDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)authenticated;
-(void)setDelegate:(id<SBMesaUnlockTriggerDelegate>)arg1 ;
-(id)description;
-(void)significantUserInteractionOccurred;
-(void)menuButtonDown;
-(BOOL)bioUnlock;
-(void)screenOff;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)lockButtonDown;
-(id)succinctDescriptionBuilder;
-(void)fingerOn;
-(void)fingerOff;
@end

