/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOLocation, GEOAddress, GEOMapRegion, GEOLatLng, NSString;

@interface GEOMapItemBuilder : NSObject {

	SCD_Struct_GE127 _has;
	GEOLocation* _location;
	int _referenceFrame;
	GEOAddress* _address;
	GEOMapRegion* _mapRegion;
	GEOLatLng* _latlng;
	NSString* _name;

}

@property (nonatomic,retain) GEOLocation * location;                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int referenceFrame;                    //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (nonatomic,retain) GEOAddress * address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) GEOMapRegion * mapRegion;              //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,retain) GEOLatLng * latlng;                    //@synthesize latlng=_latlng - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
+(id)buildWithSetterBlock:(/*^block*/id)arg1 ;
-(id)build;
-(id)init;
-(GEOLatLng *)latlng;
-(GEOLocation *)location;
-(GEOMapRegion *)mapRegion;
-(int)referenceFrame;
-(void)setLocation:(GEOLocation *)arg1 ;
-(NSString *)name;
-(void)setReferenceFrame:(int)arg1 ;
-(GEOAddress *)address;
-(void)setAddress:(GEOAddress *)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setLatlng:(GEOLatLng *)arg1 ;
@end

