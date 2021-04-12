/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)_isIslandForGeoMapItem:(id)arg1 ;
+(id)litePlacemarkFromCLPlacemark:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocation *)location;
-(CLCircularRegion *)region;
-(NSString *)subThoroughfare;
-(NSString *)thoroughfare;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(NSArray *)areasOfInterest;
-(NSString *)locality;
-(NSString *)administrativeArea;
-(NSString *)ISOcountryCode;
-(NSString *)inlandWater;
-(NSString *)ocean;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)administrativeAreaCode;
-(void)setAdministrativeAreaCode:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setInlandWater:(NSString *)arg1 ;
-(void)setOcean:(NSString *)arg1 ;
-(NSString *)geoServiceProvider;
-(BOOL)isIsland;
-(void)setISOcountryCode:(NSString *)arg1 ;
-(void)setAreasOfInterest:(NSArray *)arg1 ;
-(id)initWithCLPlacemark:(id)arg1 ;
-(id)initWithRTMapItem:(id)arg1 ;
-(BOOL)isOcean;
-(void)_extractValuesFromGeoMapItem:(id)arg1 ;
-(void)setIsIsland:(BOOL)arg1 ;
-(NSData *)revGeoLocationData;
-(void)setRevGeoLocationData:(NSData *)arg1 ;
-(void)setGeoServiceProvider:(NSString *)arg1 ;
@end

