/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPProtectionInfo, NSMutableArray, CKDPShareIdentifier, CKDPRecordStableUrl, CKDPRecordZoneIdentifier;

@interface CKDPZone : PBCodable <NSCopying> {

	NSData* _encryptedZoneishLastRollDate;
	CKDPProtectionInfo* _protectionInfo;
	NSMutableArray* _protectionInfoKeysToRemoves;
	CKDPProtectionInfo* _recordProtectionInfo;
	CKDPShareIdentifier* _shareId;
	CKDPRecordStableUrl* _stableUrl;
	CKDPRecordZoneIdentifier* _zoneIdentifier;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                 //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                       //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * recordProtectionInfo;                 //@synthesize recordProtectionInfo=_recordProtectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedZoneishLastRollDate; 
@property (nonatomic,retain) NSData * encryptedZoneishLastRollDate;                     //@synthesize encryptedZoneishLastRollDate=_encryptedZoneishLastRollDate - In the implementation block
@property (nonatomic,readonly) BOOL hasStableUrl; 
@property (nonatomic,retain) CKDPRecordStableUrl * stableUrl;                           //@synthesize stableUrl=_stableUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                             //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,retain) NSMutableArray * protectionInfoKeysToRemoves;              //@synthesize protectionInfoKeysToRemoves=_protectionInfoKeysToRemoves - In the implementation block
+(Class)protectionInfoKeysToRemoveType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRecordProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasRecordProtectionInfo;
-(CKDPProtectionInfo *)recordProtectionInfo;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasProtectionInfo;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)addProtectionInfoKeysToRemove:(id)arg1 ;
-(void)setEncryptedZoneishLastRollDate:(NSData *)arg1 ;
-(void)setStableUrl:(CKDPRecordStableUrl *)arg1 ;
-(unsigned long long)protectionInfoKeysToRemovesCount;
-(void)clearProtectionInfoKeysToRemoves;
-(id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasEncryptedZoneishLastRollDate;
-(BOOL)hasStableUrl;
-(BOOL)hasShareId;
-(NSData *)encryptedZoneishLastRollDate;
-(CKDPRecordStableUrl *)stableUrl;
-(CKDPShareIdentifier *)shareId;
-(NSMutableArray *)protectionInfoKeysToRemoves;
-(void)setProtectionInfoKeysToRemoves:(NSMutableArray *)arg1 ;
@end

