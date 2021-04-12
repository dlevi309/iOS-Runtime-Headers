/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableEntityIdentifier;

@interface HDCodableSyncAnchorRange : PBCodable <NSCopying> {

	long long _endAnchor;
	long long _entityType;
	long long _startAnchor;
	HDCodableEntityIdentifier* _entityIdentifier;
	SCD_Struct_HD12 _has;

}

@property (assign,nonatomic) BOOL hasEntityType; 
@property (assign,nonatomic) long long entityType;                                      //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) BOOL hasStartAnchor; 
@property (assign,nonatomic) long long startAnchor;                                     //@synthesize startAnchor=_startAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasEndAnchor; 
@property (assign,nonatomic) long long endAnchor;                                       //@synthesize endAnchor=_endAnchor - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityIdentifier; 
@property (nonatomic,retain) HDCodableEntityIdentifier * entityIdentifier;              //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
-(long long)entityType;
-(id)dictionaryRepresentation;
-(BOOL)hasEntityIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setEntityIdentifier:(HDCodableEntityIdentifier *)arg1 ;
-(unsigned long long)hash;
-(void)setEntityType:(long long)arg1 ;
-(BOOL)hasEntityType;
-(void)setHasEntityType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableEntityIdentifier *)entityIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStartAnchor:(long long)arg1 ;
-(void)setEndAnchor:(long long)arg1 ;
-(BOOL)hasStartAnchor;
-(BOOL)hasEndAnchor;
-(long long)startAnchor;
-(long long)endAnchor;
-(void)setHasStartAnchor:(BOOL)arg1 ;
-(void)setHasEndAnchor:(BOOL)arg1 ;
@end

