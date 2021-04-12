/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@interface WFCloudKitTask : NSObject {

	BOOL _cancelled;
	/*^block*/id _cancellationHandler;

}

@property (getter=isCancelled) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) id cancellationHandler;              //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
-(void)setCancelled:(BOOL)arg1 ;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)cancel;
-(BOOL)isCancelled;
@end

