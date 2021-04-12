/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@protocol SSTestingCoordinatorDelegate;
@interface SSTestingCoordinator : NSObject {

	id<SSTestingCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSTestingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SSTestingCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SSTestingCoordinatorDelegate>)arg1 ;
-(BOOL)_runPPTRequestRequiresTakingScreenshot:(id)arg1 ;
-(void)_delayedHandleRunPPTRequest:(id)arg1 ;
-(void)handleRunPPTRequest:(id)arg1 ;
@end

