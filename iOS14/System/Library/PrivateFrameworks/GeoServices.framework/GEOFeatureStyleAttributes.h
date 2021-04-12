/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_GE171* v;
	GEOFeatureStyleAttributes* _sharedAttributes;
	SCD_Struct_GE172* extAttrs;
	unsigned char countExtAttrs;
	unsigned char countAttrs;
	char featureType;

}
+(BOOL)supportsSecureCoding;
+(id)homeStyleAttributes;
+(id)addressMarkerStyleAttributes;
+(id)airportStyleAttributes;
+(id)searchResultStyleAttributes;
+(id)workStyleAttributes;
+(id)schoolStyleAttributes;
+(id)transitStationStyleAttributes;
+(id)parkedCarStyleAttributes;
+(id)restaurantStyleAttributes;
+(id)calendarEventStyleAttributes;
+(id)frequentLocationStyleAttributes;
+(id)gasStationStyleAttributes;
+(id)evChargerStyleAttributes;
+(id)hotelStyleAttributes;
+(id)carRentalStyleAttributes;
+(id)ticketedEventStyleAttributes;
+(id)inviteStyleAttributes;
+(id)styleAttributesForPlace:(id)arg1 ;
-(BOOL)isBridge;
-(id)dictionaryRepresentation;
-(BOOL)isRailway;
-(id)init;
-(BOOL)isRamp;
-(BOOL)hasAttributes;
-(void)setExtAttributes:(const SCD_Struct_GE172*)arg1 count:(unsigned)arg2 ;
-(char)featureType;
-(id)initWithPlaceStyleAttributes:(id)arg1 ;
-(id)initWithStyleAttributes:(id)arg1 ;
-(int)bikeLaneSide;
-(id)initWithPlaceDataStyleAttributes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)sort;
-(id)initWithAttributes:(unsigned)arg1 ;
-(BOOL)isTransit;
-(id)description;
-(void)removeKey:(unsigned)arg1 ;
-(int)sidewalkSide;
-(BOOL)isTunnel;
-(int)walkableSide;
-(BOOL)isSuperset:(id)arg1 ;
-(int)poiType;
-(BOOL)isSearchResult;
-(BOOL)isLandmarkPOI;
-(unsigned)lineType;
-(void)replaceAttributes:(const SCD_Struct_GE171*)arg1 count:(unsigned)arg2 ;
-(BOOL)isLabelPOI;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasDrivingSide;
-(int)bikeableSide;
-(int)drivingSide;
-(BOOL)isRoadPedestrianNavigable;
-(BOOL)isFreeway;
-(int)rampDirection;
-(BOOL)isWalkable;
-(id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(const SCD_Struct_GE172*)arg2 extAttributeCount:(unsigned char)arg3 ;
-(id)copyWithAirportStyleAttributes;
-(int)rampType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isBorder;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isDrivable;
-(void)dealloc;
-(BOOL)shouldSuppress3DBuildingStrokes;
-(id)initWithGEOStyleAttributes:(id)arg1 ;
@end

