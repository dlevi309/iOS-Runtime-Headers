/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol OS_dispatch_queue;
@class NSObject, CKContainer, NSOperationQueue;

@interface CKDatabase : NSObject {

	NSObject*<OS_dispatch_queue> _underlyingDispatchQueue;
	CKContainer* _container;
	long long _scope;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> underlyingDispatchQueue;              //@synthesize underlyingDispatchQueue=_underlyingDispatchQueue - In the implementation block
@property (assign,nonatomic,__weak) CKContainer * container;                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) long long scope;                                                 //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) long long databaseScope; 
-(NSOperationQueue *)operationQueue;
-(long long)scope;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)clearAuthTokensForRecordWithID:(id)arg1 ;
-(void)getPCSDiagnosticsForZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCorruptRecordsForAllZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearCachesWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearCacheEntriesForRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearCacheEntriesForZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchPCSFromCacheForZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
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
-(void)setContainer:(CKContainer *)arg1 ;
-(id)description;
-(unsigned long long)countAssetCacheItems;
-(void)_scheduleOperation:(id)arg1 ;
-(id)_initWithContainer:(id)arg1 scope:(long long)arg2 ;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingDispatchQueue;
-(void)setUnderlyingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)databaseScope;
-(void)showAssetCache;
-(void)clearRecordCache;
-(id)CKStatusReportArray;
-(void)clearAssetCache;
-(CKContainer *)container;
@end

