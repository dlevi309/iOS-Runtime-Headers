/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPZoneCapabilities, CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying> {

	CKDPZoneCapabilities* _capabilities;
	int _changeType;
	int _deleteType;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) int changeType;                                         //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) BOOL hasDeleteType; 
@property (assign,nonatomic) int deleteType;                                         //@synthesize deleteType=_deleteType - In the implementation block
@property (nonatomic,readonly) BOOL hasCapabilities; 
@property (nonatomic,retain) CKDPZoneCapabilities * capabilities;                    //@synthesize capabilities=_capabilities - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)changeType;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPZoneCapabilities *)capabilities;
-(void)setChangeType:(int)arg1 ;
-(void)setCapabilities:(CKDPZoneCapabilities *)arg1 ;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(BOOL)hasCapabilities;
-(int)deleteType;
-(void)setDeleteType:(int)arg1 ;
-(void)setHasDeleteType:(BOOL)arg1 ;
-(BOOL)hasDeleteType;
-(id)deleteTypeAsString:(int)arg1 ;
-(int)StringAsDeleteType:(id)arg1 ;
@end

