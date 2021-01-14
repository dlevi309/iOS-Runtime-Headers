/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitBackingStoreCKRebuildEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _containerType;
	int _rebuildStatus;
	int _zoneType;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRebuildStatus; 
@property (assign,nonatomic) int rebuildStatus;                         //@synthesize rebuildStatus=_rebuildStatus - In the implementation block
@property (assign,nonatomic) BOOL hasContainerType; 
@property (assign,nonatomic) int containerType;                         //@synthesize containerType=_containerType - In the implementation block
@property (assign,nonatomic) BOOL hasZoneType; 
@property (assign,nonatomic) int zoneType;                              //@synthesize zoneType=_zoneType - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasContainerType:(BOOL)arg1 ;
-(id)containerTypeAsString:(int)arg1 ;
-(int)StringAsContainerType:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setContainerType:(int)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasContainerType;
-(int)containerType;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)zoneType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setZoneType:(int)arg1 ;
-(void)setHasZoneType:(BOOL)arg1 ;
-(BOOL)hasZoneType;
-(id)zoneTypeAsString:(int)arg1 ;
-(int)StringAsZoneType:(id)arg1 ;
-(int)rebuildStatus;
-(void)setRebuildStatus:(int)arg1 ;
-(void)setHasRebuildStatus:(BOOL)arg1 ;
-(BOOL)hasRebuildStatus;
-(id)rebuildStatusAsString:(int)arg1 ;
-(int)StringAsRebuildStatus:(id)arg1 ;
@end

