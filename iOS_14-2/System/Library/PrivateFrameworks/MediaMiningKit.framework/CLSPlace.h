/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSPrimitive.h>

@class NSString, CLCircularRegion, CLSLitePlacemark, NSArray, CLSBusinessItem;

@interface CLSPlace : CLSPrimitive {

	NSString* _name;
	CLCircularRegion* _region;
	CLSLitePlacemark* _placemark;
	NSArray* _categories;
	CLSBusinessItem* _businessItem;

}

@property (nonatomic,readonly) CLSBusinessItem * businessItem;                 //@synthesize businessItem=_businessItem - In the implementation block
@property (nonatomic,retain) NSArray * categories;                             //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) CLCircularRegion * region;                      //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) CLSLitePlacemark * placemark;                   //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)placeWithBusinessItem:(id)arg1 ;
+(id)placeWithLocation:(id)arg1 ;
+(id)placeWithPlacemark:(id)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(CLCircularRegion *)region;
-(CLLocationCoordinate2D)coordinate;
-(NSArray *)categories;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(CLSLitePlacemark *)placemark;
-(CLSBusinessItem *)businessItem;
-(BOOL)isEqualToPlace:(id)arg1 ;
@end

