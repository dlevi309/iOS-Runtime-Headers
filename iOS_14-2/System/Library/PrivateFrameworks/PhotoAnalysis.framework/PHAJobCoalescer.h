/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

