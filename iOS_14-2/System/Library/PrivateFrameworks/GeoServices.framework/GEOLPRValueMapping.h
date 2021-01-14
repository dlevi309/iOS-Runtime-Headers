/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOLPRValueMapping : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _mappedValues;
	NSMutableArray* _timeConditions;
	NSMutableArray* _values;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_mappedValues : 1;
		unsigned read_timeConditions : 1;
		unsigned read_values : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * values; 
@property (nonatomic,retain) NSMutableArray * mappedValues; 
@property (nonatomic,retain) NSMutableArray * timeConditions; 
+(Class)valueType;
+(Class)mappedValueType;
+(Class)timeConditionsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(void)addValue:(id)arg1 ;
-(unsigned long long)valuesCount;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)values;
-(NSMutableArray *)mappedValues;
-(void)addMappedValue:(id)arg1 ;
-(void)addTimeConditions:(id)arg1 ;
-(unsigned long long)mappedValuesCount;
-(void)clearMappedValues;
-(id)mappedValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timeConditionsCount;
-(void)clearTimeConditions;
-(id)timeConditionsAtIndex:(unsigned long long)arg1 ;
-(void)setMappedValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeConditions;
-(void)setTimeConditions:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
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

