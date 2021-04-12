/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@class NSMutableDictionary, NSDictionary;

@interface ATDetailedRequestInfoForAssetType : NSObject {

	NSMutableDictionary* _mutableContributors;
	unsigned long long _totalBytesSynced;
	unsigned long long _totalBytesToSync;
	unsigned long long _totalAssetsToSync;
	NSDictionary* _contributors;

}

@property (assign,getter=getTotalBytesSynced,nonatomic) unsigned long long totalBytesSynced;                //@synthesize totalBytesSynced=_totalBytesSynced - In the implementation block
@property (assign,getter=getTotalBytesToSync,nonatomic) unsigned long long totalBytesToSync;                //@synthesize totalBytesToSync=_totalBytesToSync - In the implementation block
@property (assign,getter=getTotalAssetsToSync,nonatomic) unsigned long long totalAssetsToSync;              //@synthesize totalAssetsToSync=_totalAssetsToSync - In the implementation block
@property (getter=getContributors,nonatomic,retain) NSDictionary * contributors;                            //@synthesize contributors=_contributors - In the implementation block
+(id)serializedRequestInfoFromATDetailedRequestInfoForAssetType:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setContributors:(NSDictionary *)arg1 ;
-(unsigned long long)getTotalAssetsToSync;
-(unsigned long long)getTotalBytesToSync;
-(unsigned long long)getTotalBytesSynced;
-(void)updateBytesSynced:(unsigned long long)arg1 ;
-(void)updateBytesToSync:(unsigned long long)arg1 forItemIdentifier:(id)arg2 ;
-(void)incrementAssetCountToSync;
-(id)getContributors;
-(void)setTotalBytesSynced:(unsigned long long)arg1 ;
-(void)setTotalBytesToSync:(unsigned long long)arg1 ;
-(void)setTotalAssetsToSync:(unsigned long long)arg1 ;
@end

