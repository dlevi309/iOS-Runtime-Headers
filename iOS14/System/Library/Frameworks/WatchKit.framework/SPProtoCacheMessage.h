/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, SPProtoCacheSyncData;

@interface SPProtoCacheMessage : PBCodable <NSCopying> {

	NSData* _assetData;
	NSString* _assetKey;
	int _cacheType;
	NSString* _gizmoCacheIdentifier;
	int _messageType;
	SPProtoCacheSyncData* _syncData;

}

@property (assign,nonatomic) int messageType;                              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) int cacheType;                                //@synthesize cacheType=_cacheType - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetKey; 
@property (nonatomic,retain) NSString * assetKey;                          //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,readonly) BOOL hasGizmoCacheIdentifier; 
@property (nonatomic,retain) NSString * gizmoCacheIdentifier;              //@synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetData; 
@property (nonatomic,retain) NSData * assetData;                           //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncData; 
@property (nonatomic,retain) SPProtoCacheSyncData * syncData;              //@synthesize syncData=_syncData - In the implementation block
-(id)dictionaryRepresentation;
-(int)messageType;
-(void)setAssetKey:(NSString *)arg1 ;
-(void)setMessageType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCacheType:(int)arg1 ;
-(int)cacheType;
-(id)description;
-(void)setSyncData:(SPProtoCacheSyncData *)arg1 ;
-(NSString *)assetKey;
-(NSData *)assetData;
-(unsigned long long)hash;
-(SPProtoCacheSyncData *)syncData;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAssetData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGizmoCacheIdentifier:(NSString *)arg1 ;
-(BOOL)hasAssetKey;
-(BOOL)hasGizmoCacheIdentifier;
-(BOOL)hasAssetData;
-(BOOL)hasSyncData;
-(NSString *)gizmoCacheIdentifier;
@end

