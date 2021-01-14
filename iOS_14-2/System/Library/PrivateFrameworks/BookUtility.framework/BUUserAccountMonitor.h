/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@protocol OS_dispatch_queue;
#import <BookUtility/BookUtility-Structs.h>
@class NSObject, NSMutableDictionary, NSOperationQueue;

@interface BUUserAccountMonitor : NSObject {

	os_unfair_lock_s _observersLock;
	/*^block*/id _notificationHandlerBlock;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	NSMutableDictionary* _notifyBlocks;
	NSMutableDictionary* _observerHashTables;
	NSMutableDictionary* _accountIdentifiers;
	NSMutableDictionary* _notificationTokens;
	NSOperationQueue* _notificationHandlerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notifyQueue;                 //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notifyBlocks;                       //@synthesize notifyBlocks=_notifyBlocks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observerHashTables;                 //@synthesize observerHashTables=_observerHashTables - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountIdentifiers;                 //@synthesize accountIdentifiers=_accountIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationTokens;                 //@synthesize notificationTokens=_notificationTokens - In the implementation block
@property (nonatomic,retain) NSOperationQueue * notificationHandlerQueue;              //@synthesize notificationHandlerQueue=_notificationHandlerQueue - In the implementation block
@property (nonatomic,readonly) id notificationHandlerBlock;                            //@synthesize notificationHandlerBlock=_notificationHandlerBlock - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(void)removeObserver:(id)arg1 accountTypes:(unsigned long long)arg2 ;
-(NSMutableDictionary *)notifyBlocks;
-(NSMutableDictionary *)notificationTokens;
-(id)init;
-(void)addObserver:(id)arg1 accountTypes:(unsigned long long)arg2 ;
-(void)setNotifyBlocks:(NSMutableDictionary *)arg1 ;
-(void)setAccountIdentifiers:(NSMutableDictionary *)arg1 ;
-(unsigned long long)_singleAccountTypeForNotification:(id)arg1 ;
-(void)setNotificationHandlerQueue:(NSOperationQueue *)arg1 ;
-(void)nq_updateiTunesAccountIdentifierAndNotifyObservers;
-(void)setNotificationTokens:(NSMutableDictionary *)arg1 ;
-(NSOperationQueue *)notificationHandlerQueue;
-(id)notificationHandlerBlock;
-(NSMutableDictionary *)observerHashTables;
-(NSMutableDictionary *)accountIdentifiers;
-(void)setObserverHashTables:(NSMutableDictionary *)arg1 ;
-(void)nq_updateiCloudAccountIdentifierAndNotifyObservers;
-(void)setNotifyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

