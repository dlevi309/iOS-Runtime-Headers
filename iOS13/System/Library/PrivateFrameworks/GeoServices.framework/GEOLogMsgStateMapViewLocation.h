/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasLocationBucket; 
@property (assign,nonatomic) int locationBucket; 
@property (assign,nonatomic) BOOL hasIsCurrentLocationInViewport; 
@property (assign,nonatomic) BOOL isCurrentLocationInViewport; 
@property (nonatomic,readonly) BOOL hasTouristInfo; 
@property (nonatomic,retain) GEOTouristInfo * touristInfo; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOTouristInfo *)touristInfo;
-(void)setTouristInfo:(GEOTouristInfo *)arg1 ;
-(int)locationBucket;
-(void)setLocationBucket:(int)arg1 ;
-(void)setHasLocationBucket:(BOOL)arg1 ;
-(BOOL)hasLocationBucket;
-(id)locationBucketAsString:(int)arg1 ;
-(int)StringAsLocationBucket:(id)arg1 ;
-(BOOL)isCurrentLocationInViewport;
-(void)setIsCurrentLocationInViewport:(BOOL)arg1 ;
-(void)setHasIsCurrentLocationInViewport:(BOOL)arg1 ;
-(BOOL)hasIsCurrentLocationInViewport;
-(BOOL)hasTouristInfo;
@end

