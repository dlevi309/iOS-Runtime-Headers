/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) CLCircularRegion * region; 
@property (nonatomic,readonly) NSArray * categoryNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)setCategories:(NSArray *)arg1 ;
-(CLCircularRegion *)region;
-(void)setMuid:(unsigned long long)arg1 ;
-(BOOL)cached;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(BOOL)isEnriched;
-(NSArray *)categories;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)isoCountryCode;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)muid;
-(void)setName:(NSString *)arg1 ;
-(void)setCached:(BOOL)arg1 ;
-(NSString *)geoServiceProvider;
-(long long)venueCapacity;
-(NSArray *)businessCategories;
-(id)initFromMapItem:(id)arg1 isoCountryCode:(id)arg2 categoryOnly:(BOOL)arg3 ;
-(void)setGeoServiceProvider:(NSString *)arg1 ;
-(void)setBusinessCategories:(NSArray *)arg1 ;
-(void)setVenueCapacity:(long long)arg1 ;
-(id)initWithName:(id)arg1 region:(id)arg2 categories:(id)arg3 ;
@end

