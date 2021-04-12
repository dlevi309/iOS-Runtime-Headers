/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject {

	_PASCoalescingTimer* _timer;

}
-(void)cancelPendingOperations;
-(id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 operation:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 operation:(/*^block*/id)arg2 ;
-(void)runAfterDelaySeconds:(double)arg1 coalescingBehavior:(unsigned char)arg2 ;
-(void)runImmediately;
-(void)runAfterStrictDelaySeconds:(double)arg1 ;
@end

