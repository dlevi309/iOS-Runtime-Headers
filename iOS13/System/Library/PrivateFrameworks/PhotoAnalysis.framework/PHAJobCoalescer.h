/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol PHAJobCoalescerDelegate;
@interface PHAJobCoalescer : NSObject {

	id<PHAJobCoalescerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PHAJobCoalescerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PHAJobCoalescerDelegate>)delegate;
-(void)setDelegate:(id<PHAJobCoalescerDelegate>)arg1 ;
-(void)addJob:(id)arg1 ;
@end

