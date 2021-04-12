/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableEntityIdentifier;

@interface HDCodableNanoSyncAnchor : PBCodable <NSCopying> {

	long long _anchor;
	HDCodableEntityIdentifier* _entityIdentifier;
	int _objectType;
	SCD_Struct_HD12 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) int objectType;                                            //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasAnchor; 
@property (assign,nonatomic) long long anchor;                                          //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityIdentifier; 
@property (nonatomic,retain) HDCodableEntityIdentifier * entityIdentifier;              //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)objectType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setObjectType:(int)arg1 ;
-(long long)anchor;
-(void)setAnchor:(long long)arg1 ;
-(void)setEntityIdentifier:(HDCodableEntityIdentifier *)arg1 ;
-(HDCodableEntityIdentifier *)entityIdentifier;
-(BOOL)hasEntityIdentifier;
-(id)objectTypeAsString:(int)arg1 ;
-(int)StringAsObjectType:(id)arg1 ;
-(BOOL)hasObjectType;
-(void)setHasObjectType:(BOOL)arg1 ;
-(BOOL)hasAnchor;
-(void)setHasAnchor:(BOOL)arg1 ;
-(id)nanoSyncDescription;
@end

