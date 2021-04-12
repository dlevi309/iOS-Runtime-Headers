/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(GEOPDRestaurantReservationLink *)restaurantReservationLink;
-(id)applicationsForVendorID:(id)arg1 ;
-(id)initWithRestaurantReservationLink:(id)arg1 attributionMap:(id)arg2 ;
-(BOOL)hasFeatures;
-(NSArray *)featureProviders;
-(id)displayNameForVendorID:(id)arg1 ;
-(unsigned long long)extensionModeForVendorID:(id)arg1 ;
-(NSArray *)featureTypes;
-(void)setRestaurantReservationLink:(GEOPDRestaurantReservationLink *)arg1 ;
@end

