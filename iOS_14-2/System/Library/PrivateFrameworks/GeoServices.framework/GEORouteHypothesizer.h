/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3 ;
+(BOOL)transitTTLSupportedInCurrentCountry;
-(GEORouteHypothesis *)currentHypothesis;
-(void)onlyPerformLocalUpdates;
-(NSError *)currentError;
-(double)willEndHypothesizingInterval;
-(void)setDoNotWakeForDelay;
-(void)requestRefresh;
-(id)description;
-(void)stopHypothesizing;
-(BOOL)unableToFindRouteForOriginalTransportType;
-(BOOL)wakeForDelay;
-(void)cancelDelayDispatchTimer;
-(void)setState:(unsigned long long)arg1 ;
-(void)_delayStartingWithXpc;
-(unsigned long long)state;
-(void)_delayStartingWithoutXpc;
-(double)willBeginHypothesizingInterval;
-(id)initWithPlannedDestination:(id)arg1 ;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(BOOL)_wontHypothesizeAgain;
-(void)didPostUINotification:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)_performDelayedStart;
-(GEOPlannedDestination *)plannedDestination;
@end

