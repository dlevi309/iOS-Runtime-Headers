/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/PGGraphPlaceItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLCircularRegion, NSArray, NSString;

@interface CLSBusinessItem : NSObject <PGGraphPlaceItem, NSSecureCoding> {

	BOOL _cached;
	NSString* _name;
	CLCircularRegion* _region;
	NSArray* _categories;
	unsigned long long _muid;
	long long _venueCapacity;
	NSArray* _businessCategories;
	NSString* _isoCountryCode;
	NSString* _geoServiceProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLCircularRegion * region; 
@property (nonatomic,readonly) NSArray * categoryNames; 
@property (nonatomic,copy) NSString * isoCountryCode;                  //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy) NSString * geoServiceProvider;              //@synthesize geoServiceProvider=_geoServiceProvider - In the implementation block
@property (assign,nonatomic) BOOL cached;                              //@synthesize cached=_cached - In the implementation block
@property (nonatomic,retain) CLCircularRegion * region;                //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                  //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) long long venueCapacity;                  //@synthesize venueCapacity=_venueCapacity - In the implementation block
@property (nonatomic,copy) NSArray * categories;                       //@synthesize categories=_categories - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * businessCategories;               //@synthesize businessCategories=_businessCategories - In the implementation block
@property (nonatomic,readonly) BOOL isEnriched; 
+(BOOL)supportsSecureCoding;
+(id)_businessCategoriesFromGeoMapItems:(id)arg1 ;
+(double)_defaultRadiusForCategories:(id)arg1 ;
+(id)_regionFromMapItem:(id)arg1 ;
-(NSArray *)categoryNames;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CLCircularRegion *)region;
-(NSString *)isoCountryCode;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(NSArray *)categories;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(long long)venueCapacity;
-(void)setCategories:(NSArray *)arg1 ;
-(NSString *)geoServiceProvider;
-(BOOL)cached;
-(void)setCached:(BOOL)arg1 ;
-(BOOL)isEnriched;
-(void)setVenueCapacity:(long long)arg1 ;
-(void)setGeoServiceProvider:(NSString *)arg1 ;
-(id)initFromMapItem:(id)arg1 isoCountryCode:(id)arg2 categoryOnly:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 region:(id)arg2 categories:(id)arg3 ;
-(NSArray *)businessCategories;
-(void)setBusinessCategories:(NSArray *)arg1 ;
@end

