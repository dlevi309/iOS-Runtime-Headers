/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) int objectType;                                            //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasAnchor; 
@property (assign,nonatomic) long long anchor;                                          //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityIdentifier; 
@property (nonatomic,retain) HDCodableEntityIdentifier * entityIdentifier;              //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(int)objectType;
-(BOOL)hasEntityIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)objectTypeAsString:(int)arg1 ;
-(int)StringAsObjectType:(id)arg1 ;
-(BOOL)hasObjectType;
-(void)setObjectType:(int)arg1 ;
-(void)setHasObjectType:(BOOL)arg1 ;
-(id)description;
-(void)setEntityIdentifier:(HDCodableEntityIdentifier *)arg1 ;
-(BOOL)hasAnchor;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(long long)anchor;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAnchor:(long long)arg1 ;
-(HDCodableEntityIdentifier *)entityIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasAnchor:(BOOL)arg1 ;
-(id)nanoSyncDescription;
@end

