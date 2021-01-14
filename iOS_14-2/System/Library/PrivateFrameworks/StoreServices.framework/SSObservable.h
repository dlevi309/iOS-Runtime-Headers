/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFailureError:(NSError *)arg1 ;
-(BOOL)isComplete;
-(BOOL)sendCompletion;
-(NSMutableArray *)observers;
-(id)init;
-(NSMutableArray *)queuedResults;
-(void)setSendMessageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(void)subscribe:(id)arg1 ;
-(void)setQueuedResults:(NSMutableArray *)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSConditionLock *)stateLock;
-(void)setStateLock:(NSConditionLock *)arg1 ;
-(BOOL)_isComplete;
-(NSError *)failureError;
-(BOOL)sendResult:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)sendMessageQueue;
-(BOOL)cancel;
-(BOOL)sendFailure:(id)arg1 ;
-(BOOL)isCancelled;
-(NSString *)logKey;
@end

