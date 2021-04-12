/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLCircularRegion, CLLocation, NSString, NSArray, NSData;

@interface CLSLitePlacemark : NSObject <NSSecureCoding> {

	BOOL _isIsland;
	CLCircularRegion* _region;
	CLLocation* _location;
	NSString* _thoroughfare;
	NSString* _subThoroughfare;
	NSString* _locality;
	NSString* _subLocality;
	NSString* _administrativeArea;
	NSString* _subAdministrativeArea;
	NSString* _ISOcountryCode;
	NSString* _inlandWater;
	NSString* _ocean;
	NSArray* _areasOfInterest;
	NSString* _administrativeAreaCode;
	NSData* _revGeoLocationData;
	NSString* _geoServiceProvider;

}

@property (nonatomic,retain) CLLocation * location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) CLCircularRegion * region;                      //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSString * thoroughfare;                        //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,retain) NSString * subThoroughfare;                     //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,retain) NSString * locality;                            //@synthesize locality=_locality - In the implementation block
@property (nonatomic,retain) NSString * subLocality;                         //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,retain) NSString * administrativeArea;                  //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,retain) NSString * administrativeAreaCode;              //@synthesize administrativeAreaCode=_administrativeAreaCode - In the implementation block
@property (nonatomic,retain) NSString * subAdministrativeArea;               //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,retain) NSString * ISOcountryCode;                      //@synthesize ISOcountryCode=_ISOcountryCode - In the implementation block
@property (nonatomic,retain) NSString * inlandWater;                         //@synthesize inlandWater=_inlandWater - In the implementation block
@property (nonatomic,retain) NSString * ocean;                               //@synthesize ocean=_ocean - In the implementation block
@property (nonatomic,retain) NSArray * areasOfInterest;                      //@synthesize areasOfInterest=_areasOfInterest - In the implementation block
@property (assign,nonatomic) BOOL isIsland;                                  //@synthesize isIsland=_isIsland - In the implementation block
@property (nonatomic,retain) NSData * revGeoLocationData;                    //@synthesize revGeoLocationData=_revGeoLocationData - In the implementation block
@property (nonatomic,retain) NSString * geoServiceProvider;                  //@synthesize geoServiceProvider=_geoServiceProvider - In the implementation block
@property (nonatomic,readonly) BOOL isOcean; 
+(BOOL)supportsSecureCoding;
+(id)litePlacemarkFromCLPlacemark:(id)arg1 ;
+(BOOL)_isIslandForGeoMapItem:(id)arg1 ;
-(NSString *)subLocality;
-(CLCircularRegion *)region;
-(void)setLocality:(NSString *)arg1 ;
-(NSArray *)areasOfInterest;
-(NSString *)ocean;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(NSString *)subAdministrativeArea;
-(void)setOcean:(NSString *)arg1 ;
-(void)setAdministrativeAreaCode:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setInlandWater:(NSString *)arg1 ;
-(CLLocation *)location;
-(NSString *)subThoroughfare;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isIsland;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)locality;
-(id)description;
-(NSString *)ISOcountryCode;
-(NSString *)inlandWater;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(BOOL)isOcean;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(NSString *)administrativeAreaCode;
-(NSString *)geoServiceProvider;
-(NSString *)administrativeArea;
-(void)setISOcountryCode:(NSString *)arg1 ;
-(NSString *)thoroughfare;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)revGeoLocationData;
-(void)setAreasOfInterest:(NSArray *)arg1 ;
-(void)setGeoServiceProvider:(NSString *)arg1 ;
-(void)setRevGeoLocationData:(NSData *)arg1 ;
-(void)setIsIsland:(BOOL)arg1 ;
-(id)initWithCLPlacemark:(id)arg1 ;
-(id)initWithRTMapItem:(id)arg1 ;
-(void)_extractValuesFromGeoMapItem:(id)arg1 ;
@end

