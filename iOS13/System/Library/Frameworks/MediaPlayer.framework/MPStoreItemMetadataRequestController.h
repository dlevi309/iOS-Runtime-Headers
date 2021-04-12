/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSOperationQueue, NSMutableDictionary;

@interface MPStoreItemMetadataRequestController : NSObject {

	NSOperationQueue* _operationQueue;
	unsigned long long _lastExpiredMetadataPurgeMachTime;
	NSMutableDictionary* _itemCaches;
	os_unfair_lock_s _transactionLock;
	long long _transactionCount;
	long long _cacheSize;

}

@property (assign,nonatomic) long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
+(id)sharedStoreItemMetadataRequestController;
+(unsigned long long)optimalBatchSize;
-(id)init;
-(void)beginTransaction;
-(void)endTransaction;
-(long long)cacheSize;
-(void)setCacheSize:(long long)arg1 ;
-(void)addStoreItemMetadata:(id)arg1 ;
-(void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_removeExpiredItemsPeriodically;
@end

