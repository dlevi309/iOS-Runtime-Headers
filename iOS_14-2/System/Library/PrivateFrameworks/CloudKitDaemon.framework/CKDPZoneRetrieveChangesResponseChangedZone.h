/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setChangeType:(int)arg1 ;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasCapabilities;
-(int)changeType;
-(CKDPZoneCapabilities *)capabilities;
-(void)setCapabilities:(CKDPZoneCapabilities *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(BOOL)hasChangeType;
-(void)mergeFrom:(id)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(id)description;
-(int)StringAsChangeType:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)deleteType;
-(void)setDeleteType:(int)arg1 ;
-(void)setHasDeleteType:(BOOL)arg1 ;
-(BOOL)hasDeleteType;
-(id)deleteTypeAsString:(int)arg1 ;
-(int)StringAsDeleteType:(id)arg1 ;
@end

