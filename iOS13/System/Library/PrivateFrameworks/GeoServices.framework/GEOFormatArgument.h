/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatToken.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, PBDataReader, PBUnknownFields, GEOPBTransitArtwork, GEOCountdownData, GEOPrice, NSMutableArray;

@interface GEOFormatArgument : PBCodable <GEOServerFormatToken, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _valInt3s;
	GEOPBTransitArtwork* _artwork;
	GEOCountdownData* _countdownData;
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
		unsigned read_price : 1;
		unsigned read_timestampDatas : 1;
		unsigned read_token : 1;
		unsigned read_valString : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_valInt3s : 1;
		unsigned wrote_artwork : 1;
		unsigned wrote_countdownData : 1;
		unsigned wrote_price : 1;
		unsigned wrote_timestampDatas : 1;
		unsigned wrote_token : 1;
		unsigned wrote_valString : 1;
		unsigned wrote_format : 1;
		unsigned wrote_valInt1 : 1;
		unsigned wrote_valInt2 : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * token; 
@property (nonatomic,readonly) unsigned value1; 
@property (nonatomic,readonly) unsigned value2; 
@property (nonatomic,readonly) NSArray * value3s; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) id<GEOServerFormatTokenPriceValue> priceValue; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkValue; 
@property (nonatomic,readonly) NSArray * timeStampValues; 
@property (nonatomic,readonly) id<GEOServerFormatTokenCountdownValue> countdownValue; 
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
@property (assign,nonatomic) BOOL hasFormat; 
@property (assign,nonatomic) int format; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)timestampDataType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(long long)type;
-(NSString *)stringValue;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)format;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFormat:(int)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readPrice;
-(GEOPrice *)price;
-(void)setPrice:(GEOPrice *)arg1 ;
-(BOOL)hasPrice;
-(void)_readArtwork;
-(GEOPBTransitArtwork *)artwork;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(BOOL)hasArtwork;
-(unsigned)value1;
-(unsigned)value2;
-(NSArray *)value3s;
-(id<GEOServerFormatTokenPriceValue>)priceValue;
-(id<GEOTransitArtworkDataSource>)artworkValue;
-(NSArray *)timeStampValues;
-(GEOCountdownData *)countdownData;
-(void)setTimestampDatas:(NSMutableArray *)arg1 ;
-(void)setValInt1:(unsigned)arg1 ;
-(BOOL)hasToken;
-(unsigned)valInt1;
-(unsigned)valInt2;
-(unsigned long long)valInt3sCount;
-(unsigned)valInt3AtIndex:(unsigned long long)arg1 ;
-(NSString *)valString;
-(NSMutableArray *)timestampDatas;
-(id<GEOServerFormatTokenCountdownValue>)countdownValue;
-(void)_readToken;
-(void)_readValInt3s;
-(void)_addNoFlagsValInt3:(unsigned)arg1 ;
-(void)_readValString;
-(void)_readTimestampDatas;
-(void)_addNoFlagsTimestampData:(id)arg1 ;
-(void)_readCountdownData;
-(void)clearValInt3s;
-(void)addValInt3:(unsigned)arg1 ;
-(void)setValString:(NSString *)arg1 ;
-(unsigned long long)timestampDatasCount;
-(void)clearTimestampDatas;
-(id)timestampDataAtIndex:(unsigned long long)arg1 ;
-(void)addTimestampData:(id)arg1 ;
-(void)setCountdownData:(GEOCountdownData *)arg1 ;
-(void)setHasValInt1:(BOOL)arg1 ;
-(BOOL)hasValInt1;
-(void)setValInt2:(unsigned)arg1 ;
-(void)setHasValInt2:(BOOL)arg1 ;
-(BOOL)hasValInt2;
-(unsigned*)valInt3s;
-(void)setValInt3s:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasValString;
-(BOOL)hasCountdownData;
-(void)setHasFormat:(BOOL)arg1 ;
-(BOOL)hasFormat;
-(id)formatAsString:(int)arg1 ;
-(int)StringAsFormat:(id)arg1 ;
@end

