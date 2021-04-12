/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long conditionType; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) NSArray * subconditions; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasExpirationTime; 
@property (assign,nonatomic) unsigned expirationTime; 
@property (nonatomic,retain) NSMutableArray * conditions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)conditionType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSDate *)expirationDate;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addCondition:(id)arg1 ;
-(unsigned long long)conditionsCount;
-(void)clearConditions;
-(id)conditionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)conditions;
-(long long)conditionType;
-(unsigned)expirationTime;
-(void)setExpirationTime:(unsigned)arg1 ;
-(void)setHasExpirationTime:(BOOL)arg1 ;
-(BOOL)hasExpirationTime;
-(void)setConditions:(NSMutableArray *)arg1 ;
-(NSArray *)subconditions;
@end

