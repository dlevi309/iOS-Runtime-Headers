/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableArray, NSData, GEOMapRegion, GEORoute;

@interface GEORouteBuilder : NSObject {

	BOOL _usesZilch;
	NSMutableArray* _steps;
	NSMutableArray* _composedGuidanceEvents;
	NSMutableArray* _legs;
	NSData* _pointsData;
	NSMutableArray* _pointSections;
	GEOMapRegion* _boundingMapRegion;
	GEORoute* _route;

}

@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;              //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pointSections;                //@synthesize pointSections=_pointSections - In the implementation block
-(id)initWithRoute:(id)arg1 ;
-(void)buildRoute:(id)arg1 ;
-(GEOMapRegion *)boundingMapRegion;
-(void)buildPointSectionsForRoute:(id)arg1 ;
-(NSMutableArray *)pointSections;
-(id)_composedRouteStepForStep:(id)arg1 route:(id)arg2 ;
-(id)_composedRouteLegForSteps:(id)arg1 route:(id)arg2 ;
@end

