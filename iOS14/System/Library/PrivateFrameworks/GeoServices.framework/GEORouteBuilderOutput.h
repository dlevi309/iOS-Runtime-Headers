/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOComposedRouteCoordinateArray, NSArray, GEOMapRegion, GEOElevationProfile;

@interface GEORouteBuilderOutput : NSObject {

	GEOComposedRouteCoordinateArray* _coordinatesArray;
	NSArray* _legs;
	NSArray* _segments;
	NSArray* _steps;
	NSArray* _guidanceEvents;
	NSArray* _enrouteNotices;
	NSArray* _pointSections;
	GEOMapRegion* _boundingMapRegion;
	unsigned _distance;
	BOOL _usesZilch;

}

@property (nonatomic,retain) GEOComposedRouteCoordinateArray * coordinatesArray;              //@synthesize coordinatesArray=_coordinatesArray - In the implementation block
@property (nonatomic,retain) NSArray * legs;                                                  //@synthesize legs=_legs - In the implementation block
@property (nonatomic,retain) NSArray * segments;                                              //@synthesize segments=_segments - In the implementation block
@property (nonatomic,retain) NSArray * steps;                                                 //@synthesize steps=_steps - In the implementation block
@property (nonatomic,retain) NSArray * guidanceEvents;                                        //@synthesize guidanceEvents=_guidanceEvents - In the implementation block
@property (nonatomic,retain) NSArray * enrouteNotices;                                        //@synthesize enrouteNotices=_enrouteNotices - In the implementation block
@property (assign,nonatomic) BOOL usesZilch;                                                  //@synthesize usesZilch=_usesZilch - In the implementation block
@property (nonatomic,retain) NSArray * pointSections;                                         //@synthesize pointSections=_pointSections - In the implementation block
@property (nonatomic,retain) GEOMapRegion * boundingMapRegion;                                //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (assign,nonatomic) unsigned distance;                                               //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) GEOElevationProfile * elevationProfile; 
-(NSArray *)legs;
-(void)setDistance:(unsigned)arg1 ;
-(NSArray *)steps;
-(unsigned)distance;
-(NSArray *)enrouteNotices;
-(GEOComposedRouteCoordinateArray *)coordinatesArray;
-(NSArray *)pointSections;
-(GEOMapRegion *)boundingMapRegion;
-(GEOElevationProfile *)elevationProfile;
-(void)setBoundingMapRegion:(GEOMapRegion *)arg1 ;
-(void)setSegments:(NSArray *)arg1 ;
-(void)setEnrouteNotices:(NSArray *)arg1 ;
-(void)setLegs:(NSArray *)arg1 ;
-(NSArray *)segments;
-(void)setSteps:(NSArray *)arg1 ;
-(BOOL)usesZilch;
-(NSArray *)guidanceEvents;
-(void)setGuidanceEvents:(NSArray *)arg1 ;
-(void)setUsesZilch:(BOOL)arg1 ;
-(void)setCoordinatesArray:(GEOComposedRouteCoordinateArray *)arg1 ;
-(void)setPointSections:(NSArray *)arg1 ;
@end

