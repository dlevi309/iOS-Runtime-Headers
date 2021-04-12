/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject {

	_PASCoalescingTimer* _timer;

}
-(void)runAfterStrictDelaySeconds:(double)arg1 ;
-(void)runAfterDelaySeconds:(double)arg1 coalescingBehavior:(unsigned char)arg2 ;
-(void)cancelPendingOperations;
-(id)initWithQueue:(id)arg1 operation:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 operation:(/*^block*/id)arg3 ;
-(void)runImmediately;
@end

