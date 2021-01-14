/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOPDScorecardLayout : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _ratingCategorys;
	NSString* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version; 
@property (nonatomic,retain) NSMutableArray * ratingCategorys; 
+(BOOL)isValid:(id)arg1 ;
+(Class)ratingCategoryType;
-(id)dictionaryRepresentation;
-(BOOL)hasVersion;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)ratingCategorys;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addRatingCategory:(id)arg1 ;
-(unsigned long long)ratingCategorysCount;
-(void)clearRatingCategorys;
-(id)ratingCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setRatingCategorys:(NSMutableArray *)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

