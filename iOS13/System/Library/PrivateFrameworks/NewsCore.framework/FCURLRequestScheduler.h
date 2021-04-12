/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSMutableOrderedSet, NSMapTable, NFUnfairLock;

@interface FCURLRequestScheduler : NSObject {

	NSMutableOrderedSet* _requests;
	NSMapTable* _inFlightURLTasks;
	NFUnfairLock* _lock;

}

@property (nonatomic,retain) NSMutableOrderedSet * requests;              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMapTable * inFlightURLTasks;               //@synthesize inFlightURLTasks=_inFlightURLTasks - In the implementation block
@property (nonatomic,retain) NFUnfairLock * lock;                         //@synthesize lock=_lock - In the implementation block
-(id)init;
-(NFUnfairLock *)lock;
-(NSMutableOrderedSet *)requests;
-(void)setLock:(NFUnfairLock *)arg1 ;
-(void)_cancelRequest:(id)arg1 ;
-(void)setRequests:(NSMutableOrderedSet *)arg1 ;
-(void)_serviceRequests;
-(void)_applyPriority:(long long)arg1 toRequest:(id)arg2 ;
-(BOOL)_isLowPriority:(long long)arg1 ;
-(NSMapTable *)inFlightURLTasks;
-(void)_suspendURLTaskForRequest:(id)arg1 ;
-(void)_resumeURLTaskForRequest:(id)arg1 ;
-(id)scheduleURLRequest:(id)arg1 URLSession:(id)arg2 destination:(long long)arg3 priority:(long long)arg4 loggingKey:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setInFlightURLTasks:(NSMapTable *)arg1 ;
@end

