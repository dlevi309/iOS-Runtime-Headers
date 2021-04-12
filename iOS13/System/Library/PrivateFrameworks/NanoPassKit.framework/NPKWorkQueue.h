/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableArray;

@interface NPKWorkQueue : NSObject {

	BOOL _performingWork;
	BOOL _takeOutTransactions;
	NSString* _workQueueName;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _remainingWork;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingWork;                          //@synthesize remainingWork=_remainingWork - In the implementation block
@property (assign,nonatomic) BOOL performingWork;                                     //@synthesize performingWork=_performingWork - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL takeOutTransactions;                                //@synthesize takeOutTransactions=_takeOutTransactions - In the implementation block
@property (nonatomic,retain) NSString * workQueueName;                                //@synthesize workQueueName=_workQueueName - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithQueue:(id)arg1 takeOutTransactions:(BOOL)arg2 ;
-(void)setRemainingWork:(NSMutableArray *)arg1 ;
-(void)setTakeOutTransactions:(BOOL)arg1 ;
-(BOOL)performingWork;
-(NSMutableArray *)remainingWork;
-(void)setPerformingWork:(BOOL)arg1 ;
-(NSString *)workQueueName;
-(void)_onQueue_doWorkIfNecessary;
-(BOOL)takeOutTransactions;
-(void)performWork:(/*^block*/id)arg1 ;
-(void)setWorkQueueName:(NSString *)arg1 ;
@end

