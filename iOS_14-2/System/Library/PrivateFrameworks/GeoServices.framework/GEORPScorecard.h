/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEORPScorecard : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _categoryRatings;
	NSString* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _recommended;
	struct {
		unsigned has_recommended : 1;
		unsigned read_categoryRatings : 1;
		unsigned read_version : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version; 
@property (assign,nonatomic) BOOL hasRecommended; 
@property (assign,nonatomic) BOOL recommended; 
@property (nonatomic,retain) NSMutableArray * categoryRatings; 
+(BOOL)isValid:(id)arg1 ;
+(Class)categoryRatingsType;
-(id)dictionaryRepresentation;
-(BOOL)hasVersion;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)recommended;
-(void)setRecommended:(BOOL)arg1 ;
-(void)addCategoryRatings:(id)arg1 ;
-(unsigned long long)categoryRatingsCount;
-(BOOL)hasRecommended;
-(void)clearCategoryRatings;
-(id)categoryRatingsAtIndex:(unsigned long long)arg1 ;
-(void)setHasRecommended:(BOOL)arg1 ;
-(NSMutableArray *)categoryRatings;
-(void)setCategoryRatings:(NSMutableArray *)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

