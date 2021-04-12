/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NPKProtoCatalog, NSMutableArray, NPKProtoPassSyncStateItem, NSString;

@interface NPKProtoPassSyncStateChange : PBCodable <NSCopying> {

	NSData* _baseManifestHashForPartialUpdate;
	NPKProtoCatalog* _catalog;
	int _changeType;
	NSData* _changeUUID;
	NSData* _lastKnownReconciledPassSyncStateHash;
	NSData* _passData;
	unsigned _passSegmentIndex;
	unsigned _passSegmentTotal;
	NSMutableArray* _remoteAssetsForPartialUpdates;
	NPKProtoPassSyncStateItem* _syncStateItem;
	NSString* _uniqueID;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,retain) NSData * changeUUID;                                         //@synthesize changeUUID=_changeUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastKnownReconciledPassSyncStateHash; 
@property (nonatomic,retain) NSData * lastKnownReconciledPassSyncStateHash;               //@synthesize lastKnownReconciledPassSyncStateHash=_lastKnownReconciledPassSyncStateHash - In the implementation block
@property (assign,nonatomic) int changeType;                                              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncStateItem; 
@property (nonatomic,retain) NPKProtoPassSyncStateItem * syncStateItem;                   //@synthesize syncStateItem=_syncStateItem - In the implementation block
@property (nonatomic,readonly) BOOL hasPassData; 
@property (nonatomic,retain) NSData * passData;                                           //@synthesize passData=_passData - In the implementation block
@property (assign,nonatomic) BOOL hasPassSegmentIndex; 
@property (assign,nonatomic) unsigned passSegmentIndex;                                   //@synthesize passSegmentIndex=_passSegmentIndex - In the implementation block
@property (assign,nonatomic) BOOL hasPassSegmentTotal; 
@property (assign,nonatomic) unsigned passSegmentTotal;                                   //@synthesize passSegmentTotal=_passSegmentTotal - In the implementation block
@property (nonatomic,readonly) BOOL hasCatalog; 
@property (nonatomic,retain) NPKProtoCatalog * catalog;                                   //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,readonly) BOOL hasBaseManifestHashForPartialUpdate; 
@property (nonatomic,retain) NSData * baseManifestHashForPartialUpdate;                   //@synthesize baseManifestHashForPartialUpdate=_baseManifestHashForPartialUpdate - In the implementation block
@property (nonatomic,retain) NSMutableArray * remoteAssetsForPartialUpdates;              //@synthesize remoteAssetsForPartialUpdates=_remoteAssetsForPartialUpdates - In the implementation block
+(Class)remoteAssetsForPartialUpdateType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)changeType;
-(id)dictionaryRepresentation;
-(NSString *)uniqueID;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NPKProtoCatalog *)catalog;
-(void)setCatalog:(NPKProtoCatalog *)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(NSData *)passData;
-(BOOL)hasPassSegmentIndex;
-(unsigned)passSegmentIndex;
-(NSData *)changeUUID;
-(unsigned)passSegmentTotal;
-(BOOL)hasPassSegmentTotal;
-(id)npkDescription;
-(void)setPassData:(NSData *)arg1 ;
-(BOOL)hasCatalog;
-(void)setPassSegmentIndex:(unsigned)arg1 ;
-(void)setPassSegmentTotal:(unsigned)arg1 ;
-(NPKProtoPassSyncStateItem *)syncStateItem;
-(NSData *)baseManifestHashForPartialUpdate;
-(void)setBaseManifestHashForPartialUpdate:(NSData *)arg1 ;
-(void)setChangeUUID:(NSData *)arg1 ;
-(void)setSyncStateItem:(NPKProtoPassSyncStateItem *)arg1 ;
-(BOOL)hasPassData;
-(void)addRemoteAssetsForPartialUpdate:(id)arg1 ;
-(void)setLastKnownReconciledPassSyncStateHash:(NSData *)arg1 ;
-(unsigned long long)remoteAssetsForPartialUpdatesCount;
-(void)clearRemoteAssetsForPartialUpdates;
-(id)remoteAssetsForPartialUpdateAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLastKnownReconciledPassSyncStateHash;
-(BOOL)hasSyncStateItem;
-(void)setHasPassSegmentIndex:(BOOL)arg1 ;
-(void)setHasPassSegmentTotal:(BOOL)arg1 ;
-(BOOL)hasBaseManifestHashForPartialUpdate;
-(NSData *)lastKnownReconciledPassSyncStateHash;
-(NSMutableArray *)remoteAssetsForPartialUpdates;
-(void)setRemoteAssetsForPartialUpdates:(NSMutableArray *)arg1 ;
@end

