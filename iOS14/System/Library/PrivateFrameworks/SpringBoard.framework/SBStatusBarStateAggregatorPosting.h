/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBStatusBarStateAggregatorPosting <NSObject>
@optional
-(void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg1;
-(void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg1;

@required
-(void)statusBarStateAggregatorDidStartPost:(id)arg1;
-(void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(BOOL)arg3 toData:(const /*function pointer*/void**)arg4;
-(void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const /*function pointer*/void**)arg2 actions:(int)arg3;
-(void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const /*function pointer*/void**)arg2;

@end

