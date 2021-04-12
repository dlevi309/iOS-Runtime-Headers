/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_source;
@class GEOPlannedDestination, GEORouteHypothesis, NSError, NSUUID, geo_isolater, NSObject;

@interface GEORouteHypothesizer : NSObject {

	GEOPlannedDestination* _plannedDestination;
	unsigned long long _state;
	BOOL _unableToFindRouteForOriginalTransportType;
	GEORouteHypothesis* _currentHypothesis;
	NSError* _currentError;
	/*^block*/id _updateHandler;
	NSUUID* _uuid;
	geo_isolater* _isolater;
	BOOL _wakeForDelay;
	NSObject*<OS_dispatch_source> _delayDispatchTimer;

}

@property (assign,nonatomic) unsigned long long state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) GEOPlannedDestination * plannedDestination;                  //@synthesize plannedDestination=_plannedDestination - In the implementation block
@property (nonatomic,readonly) BOOL unableToFindRouteForOriginalTransportType;              //@synthesize unableToFindRouteForOriginalTransportType=_unableToFindRouteForOriginalTransportType - In the implementation block
@property (nonatomic,readonly) GEORouteHypothesis * currentHypothesis;                      //@synthesize currentHypothesis=_currentHypothesis - In the implementation block
@property (nonatomic,readonly) NSError * currentError;                                      //@synthesize currentError=_currentError - In the implementation block
@property (nonatomic,readonly) double willBeginHypothesizingInterval; 
@property (nonatomic,readonly) double willEndHypothesizingInterval; 
+(id)hypothesizerForPlannedDestination:(id)arg1 ;
+(BOOL)transitTTLSupportedInCurrentCountry;
+(void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(double)willBeginHypothesizingInterval;
-(GEOPlannedDestination *)plannedDestination;
-(void)_performDelayedStart;
-(GEORouteHypothesis *)currentHypothesis;
-(id)initWithPlannedDestination:(id)arg1 ;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)cancelDelayDispatchTimer;
-(BOOL)_wontHypothesizeAgain;
-(void)_delayStartingWithXpc;
-(void)_delayStartingWithoutXpc;
-(void)stopHypothesizing;
-(double)willEndHypothesizingInterval;
-(BOOL)wakeForDelay;
-(void)setDoNotWakeForDelay;
-(void)requestRefresh;
-(void)onlyPerformLocalUpdates;
-(void)didPostUINotification:(unsigned long long)arg1 ;
-(NSError *)currentError;
-(BOOL)unableToFindRouteForOriginalTransportType;
@end

