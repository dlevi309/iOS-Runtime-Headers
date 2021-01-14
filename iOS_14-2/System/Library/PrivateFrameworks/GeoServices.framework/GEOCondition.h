/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerCondition.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSArray, PBUnknownFields, NSMutableArray, NSString;

@interface GEOCondition : PBCodable <GEOServerCondition, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _conditions;
	unsigned _expirationTime;
	int _type;
	struct {
		unsigned has_expirationTime : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (nonatomic,readonly) long long conditionType; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) NSArray * subconditions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasExpirationTime; 
@property (assign,nonatomic) unsigned expirationTime; 
@property (nonatomic,retain) NSMutableArray * conditions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)conditionType;
+(BOOL)isValid:(id)arg1 ;
-(NSMutableArray *)conditions;
-(id)dictionaryRepresentation;
-(void)setConditions:(NSMutableArray *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)conditionsCount;
-(void)clearConditions;
-(id)conditionAtIndex:(unsigned long long)arg1 ;
-(void)setHasExpirationTime:(BOOL)arg1 ;
-(BOOL)hasExpirationTime;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(long long)conditionType;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setExpirationTime:(unsigned)arg1 ;
-(unsigned)expirationTime;
-(NSString *)description;
-(NSDate *)expirationDate;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addCondition:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)subconditions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

