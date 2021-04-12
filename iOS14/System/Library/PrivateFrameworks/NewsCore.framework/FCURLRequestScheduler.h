/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSURLSession, NSMutableOrderedSet, NSMapTable, NFUnfairLock, NSDate;

@interface FCURLRequestScheduler : NSObject {

	NSURLSession* _URLSession;
	NSMutableOrderedSet* _requests;
	NSMapTable* _inFlightURLTasks;
	unsigned long long _maxInFlightURLTasks;
	unsigned long long _maxInFlightLowPriorityURLTasks;
	NFUnfairLock* _lock;
	NSDate* _dateOfLastProgress;

}

@property (nonatomic,readonly) NSURLSession * URLSession;                                      //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * requests;                                 //@synthesize requests=_requests - In the implementation block
@property (nonatomic,readonly) NSMapTable * inFlightURLTasks;                                  //@synthesize inFlightURLTasks=_inFlightURLTasks - In the implementation block
@property (nonatomic,readonly) unsigned long long maxInFlightURLTasks;                         //@synthesize maxInFlightURLTasks=_maxInFlightURLTasks - In the implementation block
@property (nonatomic,readonly) unsigned long long maxInFlightLowPriorityURLTasks;              //@synthesize maxInFlightLowPriorityURLTasks=_maxInFlightLowPriorityURLTasks - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * lock;                                            //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSDate * dateOfLastProgress;                                        //@synthesize dateOfLastProgress=_dateOfLastProgress - In the implementation block
-(BOOL)_shouldRetryRequest:(id)arg1 withError:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDate *)dateOfLastProgress;
-(NSURLSession *)URLSession;
-(NFUnfairLock *)lock;
-(id)initWithURLSession:(id)arg1 ;
-(NSMutableOrderedSet *)requests;
-(void)_cancelRequest:(id)arg1 ;
-(void)setDateOfLastProgress:(NSDate *)arg1 ;
-(id)scheduleURLRequest:(id)arg1 destination:(long long)arg2 priority:(long long)arg3 loggingKey:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_resumeURLTaskForRequest:(id)arg1 ;
-(BOOL)_isLowPriority:(long long)arg1 ;
-(void)_serviceRequests;
-(void)_suspendURLTaskForRequest:(id)arg1 ;
-(NSMapTable *)inFlightURLTasks;
-(unsigned long long)maxInFlightURLTasks;
-(unsigned long long)maxInFlightLowPriorityURLTasks;
-(void)_applyPriority:(long long)arg1 toRequest:(id)arg2 ;
@end

