/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithQueue:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
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

