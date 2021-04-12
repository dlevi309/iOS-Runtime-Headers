/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@protocol DATransactionMonitorDelegate;
@class NSMutableArray;

@interface DATransactionMonitor : NSObject {

	int _transactionCount;
	NSMutableArray* _transactions;
	id<DATransactionMonitorDelegate> _transactionMonitorDelegate;

}

@property (assign,nonatomic) int transactionCount;                                                            //@synthesize transactionCount=_transactionCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactions;                                                   //@synthesize transactions=_transactions - In the implementation block
@property (assign,nonatomic,__weak) id<DATransactionMonitorDelegate> transactionMonitorDelegate;              //@synthesize transactionMonitorDelegate=_transactionMonitorDelegate - In the implementation block
+(id)sharedTransactionMonitor;
-(id)init;
-(NSMutableArray *)transactions;
-(int)transactionCount;
-(void)setTransactionCount:(int)arg1 ;
-(void)setTransactions:(NSMutableArray *)arg1 ;
-(void)incrementTransactionCountForTransaction:(id)arg1 ;
-(void)decrementTransactionCountForTransaction:(id)arg1 ;
-(id<DATransactionMonitorDelegate>)transactionMonitorDelegate;
-(void)setTransactionMonitorDelegate:(id<DATransactionMonitorDelegate>)arg1 ;
@end

