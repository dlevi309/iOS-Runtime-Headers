/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOLogMsgEventHardStop : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _digits;
	NSMutableArray* _cities;
	double _score;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_score : 1;
		unsigned read_digits : 1;
		unsigned read_cities : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long digitsCount; 
@property (nonatomic,readonly) unsigned* digits; 
@property (nonatomic,retain) NSMutableArray * cities; 
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score; 
+(Class)citiesType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasScore;
-(void)setHasScore:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)addCities:(id)arg1 ;
-(unsigned long long)digitsCount;
-(void)clearDigits;
-(unsigned)digitsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)citiesCount;
-(void)clearCities;
-(id)citiesAtIndex:(unsigned long long)arg1 ;
-(void)setDigits:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)jsonRepresentation;
-(double)score;
-(void)setScore:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)cities;
-(id)initWithDictionary:(id)arg1 ;
-(void)addDigits:(unsigned)arg1 ;
-(id)description;
-(void)setCities:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned*)digits;
-(void)dealloc;
@end

