/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSMutableData, GEOMapRegion, GEOPDTransitTripGeometry, GEOPBTransitLine, NSArray;

@interface GEOTransitTripRouteBuilder : NSObject {

	NSMutableArray* _steps;
	NSMutableArray* _composedGuidanceEvents;
	NSMutableArray* _legs;
	NSMutableData* _pointsData;
	NSMutableArray* _pointSections;
	GEOMapRegion* _boundingMapRegion;
	GEOPDTransitTripGeometry* _geometry;
	GEOPBTransitLine* _line;
	NSArray* _stops;

}

@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;              //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pointSections;                //@synthesize pointSections=_pointSections - In the implementation block
-(void)buildRoute:(id)arg1 ;
-(id)initWithGeometry:(id)arg1 andLine:(id)arg2 andStops:(id)arg3 ;
-(GEOMapRegion *)boundingMapRegion;
-(void)buildPointSectionsForRoute:(id)arg1 ;
-(NSMutableArray *)pointSections;
-(double)_buildPointSectionsForRoute:(id)arg1 pointRange:(NSRange)arg2 stepIndex:(unsigned long long)arg3 currentTransitLineColor:(id)arg4 startDistance:(double)arg5 ;
@end

