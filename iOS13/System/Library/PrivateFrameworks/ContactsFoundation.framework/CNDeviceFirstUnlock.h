/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSOperationQueue *)workQueue;
-(void)setWorkQueue:(NSOperationQueue *)arg1 ;
-(void)removeUnlockHandlerWithIdentifier:(id)arg1 ;
-(BOOL)isUnlockedSinceBoot;
-(void)addUnlockHandlerWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(CNUnfairLock *)handlersLock;
-(void)withHandlersLock_addHandlerWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)withHandlersLock_registerForDeviceFirstUnlock;
-(void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)unlockHandlers;
-(CNFuture *)firstUnlockFuture;
-(void)setFirstUnlockFuture:(CNFuture *)arg1 ;
-(long long)countOfUnlockHandlers;
-(void)setHandlersLock:(CNUnfairLock *)arg1 ;
-(void)setUnlockHandlers:(NSMutableDictionary *)arg1 ;
@end

