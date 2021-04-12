/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDRestaurantReservationLink, NSMapTable, NSArray;

@interface GEORestaurantFeaturesLink : NSObject {

	GEOPDRestaurantReservationLink* _restaurantReservationLink;
	NSMapTable* _attributionMap;

}

@property (nonatomic,retain) GEOPDRestaurantReservationLink * restaurantReservationLink;              //@synthesize restaurantReservationLink=_restaurantReservationLink - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatures; 
@property (nonatomic,readonly) NSArray * featureProviders; 
@property (nonatomic,readonly) NSArray * featureTypes; 
-(void)setRestaurantReservationLink:(GEOPDRestaurantReservationLink *)arg1 ;
-(BOOL)hasFeatures;
-(id)applicationsForVendorID:(id)arg1 ;
-(id)initWithRestaurantReservationLink:(id)arg1 attributionMap:(id)arg2 ;
-(NSArray *)featureTypes;
-(NSArray *)featureProviders;
-(id)displayNameForVendorID:(id)arg1 ;
-(unsigned long long)extensionModeForVendorID:(id)arg1 ;
-(GEOPDRestaurantReservationLink *)restaurantReservationLink;
@end

