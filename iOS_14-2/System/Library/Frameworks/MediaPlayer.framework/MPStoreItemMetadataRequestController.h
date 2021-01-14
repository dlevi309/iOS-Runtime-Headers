/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSOperationQueue, NSMutableDictionary;

@interface MPStoreItemMetadataRequestController : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSOperationQueue* _operationQueue;
	unsigned long long _lastExpiredMetadataPurgeMachTime;
	NSMutableDictionary* _itemCaches;
	os_unfair_lock_s _transactionLock;
	long long _transactionCount;
	long long _cacheSize;

}

@property (assign,nonatomic) long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
+(unsigned long long)optimalBatchSize;
+(id)sharedStoreItemMetadataRequestController;
+(void)setImportToServerObjectDatabase:(BOOL)arg1 ;
+(BOOL)importToServerObjectDatabase;
-(void)endTransaction;
-(void)beginTransaction;
-(id)init;
-(long long)cacheSize;
-(id)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setCacheSize:(long long)arg1 ;
-(void)addStoreItemMetadata:(id)arg1 ;
-(void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_removeExpiredItemsPeriodically;
@end

