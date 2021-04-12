/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol OS_dispatch_queue;
@class CKContainer, NSOperationQueue, NSObject;

@interface CKDatabase : NSObject {

	CKContainer* _container;
	long long _scope;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _underlyingDispatchQueue;

}

@property (assign,nonatomic,__weak) CKContainer * container;                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) long long scope;                                                 //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> underlyingDispatchQueue;              //@synthesize underlyingDispatchQueue=_underlyingDispatchQueue - In the implementation block
@property (nonatomic,readonly) long long databaseScope; 
-(id)init;
-(id)description;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)addOperation:(id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(long long)scope;
-(long long)databaseScope;
-(id)CKPropertiesDescription;
-(id)_initWithContainer:(id)arg1 scope:(long long)arg2 ;
-(id)CKStatusReportArray;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingDispatchQueue;
-(void)setUnderlyingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)clearAssetCache;
-(unsigned long long)countAssetCacheItems;
-(void)showAssetCache;
-(void)clearRecordCache;
-(void)clearAuthTokensForRecordWithID:(id)arg1 ;
-(void)getPCSDiagnosticsForZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCorruptRecordsForAllZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearCachesWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearCacheEntriesForRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearCacheEntriesForZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_scheduleOperation:(id)arg1 ;
-(void)fetchRecordWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteRecordWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAllRecordZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveRecordZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveSubscription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSubscriptionWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchSubscriptionWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllSubscriptionsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

