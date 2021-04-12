/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBStatusBarStateAggregatorPosting <NSObject>
@optional
-(void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg1;
-(void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg1;

@required
-(void)statusBarStateAggregatorDidStartPost:(id)arg1;
-(void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(BOOL)arg3 toData:(const /*function pointer*/void**)arg4;
-(void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const /*function pointer*/void**)arg2 actions:(int)arg3;
-(void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const /*function pointer*/void**)arg2;

@end

