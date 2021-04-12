/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol BSServiceDispatchingQueue <NSObject>
@required
-(void)performAsync:(/*^block*/id)arg1;
-(void)assertOnQueue;
-(id)backingQueueIfExists;
-(void)performAsync:(/*^block*/id)arg1 withHandoff:(id)arg2;

@end

