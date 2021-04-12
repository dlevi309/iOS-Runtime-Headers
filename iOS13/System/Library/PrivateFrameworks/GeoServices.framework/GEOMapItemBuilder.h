/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOLocation, GEOAddress, GEOMapRegion, GEOLatLng, NSString;

@interface GEOMapItemBuilder : NSObject {

	SCD_Struct_GE99 _has;
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
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(GEOAddress *)address;
-(GEOLocation *)location;
-(id)build;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)setAddress:(GEOAddress *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setLatlng:(GEOLatLng *)arg1 ;
-(GEOLatLng *)latlng;
@end

