/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEORPScorecard;

@interface GEORPPoiEnrichment : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _images;
	GEORPScorecard* _scorecard;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasScorecard; 
@property (nonatomic,retain) GEORPScorecard * scorecard; 
@property (nonatomic,retain) NSMutableArray * images; 
+(BOOL)isValid:(id)arg1 ;
+(Class)imageType;
-(id)dictionaryRepresentation;
-(void)clearImages;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setImages:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)imagesCount;
-(id)imageAtIndex:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)addImage:(id)arg1 ;
-(NSMutableArray *)images;
-(BOOL)readFrom:(id)arg1 ;
-(GEORPScorecard *)scorecard;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasScorecard;
-(void)setScorecard:(GEORPScorecard *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

