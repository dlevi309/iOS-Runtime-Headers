/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSString;

@interface NMSSyncProgressInfo : NSObject {

	float _estimatedSyncProgress;
	NSString* _assetType;
	unsigned long long _syncState;
	unsigned long long _syncWaitingSubstate;
	long long _numberOfAssetItems;
	long long _numberOfAssetItemsSynced;
	long long _numberOfAssetItemsNeedingDownload;
	unsigned long long _aggregateAssetItemBytesAdded;

}

@property (nonatomic,retain) NSString * assetType;                                         //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic) unsigned long long syncState;                                 //@synthesize syncState=_syncState - In the implementation block
@property (assign,nonatomic) unsigned long long syncWaitingSubstate;                       //@synthesize syncWaitingSubstate=_syncWaitingSubstate - In the implementation block
@property (assign,nonatomic) float estimatedSyncProgress;                                  //@synthesize estimatedSyncProgress=_estimatedSyncProgress - In the implementation block
@property (assign,nonatomic) long long numberOfAssetItems;                                 //@synthesize numberOfAssetItems=_numberOfAssetItems - In the implementation block
@property (assign,nonatomic) long long numberOfAssetItemsSynced;                           //@synthesize numberOfAssetItemsSynced=_numberOfAssetItemsSynced - In the implementation block
@property (assign,nonatomic) long long numberOfAssetItemsNeedingDownload;                  //@synthesize numberOfAssetItemsNeedingDownload=_numberOfAssetItemsNeedingDownload - In the implementation block
@property (assign,nonatomic) unsigned long long aggregateAssetItemBytesAdded;              //@synthesize aggregateAssetItemBytesAdded=_aggregateAssetItemBytesAdded - In the implementation block
+(id)_stringFromSyncState:(unsigned long long)arg1 ;
+(id)_stringFromWaitingSubstate:(unsigned long long)arg1 ;
-(unsigned long long)syncState;
-(void)setSyncState:(unsigned long long)arg1 ;
-(NSString *)assetType;
-(void)setAssetType:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)syncWaitingSubstate;
-(void)setSyncWaitingSubstate:(unsigned long long)arg1 ;
-(float)estimatedSyncProgress;
-(void)setEstimatedSyncProgress:(float)arg1 ;
-(long long)numberOfAssetItems;
-(void)setNumberOfAssetItems:(long long)arg1 ;
-(long long)numberOfAssetItemsSynced;
-(void)setNumberOfAssetItemsSynced:(long long)arg1 ;
-(long long)numberOfAssetItemsNeedingDownload;
-(void)setNumberOfAssetItemsNeedingDownload:(long long)arg1 ;
-(unsigned long long)aggregateAssetItemBytesAdded;
-(void)setAggregateAssetItemBytesAdded:(unsigned long long)arg1 ;
@end

