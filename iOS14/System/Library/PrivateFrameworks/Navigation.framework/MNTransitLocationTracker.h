/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNSteppingLocationTracker.h>

@class GEOTransitRouteMatcher, GEORoadMatcher, NSDate, MNLocation;

@interface MNTransitLocationTracker : MNSteppingLocationTracker {

	GEOTransitRouteMatcher* _transitRouteMatcher;
	GEORoadMatcher* _roadMatcher;
	NSDate* _lastLocationTimestamp;
	NSDate* _lastAccurateLocationDate;
	MNLocation* _lastMatchedLocation;
	NSDate* _startDate;
	BOOL _hasArrived;
	BOOL _debugSnapToTransitLines;

}

@property (assign,nonatomic) BOOL debugSnapToTransitLines;              //@synthesize debugSnapToTransitLines=_debugSnapToTransitLines - In the implementation block
-(void)stopTracking;
-(int)transportType;
-(void)startTracking;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(BOOL)_isInaccurateLocation:(id)arg1 ;
-(id)_locationForInaccurateLocation:(id)arg1 ;
-(double)_timeToDisplayStaleGPSLocation;
-(id)_correctedLocationForLocation:(id)arg1 ;
-(id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2 ;
-(BOOL)debugSnapToTransitLines;
-(void)setDebugSnapToTransitLines:(BOOL)arg1 ;
@end

