/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Foundation/NSOperation.h>

@class NSArray, NSLock, _CATObserverManager, NSUUID, NSDate, NSError, NSDictionary;

@interface CATOperation : NSOperation {

	NSArray* mCallStackSymbols;
	Ai mState;
	NSLock* mLock;
	_CATObserverManager* mObserverManager;
	BOOL _canCancel;
	NSUUID* _UUID;
	NSDate* _createdDate;
	NSDate* _enqueuedDate;
	NSDate* _startedDate;
	NSDate* _finishedDate;
	unsigned long long _phase;
	NSError* _error;
	id _resultObject;
	NSDictionary* _userInfo;
	long long _completedUnitCount;
	long long _totalUnitCount;

}

@property (retain) NSUUID * UUID;                             //@synthesize UUID=_UUID - In the implementation block
@property (assign) unsigned long long phase;                  //@synthesize phase=_phase - In the implementation block
@property (retain) NSDate * createdDate;                      //@synthesize createdDate=_createdDate - In the implementation block
@property (retain) NSDate * enqueuedDate;                     //@synthesize enqueuedDate=_enqueuedDate - In the implementation block
@property (retain) NSDate * startedDate;                      //@synthesize startedDate=_startedDate - In the implementation block
@property (retain) NSDate * finishedDate;                     //@synthesize finishedDate=_finishedDate - In the implementation block
@property (retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (retain) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) id resultObject;                           //@synthesize resultObject=_resultObject - In the implementation block
@property (assign) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
@property (readonly) BOOL isCanceled; 
@property (readonly) BOOL canCancel;                          //@synthesize canCancel=_canCancel - In the implementation block
+(BOOL)isCancelable;
+(id)callStackSymbols;
+(BOOL)automaticallyNotifiesObserversOfUUID;
+(BOOL)automaticallyNotifiesObserversOfCreatedDate;
+(BOOL)automaticallyNotifiesObserversOfEnqueuedDate;
+(BOOL)automaticallyNotifiesObserversOfStartedDate;
+(BOOL)automaticallyNotifiesObserversOfFinishedDate;
+(id)keyPathsForValuesAffectingIsCanceled;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(long long)totalUnitCount;
-(BOOL)isCanceled;
-(NSUUID *)UUID;
-(NSDictionary *)userInfo;
-(id)init;
-(void)start;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(BOOL)isAsynchronous;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(id)description;
-(void)endOperationWithResultObject:(id)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 delegateQueue:(id)arg4 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5 ;
-(BOOL)isReady;
-(NSDate *)createdDate;
-(id)resultObject;
-(void)setResultObject:(id)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(BOOL)isExecuting;
-(void)operationWillStart;
-(id)stateDescription;
-(NSDate *)startedDate;
-(NSDate *)finishedDate;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setStartedDate:(NSDate *)arg1 ;
-(void)setFinishedDate:(NSDate *)arg1 ;
-(unsigned long long)phase;
-(void)operationWillFinish;
-(void)setPhase:(unsigned long long)arg1 ;
-(long long)completedUnitCount;
-(BOOL)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2 ;
-(void)setEnqueuedDate:(NSDate *)arg1 ;
-(void)endOperationWithError:(id)arg1 ;
-(void)endOperationSuccessfullyIfNeeded;
-(void)finalizeOperation;
-(void)operationDidFinish;
-(void)operationWillEnqueueOntoOperationQueue:(id)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(NSDate *)enqueuedDate;
-(BOOL)canCancel;
@end

