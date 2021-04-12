/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@protocol VSLoadingViewController <NSObject>
@property (assign,nonatomic,__weak) id<VSLoadingViewControllerDelegate> delegate; 
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed; 
@required
-(id<VSLoadingViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1;

@end

