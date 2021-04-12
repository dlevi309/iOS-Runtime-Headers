/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@interface WFCloudKitTask : NSObject {

	BOOL _cancelled;
	/*^block*/id _cancellationHandler;

}

@property (getter=isCancelled) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) id cancellationHandler;              //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)setCancelled:(BOOL)arg1 ;
@end

