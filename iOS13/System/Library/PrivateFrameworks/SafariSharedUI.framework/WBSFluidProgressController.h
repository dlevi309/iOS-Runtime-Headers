/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate;
@interface WBSFluidProgressController : NSObject {

	id<WBSFluidProgressControllerDelegate> _delegate;
	id<WBSFluidProgressControllerWindowDelegate> _windowDelegate;

}

@property (__weak) id<WBSFluidProgressControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<WBSFluidProgressControllerWindowDelegate> windowDelegate;              //@synthesize windowDelegate=_windowDelegate - In the implementation block
-(id<WBSFluidProgressControllerDelegate>)delegate;
-(void)setDelegate:(id<WBSFluidProgressControllerDelegate>)arg1 ;
-(void)animationStepCompleted:(id)arg1 ;
-(void)setWindowDelegate:(id<WBSFluidProgressControllerWindowDelegate>)arg1 ;
-(void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(BOOL)arg2 ;
-(void)finishFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)startFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)updateFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)cancelFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)_updateFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)startRocketEffectWithProgressStateSource:(id)arg1 ;
-(void)frontmostTabDidChange;
-(id<WBSFluidProgressControllerWindowDelegate>)windowDelegate;
@end

