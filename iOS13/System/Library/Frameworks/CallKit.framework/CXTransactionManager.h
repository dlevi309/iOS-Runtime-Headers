/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol CXTransactionManagerDelegate, OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface CXTransactionManager : NSObject {

	id<CXTransactionManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _outstandingTransactionGroups;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTransactionGroups;                   //@synthesize outstandingTransactionGroups=_outstandingTransactionGroups - In the implementation block
@property (assign,nonatomic,__weak) id<CXTransactionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CXTransactionManagerDelegate>)delegate;
-(void)setDelegate:(id<CXTransactionManagerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)addOutstandingTransactionGroup:(id)arg1 ;
-(void)failOutstandingActionsForCallWithUUID:(id)arg1 ;
-(void)updateWithCompletedAction:(id)arg1 ;
-(NSMutableSet *)outstandingTransactionGroups;
-(void)_setUpTimeoutForAction:(id)arg1 callSource:(id)arg2 ;
-(void)_timeoutReachedForAction:(id)arg1 callSource:(id)arg2 ;
-(void)setOutstandingTransactionGroups:(NSMutableSet *)arg1 ;
@end

