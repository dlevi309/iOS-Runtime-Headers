/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class CNUnfairLock, NSMutableDictionary, NSOperationQueue, CNFuture;

@interface CNDeviceFirstUnlock : NSObject {

	CNUnfairLock* _handlersLock;
	NSMutableDictionary* _unlockHandlers;
	NSOperationQueue* _workQueue;
	CNFuture* _firstUnlockFuture;

}

@property (nonatomic,retain) CNUnfairLock * handlersLock;                       //@synthesize handlersLock=_handlersLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unlockHandlers;              //@synthesize unlockHandlers=_unlockHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) CNFuture * firstUnlockFuture;                      //@synthesize firstUnlockFuture=_firstUnlockFuture - In the implementation block
@property (nonatomic,readonly) BOOL isUnlockedSinceBoot; 
+(id)sharedInstance;
-(void)setWorkQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)workQueue;
-(id)init;
-(CNFuture *)firstUnlockFuture;
-(void)setHandlersLock:(CNUnfairLock *)arg1 ;
-(long long)countOfUnlockHandlers;
-(BOOL)isUnlockedSinceBoot;
-(void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)arg1 ;
-(void)setUnlockHandlers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)unlockHandlers;
-(void)addUnlockHandlerWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)removeUnlockHandlerWithIdentifier:(id)arg1 ;
-(CNUnfairLock *)handlersLock;
-(void)waitForAllOperationsToFinish;
-(void)withHandlersLock_addHandlerWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setFirstUnlockFuture:(CNFuture *)arg1 ;
-(void)withHandlersLock_registerForDeviceFirstUnlock;
-(void)dealloc;
@end

