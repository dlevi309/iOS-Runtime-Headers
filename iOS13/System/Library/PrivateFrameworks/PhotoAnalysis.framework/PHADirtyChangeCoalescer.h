/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;
@class NSObject, PFCoalescer;

@interface PHADirtyChangeCoalescer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PFCoalescer* _valueCoalescer;
	id<PHADirtyChangeCoalescerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PHADirtyChangeCoalescerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PHADirtyChangeCoalescerDelegate>)delegate;
-(void)setDelegate:(id<PHADirtyChangeCoalescerDelegate>)arg1 ;
-(void)recordDirtyTransitionForAssetIdentifier:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 ;
@end

