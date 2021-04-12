/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTouristInfo;

@interface GEOLogMsgStateMapViewLocation : PBCodable <NSCopying> {

	GEOTouristInfo* _touristInfo;
	int _locationBucket;
	BOOL _isCurrentLocationInViewport;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasLocationBucket; 
@property (assign,nonatomic) int locationBucket; 
@property (assign,nonatomic) BOOL hasIsCurrentLocationInViewport; 
@property (assign,nonatomic) BOOL isCurrentLocationInViewport; 
@property (nonatomic,readonly) BOOL hasTouristInfo; 
@property (nonatomic,retain) GEOTouristInfo * touristInfo; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)isCurrentLocationInViewport;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocationBucket;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasIsCurrentLocationInViewport:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasIsCurrentLocationInViewport;
-(int)locationBucket;
-(int)StringAsLocationBucket:(id)arg1 ;
-(void)setTouristInfo:(GEOTouristInfo *)arg1 ;
-(void)setIsCurrentLocationInViewport:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)locationBucketAsString:(int)arg1 ;
-(void)setHasLocationBucket:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTouristInfo;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLocationBucket:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOTouristInfo *)touristInfo;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

