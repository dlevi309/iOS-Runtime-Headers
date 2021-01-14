/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarStoreDelegate.h>
#import <libobjc.A.dylib/AVTAvatarRecordDataSourceInternal.h>
#import <libobjc.A.dylib/AVTAvatarRecordDataSource.h>

@protocol AVTAvatarRecordDataSource <NSObject>
@required
-(id)indexesOfRecordsPassingTest:(/*^block*/id)arg1;
-(id)indexSetForEditableRecords;
-(id)recordStore;
-(id)recordAtIndex:(unsigned long long)arg1;
-(unsigned long long)numberOfRecords;
-(unsigned long long)indexOfRecordPassingTest:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue, AVTUILogger, NSObject;
@class NSObject, AVTAvatarStore, AVTObservableAvatarStore, AVTAvatarFetchRequest, NSMutableArray, NSNotificationCenter, NSPointerArray, NSString;

@interface AVTAvatarRecordDataSource : NSObject <AVTAvatarStoreDelegate, AVTAvatarRecordDataSourceInternal, AVTAvatarRecordDataSource> {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	AVTAvatarStore* _underlyingStore;
	AVTObservableAvatarStore* _backingStore;
	AVTAvatarFetchRequest* _fetchRequest;
	NSMutableArray* _nts_recordStorage;
	id<AVTUILogger> _logger;
	NSNotificationCenter* _notificationCenter;
	NSPointerArray* _nts_observers;
	id<NSObject> _nts_changeNotificationObserver;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) AVTAvatarStore * underlyingStore;                        //@synthesize underlyingStore=_underlyingStore - In the implementation block
@property (nonatomic,readonly) AVTObservableAvatarStore * backingStore;                 //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,readonly) AVTAvatarFetchRequest * fetchRequest;                    //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * nts_recordStorage;                        //@synthesize nts_recordStorage=_nts_recordStorage - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) NSPointerArray * nts_observers;                          //@synthesize nts_observers=_nts_observers - In the implementation block
@property (nonatomic,retain) id<NSObject> nts_changeNotificationObserver;               //@synthesize nts_changeNotificationObserver=_nts_changeNotificationObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadRecordsWithStore:(id)arg1 request:(id)arg2 logger:(id)arg3 ;
+(id)sortedRecordsEditableFirstReverseOrder:(id)arg1 ;
+(unsigned long long)indexForInsertingRecord:(id)arg1 inRecords:(id)arg2 ;
+(unsigned long long)indexForInsertingDuplicateRecord:(id)arg1 original:(id)arg2 inRecords:(id)arg3 ;
+(id)defaultUIDataSourceWithDomainIdentifier:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(AVTAvatarFetchRequest *)fetchRequest;
-(NSNotificationCenter *)notificationCenter;
-(AVTObservableAvatarStore *)backingStore;
-(NSPointerArray *)nts_observers;
-(id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 environment:(id)arg3 ;
-(id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 callbackQueue:(id)arg3 environment:(id)arg4 ;
-(id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 callbackQueue:(id)arg3 logger:(id)arg4 notificationCenter:(id)arg5 ;
-(void)setNts_recordStorage:(NSMutableArray *)arg1 ;
-(id<NSObject>)nts_changeNotificationObserver;
-(NSMutableArray *)nts_recordStorage;
-(void)avatarStoreDidChange:(id)arg1 ;
-(void)setNts_changeNotificationObserver:(id<NSObject>)arg1 ;
-(BOOL)areRecordsLoaded;
-(void)performObserversWork:(/*^block*/id)arg1 ;
-(void)performSyncWorkWithRecords:(/*^block*/id)arg1 ;
-(void)enumerateObserversRespondingToSelector:(SEL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)indexesOfRecordsPassingTest:(/*^block*/id)arg1 ;
-(id)indexSetForEditableRecords;
-(id)recordStore;
-(void)store:(id)arg1 didSaveAvatar:(id)arg2 postCompletionHandler:(/*^block*/id)arg3 ;
-(void)store:(id)arg1 didDeleteAvatarWithIdentifier:(id)arg2 postCompletionHandler:(/*^block*/id)arg3 ;
-(void)store:(id)arg1 didCreateDuplicateAvatar:(id)arg2 forOriginal:(id)arg3 postCompletionHandler:(/*^block*/id)arg4 ;
-(id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 ;
-(void)flushRecordsForEnteringBackground;
-(void)addPriorityObserver:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(void)removeObserver:(id)arg1 ;
-(id)internalRecordStore;
-(AVTAvatarStore *)underlyingStore;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)recordAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRecords;
-(unsigned long long)indexOfRecordPassingTest:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

