/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocalizedString;

@interface GEORPRatingValue : PBCodable <NSCopying> {

	GEOLocalizedString* _categoryName;
	int _score;
	struct {
		unsigned has_score : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCategoryName; 
@property (nonatomic,retain) GEOLocalizedString * categoryName; 
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) int score; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasScore;
-(void)setHasScore:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)score;
-(void)setScore:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOLocalizedString *)categoryName;
-(void)setCategoryName:(GEOLocalizedString *)arg1 ;
-(BOOL)hasCategoryName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

