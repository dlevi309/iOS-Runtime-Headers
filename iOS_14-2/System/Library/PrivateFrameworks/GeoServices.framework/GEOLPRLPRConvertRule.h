/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOLPRLPRConvertRule : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _fillRules;
	NSMutableArray* _mapRules;
	NSMutableArray* _pickupRules;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _validEndTime;
	unsigned _validStartTime;
	struct {
		unsigned has_validEndTime : 1;
		unsigned has_validStartTime : 1;
		unsigned read_fillRules : 1;
		unsigned read_mapRules : 1;
		unsigned read_pickupRules : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * pickupRules; 
@property (nonatomic,retain) NSMutableArray * mapRules; 
@property (nonatomic,retain) NSMutableArray * fillRules; 
@property (assign,nonatomic) BOOL hasValidStartTime; 
@property (assign,nonatomic) unsigned validStartTime; 
@property (assign,nonatomic) BOOL hasValidEndTime; 
@property (assign,nonatomic) unsigned validEndTime; 
+(Class)pickupRuleType;
+(Class)mapRuleType;
+(Class)fillRuleType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(NSMutableArray *)fillRules;
-(id)init;
-(NSMutableArray *)mapRules;
-(id)jsonRepresentation;
-(void)addMapRule:(id)arg1 ;
-(void)addPickupRule:(id)arg1 ;
-(void)addFillRule:(id)arg1 ;
-(void)setValidStartTime:(unsigned)arg1 ;
-(void)setValidEndTime:(unsigned)arg1 ;
-(unsigned long long)pickupRulesCount;
-(void)clearPickupRules;
-(id)pickupRuleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mapRulesCount;
-(void)clearMapRules;
-(id)mapRuleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fillRulesCount;
-(void)clearFillRules;
-(id)fillRuleAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pickupRules;
-(void)setPickupRules:(NSMutableArray *)arg1 ;
-(void)setMapRules:(NSMutableArray *)arg1 ;
-(void)setFillRules:(NSMutableArray *)arg1 ;
-(unsigned)validStartTime;
-(void)setHasValidStartTime:(BOOL)arg1 ;
-(BOOL)hasValidStartTime;
-(unsigned)validEndTime;
-(void)setHasValidEndTime:(BOOL)arg1 ;
-(BOOL)hasValidEndTime;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

