/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@class NSString, NSData, SPAssetCacheSyncData;

@interface SPCacheMessage : NSObject {

	int _messageType;
	unsigned long long _cacheType;
	NSString* _assetKey;
	NSString* _gizmoCacheIdentifier;
	NSData* _assetData;
	SPAssetCacheSyncData* _syncData;
	unsigned long long _error;

}

@property (assign,nonatomic) int messageType;                              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) unsigned long long cacheType;                 //@synthesize cacheType=_cacheType - In the implementation block
@property (nonatomic,retain) NSString * assetKey;                          //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSString * gizmoCacheIdentifier;              //@synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier - In the implementation block
@property (nonatomic,retain) NSData * assetData;                           //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,retain) SPAssetCacheSyncData * syncData;              //@synthesize syncData=_syncData - In the implementation block
@property (assign,nonatomic) unsigned long long error;                     //@synthesize error=_error - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(int)messageType;
-(void)setAssetKey:(NSString *)arg1 ;
-(void)setMessageType:(int)arg1 ;
-(id)init;
-(void)setCacheType:(unsigned long long)arg1 ;
-(unsigned long long)cacheType;
-(void)setError:(unsigned long long)arg1 ;
-(unsigned long long)error;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSyncData:(SPAssetCacheSyncData *)arg1 ;
-(NSString *)assetKey;
-(NSData *)assetData;
-(SPAssetCacheSyncData *)syncData;
-(void)setAssetData:(NSData *)arg1 ;
-(void)setGizmoCacheIdentifier:(NSString *)arg1 ;
-(NSString *)gizmoCacheIdentifier;
@end

