/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HD3 _has;

}

@property (assign,nonatomic) BOOL hasEntityType; 
@property (assign,nonatomic) long long entityType;                                      //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) BOOL hasStartAnchor; 
@property (assign,nonatomic) long long startAnchor;                                     //@synthesize startAnchor=_startAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasEndAnchor; 
@property (assign,nonatomic) long long endAnchor;                                       //@synthesize endAnchor=_endAnchor - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityIdentifier; 
@property (nonatomic,retain) HDCodableEntityIdentifier * entityIdentifier;              //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEntityIdentifier:(HDCodableEntityIdentifier *)arg1 ;
-(HDCodableEntityIdentifier *)entityIdentifier;
-(long long)entityType;
-(void)setEntityType:(long long)arg1 ;
-(BOOL)hasEntityType;
-(void)setHasEntityType:(BOOL)arg1 ;
-(BOOL)hasEntityIdentifier;
-(void)setStartAnchor:(long long)arg1 ;
-(void)setEndAnchor:(long long)arg1 ;
-(BOOL)hasStartAnchor;
-(BOOL)hasEndAnchor;
-(long long)startAnchor;
-(long long)endAnchor;
-(void)setHasStartAnchor:(BOOL)arg1 ;
-(void)setHasEndAnchor:(BOOL)arg1 ;
@end

