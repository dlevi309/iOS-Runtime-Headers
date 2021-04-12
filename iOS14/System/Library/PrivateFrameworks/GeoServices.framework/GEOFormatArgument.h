/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatToken.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, PBDataReader, PBUnknownFields, GEOPBTransitArtwork, GEOCountdownData, GEOMeasurementData, GEONumberData, GEOPrice, NSMutableArray;

@interface GEOFormatArgument : PBCodable <GEOServerFormatToken, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _valInt3s;
	GEOPBTransitArtwork* _artwork;
	GEOCountdownData* _countdownData;
	GEOMeasurementData* _measurementData;
	GEONumberData* _numberData;
	GEOPrice* _price;
	NSMutableArray* _timestampDatas;
	NSString* _token;
	NSString* _valString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _format;
	unsigned _valInt1;
	unsigned _valInt2;
	struct {
		unsigned has_format : 1;
		unsigned has_valInt1 : 1;
		unsigned has_valInt2 : 1;
		unsigned read_unknownFields : 1;
		unsigned read_valInt3s : 1;
		unsigned read_artwork : 1;
		unsigned read_countdownData : 1;
		unsigned read_measurementData : 1;
		unsigned read_numberData : 1;
		unsigned read_price : 1;
		unsigned read_timestampDatas : 1;
		unsigned read_token : 1;
		unsigned read_valString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * token; 
@property (nonatomic,readonly) unsigned value1; 
@property (nonatomic,readonly) unsigned value2; 
@property (nonatomic,readonly) NSArray * value3s; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) float percentageValue; 
@property (nonatomic,readonly) BOOL shouldScaleUnits; 
@property (nonatomic,readonly) id<GEOServerFormatTokenPriceValue> priceValue; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkValue; 
@property (nonatomic,readonly) NSArray * timeStampValues; 
@property (nonatomic,readonly) id<GEOServerFormatTokenCountdownValue> countdownValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token; 
@property (assign,nonatomic) BOOL hasValInt1; 
@property (assign,nonatomic) unsigned valInt1; 
@property (assign,nonatomic) BOOL hasValInt2; 
@property (assign,nonatomic) unsigned valInt2; 
@property (nonatomic,readonly) unsigned long long valInt3sCount; 
@property (nonatomic,readonly) unsigned* valInt3s; 
@property (nonatomic,readonly) BOOL hasValString; 
@property (nonatomic,retain) NSString * valString; 
@property (nonatomic,readonly) BOOL hasPrice; 
@property (nonatomic,retain) GEOPrice * price; 
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork; 
@property (nonatomic,retain) NSMutableArray * timestampDatas; 
@property (nonatomic,readonly) BOOL hasCountdownData; 
@property (nonatomic,retain) GEOCountdownData * countdownData; 
@property (nonatomic,readonly) BOOL hasNumberData; 
@property (nonatomic,retain) GEONumberData * numberData; 
@property (nonatomic,readonly) BOOL hasMeasurementData; 
@property (nonatomic,retain) GEOMeasurementData * measurementData; 
@property (assign,nonatomic) BOOL hasFormat; 
@property (assign,nonatomic) int format; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)timestampDataType;
+(BOOL)isValid:(id)arg1 ;
-(GEOPrice *)price;
-(id)dictionaryRepresentation;
-(void)setFormat:(int)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)format;
-(id<GEOTransitArtworkDataSource>)artworkValue;
-(NSArray *)timeStampValues;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)valInt1;
-(unsigned)valInt2;
-(id)init;
-(unsigned)value1;
-(unsigned)value2;
-(id)jsonRepresentation;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(GEONumberData *)numberData;
-(BOOL)hasValInt1;
-(BOOL)hasValInt2;
-(unsigned*)valInt3s;
-(NSString *)valString;
-(NSArray *)value3s;
-(GEOCountdownData *)countdownData;
-(GEOMeasurementData *)measurementData;
-(void)setValInt1:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setValInt2:(unsigned)arg1 ;
-(void)addValInt3:(unsigned)arg1 ;
-(void)setValString:(NSString *)arg1 ;
-(void)addTimestampData:(id)arg1 ;
-(void)setCountdownData:(GEOCountdownData *)arg1 ;
-(void)setNumberData:(GEONumberData *)arg1 ;
-(void)setMeasurementData:(GEOMeasurementData *)arg1 ;
-(unsigned long long)valInt3sCount;
-(void)clearValInt3s;
-(unsigned)valInt3AtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timestampDatasCount;
-(void)clearTimestampDatas;
-(id)timestampDataAtIndex:(unsigned long long)arg1 ;
-(void)setHasValInt1:(BOOL)arg1 ;
-(void)setHasValInt2:(BOOL)arg1 ;
-(void)setValInt3s:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasValString;
-(NSMutableArray *)timestampDatas;
-(void)setTimestampDatas:(NSMutableArray *)arg1 ;
-(BOOL)hasCountdownData;
-(BOOL)hasNumberData;
-(BOOL)hasMeasurementData;
-(void)setHasFormat:(BOOL)arg1 ;
-(id)formatAsString:(int)arg1 ;
-(int)StringAsFormat:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)hasPrice;
-(BOOL)hasToken;
-(GEOPBTransitArtwork *)artwork;
-(void)setToken:(NSString *)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(void)setPrice:(GEOPrice *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasFormat;
-(BOOL)hasArtwork;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)token;
-(float)percentageValue;
-(id<GEOServerFormatTokenCountdownValue>)countdownValue;
-(BOOL)shouldScaleUnits;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<GEOServerFormatTokenPriceValue>)priceValue;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

