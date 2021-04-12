/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MNTraceRecordingData, GEORouteAttributes, GEODirectionsRequest, GEODirectionsResponse, NSArray, NSDictionary;

@interface MNStartNavigationDetails : NSObject <NSSecureCoding> {

	int _navigationType;
	BOOL _fullGuidance;
	NSString* _tracePlaybackPath;
	MNTraceRecordingData* _traceRecordingData;
	BOOL _shouldSimulateLocations;
	NSString* _traceRecordingNameOverride;
	BOOL _copyTraceToCrashReporter;
	GEORouteAttributes* _routeAttributes;
	GEODirectionsRequest* _directionsRequest;
	GEODirectionsResponse* _directionsResponse;
	NSString* _requestingAppIdentifier;
	NSArray* _routes;
	unsigned long long _selectedRouteIndex;
	NSDictionary* _traffic;
	BOOL _isReconnecting;

}

@property (assign,nonatomic) BOOL isReconnecting; 
@property (assign,nonatomic) int navigationType;                                     //@synthesize navigationType=_navigationType - In the implementation block
@property (assign,nonatomic) BOOL fullGuidance;                                      //@synthesize fullGuidance=_fullGuidance - In the implementation block
@property (nonatomic,copy) GEORouteAttributes * routeAttributes;                     //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,copy) GEODirectionsRequest * directionsRequest;                 //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,copy) GEODirectionsResponse * directionsResponse;               //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,copy) NSArray * routes;                                         //@synthesize routes=_routes - In the implementation block
@property (nonatomic,copy) NSDictionary * traffic;                                   //@synthesize traffic=_traffic - In the implementation block
@property (assign,nonatomic) unsigned long long selectedRouteIndex;                  //@synthesize selectedRouteIndex=_selectedRouteIndex - In the implementation block
@property (nonatomic,copy) NSString * requestingAppIdentifier;                       //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,copy) NSString * tracePlaybackPath;                             //@synthesize tracePlaybackPath=_tracePlaybackPath - In the implementation block
@property (nonatomic,retain) MNTraceRecordingData * traceRecordingData;              //@synthesize traceRecordingData=_traceRecordingData - In the implementation block
@property (assign,nonatomic) BOOL shouldSimulateLocations;                           //@synthesize shouldSimulateLocations=_shouldSimulateLocations - In the implementation block
@property (nonatomic,copy) NSString * traceRecordingNameOverride;                    //@synthesize traceRecordingNameOverride=_traceRecordingNameOverride - In the implementation block
@property (assign,nonatomic) BOOL copyTraceToCrashReporter;                          //@synthesize copyTraceToCrashReporter=_copyTraceToCrashReporter - In the implementation block
@property (nonatomic,readonly) NSString * fullDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)fullDescription;
-(GEORouteAttributes *)routeAttributes;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(NSArray *)routes;
-(void)setRoutes:(NSArray *)arg1 ;
-(unsigned long long)selectedRouteIndex;
-(void)setSelectedRouteIndex:(unsigned long long)arg1 ;
-(GEODirectionsResponse *)directionsResponse;
-(void)setDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(GEODirectionsRequest *)directionsRequest;
-(NSString *)requestingAppIdentifier;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(int)navigationType;
-(NSDictionary *)traffic;
-(void)setNavigationType:(int)arg1 ;
-(void)setTraffic:(NSDictionary *)arg1 ;
-(void)setDirectionsRequest:(GEODirectionsRequest *)arg1 ;
-(id)_findRouteWithUUID:(id)arg1 ;
-(BOOL)fullGuidance;
-(void)setFullGuidance:(BOOL)arg1 ;
-(NSString *)tracePlaybackPath;
-(void)setTracePlaybackPath:(NSString *)arg1 ;
-(MNTraceRecordingData *)traceRecordingData;
-(void)setTraceRecordingData:(MNTraceRecordingData *)arg1 ;
-(BOOL)shouldSimulateLocations;
-(void)setShouldSimulateLocations:(BOOL)arg1 ;
-(NSString *)traceRecordingNameOverride;
-(void)setTraceRecordingNameOverride:(NSString *)arg1 ;
-(BOOL)copyTraceToCrashReporter;
-(void)setCopyTraceToCrashReporter:(BOOL)arg1 ;
-(BOOL)isReconnecting;
-(void)setIsReconnecting:(BOOL)arg1 ;
@end

