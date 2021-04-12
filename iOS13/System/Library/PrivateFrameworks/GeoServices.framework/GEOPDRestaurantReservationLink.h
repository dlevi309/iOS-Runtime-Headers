/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isValid:(id)arg1 ;
+(id)reservationLinkForPlaceData:(id)arg1 ;
+(Class)restaurantLinkType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)restaurantLinksCount;
-(NSMutableArray *)restaurantLinks;
-(void)addRestaurantLink:(id)arg1 ;
-(void)clearRestaurantLinks;
-(id)restaurantLinkAtIndex:(unsigned long long)arg1 ;
-(void)setRestaurantLinks:(NSMutableArray *)arg1 ;
@end

