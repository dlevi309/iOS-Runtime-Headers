/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSError, NSString, NSMutableArray, NSObject, NSConditionLock;

@interface SSObservable : NSObject {

	NSError* _failureError;
	NSString* _logKey;
	NSMutableArray* _observers;
	NSMutableArray* _queuedResults;
	NSObject*<OS_dispatch_queue> _sendMessageQueue;
	NSConditionLock* _stateLock;

}

@property (nonatomic,retain) NSError * failureError;                                     //@synthesize failureError=_failureError - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                          //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedResults;                             //@synthesize queuedResults=_queuedResults - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sendMessageQueue;              //@synthesize sendMessageQueue=_sendMessageQueue - In the implementation block
@property (nonatomic,retain) NSConditionLock * stateLock;                                //@synthesize stateLock=_stateLock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
+(BOOL)_errorIsCanceledError:(id)arg1 ;
+(id)observableWithObserver:(id)arg1 ;
+(id)observableWithObservers:(id)arg1 ;
-(id)init;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isComplete;
-(NSError *)failureError;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(void)subscribe:(id)arg1 ;
-(NSConditionLock *)stateLock;
-(BOOL)sendCompletion;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(BOOL)sendResult:(id)arg1 ;
-(BOOL)sendFailure:(id)arg1 ;
-(BOOL)_isComplete;
-(NSObject*<OS_dispatch_queue>)sendMessageQueue;
-(void)setFailureError:(NSError *)arg1 ;
-(NSMutableArray *)queuedResults;
-(void)setQueuedResults:(NSMutableArray *)arg1 ;
-(void)setSendMessageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStateLock:(NSConditionLock *)arg1 ;
@end

