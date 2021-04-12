/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@protocol SSTestingCoordinatorDelegate;
@interface SSTestingCoordinator : NSObject {

	id<SSTestingCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSTestingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SSTestingCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SSTestingCoordinatorDelegate>)arg1 ;
-(void)_delayedHandleRunPPTRequest:(id)arg1 ;
-(void)handleRunPPTRequest:(id)arg1 ;
@end

