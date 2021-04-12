/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) unsigned cartoID; 
@property (nonatomic,readonly) unsigned defaultTransitType; 
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)iconType;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(BOOL)hasIconType;
-(void)setIconType:(int)arg1 ;
-(void)setHasIconType:(BOOL)arg1 ;
-(id)iconTypeAsString:(int)arg1 ;
-(int)StringAsIconType:(id)arg1 ;
-(id)initWithIcon:(id)arg1 ;
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

