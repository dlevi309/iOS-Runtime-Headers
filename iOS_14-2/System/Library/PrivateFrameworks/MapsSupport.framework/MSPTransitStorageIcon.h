/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIconDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface MSPTransitStorageIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _cartoID;
	unsigned _defaultTransitType;
	unsigned _iconAttributeKey;
	unsigned _iconAttributeValue;
	int _iconType;
	SCD_Struct_MS1 _has;

}

@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) unsigned cartoID; 
@property (nonatomic,readonly) unsigned defaultTransitType; 
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasIconType; 
@property (assign,nonatomic) int iconType;                                   //@synthesize iconType=_iconType - In the implementation block
@property (assign,nonatomic) BOOL hasCartoID; 
@property (assign,nonatomic) unsigned cartoID;                               //@synthesize cartoID=_cartoID - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultTransitType; 
@property (assign,nonatomic) unsigned defaultTransitType;                    //@synthesize defaultTransitType=_defaultTransitType - In the implementation block
@property (assign,nonatomic) BOOL hasIconAttributeKey; 
@property (assign,nonatomic) unsigned iconAttributeKey;                      //@synthesize iconAttributeKey=_iconAttributeKey - In the implementation block
@property (assign,nonatomic) BOOL hasIconAttributeValue; 
@property (assign,nonatomic) unsigned iconAttributeValue;                    //@synthesize iconAttributeValue=_iconAttributeValue - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setIconType:(int)arg1 ;
-(void)setHasIconType:(BOOL)arg1 ;
-(BOOL)hasIconType;
-(id)iconTypeAsString:(int)arg1 ;
-(int)StringAsIconType:(id)arg1 ;
-(id)initWithIcon:(id)arg1 ;
-(NSString *)description;
-(int)iconType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCartoID:(unsigned)arg1 ;
-(void)setDefaultTransitType:(unsigned)arg1 ;
-(void)setIconAttributeKey:(unsigned)arg1 ;
-(void)setIconAttributeValue:(unsigned)arg1 ;
-(void)setHasCartoID:(BOOL)arg1 ;
-(BOOL)hasCartoID;
-(void)setHasDefaultTransitType:(BOOL)arg1 ;
-(BOOL)hasDefaultTransitType;
-(void)setHasIconAttributeKey:(BOOL)arg1 ;
-(BOOL)hasIconAttributeKey;
-(void)setHasIconAttributeValue:(BOOL)arg1 ;
-(BOOL)hasIconAttributeValue;
@end

