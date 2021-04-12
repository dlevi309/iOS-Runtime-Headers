/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate, GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, NSMutableArray, NSArray, NSDictionary;

@interface GEOTraceRouteSimulator : NSObject {

	double _deltaT;
	double _horizontalAccuracy;
	double _verticalAccuracy;
	NSDate* _startTime;
	GEOComposedRoute* _route;
	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	GEORouteAttributes* _routeAttributes;
	unsigned _routeIndex;
	SCD_Struct_GE32 _walkingStart;
	SCD_Struct_GE32 _walkingEnd;
	SCD_Struct_GE32 _origin;
	SCD_Struct_GE32 _destination;
	NSMutableArray* _mutableLocations;
	NSArray* _locations;
	NSDictionary* _pointTimestamps;
	double _duration;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                          //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) GEODirectionsRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) GEODirectionsResponse * response;                  //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes;              //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,readonly) unsigned routeIndex;                               //@synthesize routeIndex=_routeIndex - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE32 origin;                              //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE32 destination;                         //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableLocations;                   //@synthesize mutableLocations=_mutableLocations - In the implementation block
@property (nonatomic,retain) NSArray * locations;                                 //@synthesize locations=_locations - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double deltaT;                                       //@synthesize deltaT=_deltaT - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                           //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) double verticalAccuracy;                             //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE32 walkingStart;                        //@synthesize walkingStart=_walkingStart - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE32 walkingEnd;                          //@synthesize walkingEnd=_walkingEnd - In the implementation block
@property (nonatomic,readonly) NSDictionary * pointTimestamps;                    //@synthesize pointTimestamps=_pointTimestamps - In the implementation block
-(double)duration;
-(SCD_Struct_GE32)destination;
-(void)setDestination:(SCD_Struct_GE32)arg1 ;
-(SCD_Struct_GE32)origin;
-(GEODirectionsRequest *)request;
-(GEODirectionsResponse *)response;
-(void)setDuration:(double)arg1 ;
-(NSDate *)startTime;
-(double)horizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(double)verticalAccuracy;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setOrigin:(SCD_Struct_GE32)arg1 ;
-(unsigned)routeIndex;
-(GEORouteAttributes *)routeAttributes;
-(GEOComposedRoute *)route;
-(NSArray *)locations;
-(id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 routeIndex:(unsigned)arg5 ;
-(NSMutableArray *)mutableLocations;
-(SCD_Struct_GE32)walkingStart;
-(SCD_Struct_GE32)walkingEnd;
-(double)deltaT;
-(void)addLocation:(SCD_Struct_GE32)arg1 withCourse:(double)arg2 altitude:(double)arg3 speed:(double)arg4 transport:(int)arg5 ;
-(void)generateLocationsWithSpeedOverride:(double)arg1 ;
-(double)estimateDuration;
-(void)simulateWalkingFrom:(SCD_Struct_GE32)arg1 to:(SCD_Struct_GE32)arg2 ;
-(id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 routeIndex:(unsigned)arg5 locations:(id)arg6 ;
-(void)generateLocations;
-(void)setDeltaT:(double)arg1 ;
-(void)setWalkingStart:(SCD_Struct_GE32)arg1 ;
-(void)setWalkingEnd:(SCD_Struct_GE32)arg1 ;
-(void)setMutableLocations:(NSMutableArray *)arg1 ;
-(NSDictionary *)pointTimestamps;
@end

