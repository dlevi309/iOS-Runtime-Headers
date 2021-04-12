/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol ICManagedObjectContextUpdaterDelegate, OS_dispatch_queue;
@class NSPersistentStore, NSManagedObjectContext, NSPersistentHistoryToken, NSDate, NSObject, ICSelectorDelayer;

@interface ICManagedObjectContextUpdater : NSObject {

	BOOL _listening;
	NSPersistentStore* _store;
	NSManagedObjectContext* _context;
	id<ICManagedObjectContextUpdaterDelegate> _delegate;
	NSPersistentHistoryToken* _previousHistoryToken;
	NSDate* _previousHistoryDate;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _numberOfCoalescedNotifications;
	ICSelectorDelayer* _delayer;

}

@property (assign,nonatomic,__weak) NSPersistentStore * store;                                       //@synthesize store=_store - In the implementation block
@property (assign,nonatomic,__weak) NSManagedObjectContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSPersistentHistoryToken * previousHistoryToken;                        //@synthesize previousHistoryToken=_previousHistoryToken - In the implementation block
@property (nonatomic,retain) NSDate * previousHistoryDate;                                           //@synthesize previousHistoryDate=_previousHistoryDate - In the implementation block
@property (assign,getter=isListening,nonatomic) BOOL listening;                                      //@synthesize listening=_listening - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCoalescedNotifications;                      //@synthesize numberOfCoalescedNotifications=_numberOfCoalescedNotifications - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * delayer;                                            //@synthesize delayer=_delayer - In the implementation block
@property (assign,nonatomic,__weak) id<ICManagedObjectContextUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)contextSaveNotificationFromPersistentHistoryResult:(id)arg1 ignoringContextName:(id)arg2 fromTransactionAuthor:(id)arg3 latestToken:(id*)arg4 latestTimestamp:(id*)arg5 ;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<ICManagedObjectContextUpdaterDelegate>)delegate;
-(void)setDelegate:(id<ICManagedObjectContextUpdaterDelegate>)arg1 ;
-(NSManagedObjectContext *)context;
-(NSPersistentStore *)store;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)setStore:(NSPersistentStore *)arg1 ;
-(id)persistentStoreCoordinator;
-(void)requestUpdate;
-(BOOL)isListening;
-(void)fetchChangeHistory;
-(void)setListening:(BOOL)arg1 ;
-(id)initWithStore:(id)arg1 context:(id)arg2 ;
-(void)setPreviousHistoryDate:(NSDate *)arg1 ;
-(void)setDelayer:(ICSelectorDelayer *)arg1 ;
-(void)stopListeningForRemoteContextDidChangeNotifications;
-(void)handlePersistentStoreRemoteChangeNotification:(id)arg1 ;
-(ICSelectorDelayer *)delayer;
-(unsigned long long)numberOfCoalescedNotifications;
-(void)setNumberOfCoalescedNotifications:(unsigned long long)arg1 ;
-(NSDate *)previousHistoryDate;
-(NSPersistentHistoryToken *)previousHistoryToken;
-(void)setPreviousHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(void)processObejctsInChangeDictionary:(id)arg1 ;
-(void)startListeningForRemoteContextDidChangeNotifications;
@end

