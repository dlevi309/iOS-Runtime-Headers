/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MNTraceRecordingData, GEORouteAttributes, GEODirectionsRequest, GEODirectionsResponse, NSArray, NSDictionary;

@interface MNStartNavigationDetails : NSObject <NSCopying, NSSecureCoding> {

	int _navigationType;
	BOOL _fullGuidance;
	NSString* _tracePlaybackPath;
	MNTraceRecordingData* _traceRecordingData;
	long long _simulationType;
	NSString* _traceRecordingNameOverride;
	GEORouteAttributes* _routeAttributes;
	GEODirectionsRequest* _directionsRequest;
	GEODirectionsResponse* _directionsResponse;
	NSString* _requestingAppIdentifier;
	NSArray* _routes;
	unsigned long long _selectedRouteIndex;
	NSDictionary* _traffic;
	BOOL _isReconnecting;

}

@property (assign,nonatomic) int navigationType;                                     //@synthesize navigationType=_navigationType - In the implementation block
@property (assign,nonatomic) BOOL fullGuidance;                                      //@synthesize fullGuidance=_fullGuidance - In the implementation block
@property (nonatomic,copy) GEORouteAttributes * routeAttributes;                     //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,copy) GEODirectionsRequest * directionsRequest;                 //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,copy) GEODirectionsResponse * directionsResponse;               //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,copy) NSArray * routes;                                         //@synthesize routes=_routes - In the implementation block
@property (nonatomic,copy) NSDictionary * traffic;                                   //@synthesize traffic=_traffic - In the implementation block
@property (assign,nonatomic) unsigned long long selectedRouteIndex;                  //@synthesize selectedRouteIndex=_selectedRouteIndex - In the implementation block
@property (nonatomic,copy) NSString * requestingAppIdentifier;                       //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isReconnecting;                                    //@synthesize isReconnecting=_isReconnecting - In the implementation block
@property (nonatomic,copy) NSString * tracePlaybackPath;                             //@synthesize tracePlaybackPath=_tracePlaybackPath - In the implementation block
@property (nonatomic,retain) MNTraceRecordingData * traceRecordingData;              //@synthesize traceRecordingData=_traceRecordingData - In the implementation block
@property (assign,nonatomic) long long simulationType;                               //@synthesize simulationType=_simulationType - In the implementation block
@property (nonatomic,copy) NSString * traceRecordingNameOverride;                    //@synthesize traceRecordingNameOverride=_traceRecordingNameOverride - In the implementation block
@property (nonatomic,readonly) NSString * fullDescription; 
+(BOOL)supportsSecureCoding;
-(int)navigationType;
-(NSArray *)routes;
-(GEORouteAttributes *)routeAttributes;
-(void)setDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(id)init;
-(void)setNavigationType:(int)arg1 ;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setDirectionsRequest:(GEODirectionsRequest *)arg1 ;
-(NSDictionary *)traffic;
-(void)setSelectedRouteIndex:(unsigned long long)arg1 ;
-(GEODirectionsResponse *)directionsResponse;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRoutes:(NSArray *)arg1 ;
-(GEODirectionsRequest *)directionsRequest;
-(NSString *)fullDescription;
-(unsigned long long)selectedRouteIndex;
-(id)description;
-(NSString *)requestingAppIdentifier;
-(void)setTraffic:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)fullGuidance;
-(BOOL)isReconnecting;
-(void)setFullGuidance:(BOOL)arg1 ;
-(void)setIsReconnecting:(BOOL)arg1 ;
-(NSString *)tracePlaybackPath;
-(void)setTracePlaybackPath:(NSString *)arg1 ;
-(MNTraceRecordingData *)traceRecordingData;
-(void)setTraceRecordingData:(MNTraceRecordingData *)arg1 ;
-(long long)simulationType;
-(void)setSimulationType:(long long)arg1 ;
-(NSString *)traceRecordingNameOverride;
-(void)setTraceRecordingNameOverride:(NSString *)arg1 ;
@end

