/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol OS_dispatch_queue, CALNRouteHypothesizerProvider, CALNRouteHypothesizer;
@class NSObject, EKTravelEngineOriginalEvent, EKTravelEngineThrottle, CalGeocoder, EKTravelEngineHypothesis, CLLocation, NSData, NSString;

@interface EKTravelEngineAgendaEntry : NSObject {

	BOOL _dismissed;
	BOOL _geocodedEventEncountered;
	BOOL _hypothesizerSentAtLeastOneHypothesis;
	/*^block*/id _updateBlock;
	/*^block*/id _entrySignificantlyChangedBlock;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	EKTravelEngineOriginalEvent* _originalEventInternal;
	EKTravelEngineThrottle* _throttle;
	CalGeocoder* _geocoder;
	id<CALNRouteHypothesizerProvider> _hypothesizerProvider;
	id<CALNRouteHypothesizer> _hypothesizer;
	EKTravelEngineHypothesis* _latestHypothesis;
	CLLocation* _geoLocation;
	NSData* _mapKitHandle;
	long long _travelTimeThresholdExceededState;
	double _maximumTravelDurationEncountered;
	NSString* _agendaEntryIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                            //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) EKTravelEngineOriginalEvent * originalEventInternal;                   //@synthesize originalEventInternal=_originalEventInternal - In the implementation block
@property (nonatomic,retain) EKTravelEngineThrottle * throttle;                                     //@synthesize throttle=_throttle - In the implementation block
@property (nonatomic,retain) CalGeocoder * geocoder;                                                //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,readonly) id<CALNRouteHypothesizerProvider> hypothesizerProvider;              //@synthesize hypothesizerProvider=_hypothesizerProvider - In the implementation block
@property (nonatomic,retain) id<CALNRouteHypothesizer> hypothesizer;                                //@synthesize hypothesizer=_hypothesizer - In the implementation block
@property (nonatomic,retain) EKTravelEngineHypothesis * latestHypothesis;                           //@synthesize latestHypothesis=_latestHypothesis - In the implementation block
@property (nonatomic,retain) CLLocation * geoLocation;                                              //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,retain) NSData * mapKitHandle;                                                 //@synthesize mapKitHandle=_mapKitHandle - In the implementation block
@property (assign,nonatomic) BOOL geocodedEventEncountered;                                         //@synthesize geocodedEventEncountered=_geocodedEventEncountered - In the implementation block
@property (assign,nonatomic) BOOL hypothesizerSentAtLeastOneHypothesis;                             //@synthesize hypothesizerSentAtLeastOneHypothesis=_hypothesizerSentAtLeastOneHypothesis - In the implementation block
@property (assign,nonatomic) long long travelTimeThresholdExceededState;                            //@synthesize travelTimeThresholdExceededState=_travelTimeThresholdExceededState - In the implementation block
@property (assign,nonatomic) double maximumTravelDurationEncountered;                               //@synthesize maximumTravelDurationEncountered=_maximumTravelDurationEncountered - In the implementation block
@property (nonatomic,retain) NSString * agendaEntryIdentifier;                                      //@synthesize agendaEntryIdentifier=_agendaEntryIdentifier - In the implementation block
@property (nonatomic,readonly) EKTravelEngineOriginalEvent * originalEvent; 
@property (nonatomic,copy) id updateBlock;                                                          //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id entrySignificantlyChangedBlock;                                       //@synthesize entrySignificantlyChangedBlock=_entrySignificantlyChangedBlock - In the implementation block
@property (assign,nonatomic) BOOL dismissed;                                                        //@synthesize dismissed=_dismissed - In the implementation block
+(double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(EKTravelEngineThrottle *)throttle;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_createHypothesizerForDestination:(id)arg1 ;
-(CLLocation *)geoLocation;
-(NSData *)mapKitHandle;
-(void)_emissionHypothesisRefreshTimerFired;
-(void)_createHypothesisRequestRefreshTimerWithDate:(id)arg1 ;
-(EKTravelEngineHypothesis *)latestHypothesis;
-(void)setThrottle:(EKTravelEngineThrottle *)arg1 ;
-(void)receivedAlarmNamed:(id)arg1 ;
-(EKTravelEngineOriginalEvent *)originalEvent;
-(long long)travelTimeThresholdExceededState;
-(void)setGeocodedEventEncountered:(BOOL)arg1 ;
-(void)_createEmissionHypothesisRefreshTimerWithDate:(id)arg1 ;
-(void)_performAnalyticsPostProcessing;
-(void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)arg1 ;
-(BOOL)hypothesizerSentAtLeastOneHypothesis;
-(void)_updateWithHypothesis:(id)arg1 ;
-(void)_trackTTLCandidateEvent:(id)arg1 ;
-(void)setMaximumTravelDurationEncountered:(double)arg1 ;
-(void)requestHypothesisRefreshAtDate:(id)arg1 ;
-(void)setGeocoder:(CalGeocoder *)arg1 ;
-(void)setEntrySignificantlyChangedBlock:(id)arg1 ;
-(void)setDismissed:(BOOL)arg1 ;
-(void)setTravelTimeThresholdExceededState:(long long)arg1 ;
-(double)maximumTravelDurationEncountered;
-(EKTravelEngineOriginalEvent *)originalEventInternal;
-(CalGeocoder *)geocoder;
-(void)_clearEverything;
-(id)initWithRouteHypothesizerProvider:(id)arg1 ;
-(id<CALNRouteHypothesizerProvider>)hypothesizerProvider;
-(id)_createSyntheticHypothesis;
-(BOOL)geocodedEventEncountered;
-(void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(BOOL)arg1 ;
-(id)requestHypothesisRefreshAlarmName;
-(void)reset;
-(void)setAgendaEntryIdentifier:(NSString *)arg1 ;
-(void)createAlarmWithName:(id)arg1 atDate:(id)arg2 ;
-(void)_requestHypothesisRefreshTimerFired;
-(void)setHypothesizerSentAtLeastOneHypothesis:(BOOL)arg1 ;
-(void)_enhanceLocation;
-(id<CALNRouteHypothesizer>)hypothesizer;
-(void)cancelHypothesisRefreshRequest;
-(void)setUpdateBlock:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveByNotification;
-(void)setHypothesizer:(id<CALNRouteHypothesizer>)arg1 ;
-(id)emissionHypothesisRefreshAlarmName;
-(id)entrySignificantlyChangedBlock;
-(void)_setUpRouteMonitoring;
-(void)updateWithOriginalEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)updateBlock;
-(void)sendFeedbackForPostingLeaveNowNotification;
-(void)setOriginalEventInternal:(EKTravelEngineOriginalEvent *)arg1 ;
-(void)_hypothesisRefreshTimerFired;
-(void)setLatestHypothesis:(EKTravelEngineHypothesis *)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(id)_generateDestination;
-(BOOL)dismissed;
-(void)removeAlarmWithName:(id)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_accountForGeocodedEventEncounter;
-(void)_uninstallRequestHypothesisRefreshTimer;
-(void)dealloc;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(NSString *)agendaEntryIdentifier;
-(void)_uninstallEmissionHypothesisRefreshTimer;
-(void)cancelEmissionHypothesisRefresh;
@end

