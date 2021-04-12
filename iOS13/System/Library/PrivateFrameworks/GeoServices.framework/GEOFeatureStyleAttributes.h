/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_GE170* v;
	GEOFeatureStyleAttributes* _sharedAttributes;
	SCD_Struct_GE171* extAttrs;
	unsigned char countExtAttrs;
	unsigned char countAttrs;
	char featureType;

}
+(BOOL)supportsSecureCoding;
+(id)addressMarkerStyleAttributes;
+(id)airportStyleAttributes;
+(id)searchResultStyleAttributes;
+(id)homeStyleAttributes;
+(id)workStyleAttributes;
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithAttributes:(unsigned)arg1 ;
-(void)removeKey:(unsigned)arg1 ;
-(char)featureType;
-(BOOL)isLabelPOI;
-(void)replaceAttributes:(const SCD_Struct_GE170*)arg1 count:(unsigned)arg2 ;
-(int)poiType;
-(id)copyWithAirportStyleAttributes;
-(BOOL)isLandmarkPOI;
-(BOOL)isSearchResult;
-(BOOL)isTransit;
-(BOOL)isDrivable;
-(BOOL)isWalkable;
-(BOOL)isRoadPedestrianNavigable;
-(int)walkableSide;
-(int)sidewalkSide;
-(BOOL)isTunnel;
-(BOOL)isBridge;
-(BOOL)isRailway;
-(int)rampType;
-(int)drivingSide;
-(BOOL)hasDrivingSide;
-(id)initWithPlaceDataStyleAttributes:(id)arg1 ;
-(id)initWithPlaceStyleAttributes:(id)arg1 ;
-(unsigned)lineType;
-(void)sort;
-(void)setExtAttributes:(const SCD_Struct_GE171*)arg1 count:(unsigned)arg2 ;
-(id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(const SCD_Struct_GE171*)arg2 extAttributeCount:(unsigned char)arg3 ;
-(id)initWithStyleAttributes:(id)arg1 ;
-(id)initWithGEOStyleAttributes:(id)arg1 ;
-(BOOL)isSuperset:(id)arg1 ;
-(BOOL)hasAttributes;
-(BOOL)isRamp;
-(int)rampDirection;
-(BOOL)isFreeway;
-(BOOL)isBorder;
-(BOOL)shouldSuppress3DBuildingStrokes;
@end

