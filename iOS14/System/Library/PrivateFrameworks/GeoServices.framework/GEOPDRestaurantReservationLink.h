/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDRestaurantReservationLink : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _restaurantLinks;

}

@property (nonatomic,retain) NSMutableArray * restaurantLinks; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)reservationLinkForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
+(Class)restaurantLinkType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addRestaurantLink:(id)arg1 ;
-(void)clearRestaurantLinks;
-(id)restaurantLinkAtIndex:(unsigned long long)arg1 ;
-(void)setRestaurantLinks:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)restaurantLinksCount;
-(NSMutableArray *)restaurantLinks;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

