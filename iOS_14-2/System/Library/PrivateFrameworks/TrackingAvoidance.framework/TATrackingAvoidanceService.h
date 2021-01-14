/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/TAVisitStateObserver.h>
#import <libobjc.A.dylib/TATrackingAvoidanceServiceProtocol.h>

@class TAStore, TASettings, NSHashTable, NSDate, TATrackingAvoidanceServiceSettings, TAOutgoingRequests, NSString;

@interface TATrackingAvoidanceService : NSObject <TAVisitStateObserver, TATrackingAvoidanceServiceProtocol> {

	TAStore* _store;
	TASettings* _settings;
	NSHashTable* _observers;
	NSDate* _latestClassificationDate;
	TATrackingAvoidanceServiceSettings* _serviceSettings;
	TAOutgoingRequests* _stagedIntervisitMetrics;

}

@property (nonatomic,retain) NSHashTable * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSDate * latestClassificationDate;                                 //@synthesize latestClassificationDate=_latestClassificationDate - In the implementation block
@property (nonatomic,retain) TATrackingAvoidanceServiceSettings * serviceSettings;              //@synthesize serviceSettings=_serviceSettings - In the implementation block
@property (nonatomic,retain) TAOutgoingRequests * stagedIntervisitMetrics;                      //@synthesize stagedIntervisitMetrics=_stagedIntervisitMetrics - In the implementation block
@property (nonatomic,readonly) TAStore * store;                                                 //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) TASettings * settings;                                           //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)notificationImmediacyForDetectionType:(unsigned long long)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)shouldPerformDetection;
-(NSHashTable *)observers;
-(id)init;
-(void)ingestTAEvent:(id)arg1 ;
-(id)initWithTASettings:(id)arg1 ;
-(TAStore *)store;
-(TATrackingAvoidanceServiceSettings *)serviceSettings;
-(void)setServiceSettings:(TATrackingAvoidanceServiceSettings *)arg1 ;
-(void)bootstrapVisitState:(id)arg1 ;
-(void)notifyObserversOfRequests:(id)arg1 ;
-(void)setLatestClassificationDate:(NSDate *)arg1 ;
-(void)_performUpdateIfNecessary:(id)arg1 ;
-(void)notifyObserversOfSuspiciousDevices:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(TASettings *)settings;
-(void)removeObserver:(id)arg1 ;
-(NSDate *)latestClassificationDate;
-(void)_performDetection;
-(void)notifyObserversOfStagedSuspiciousDevices:(id)arg1 ;
-(void)setStagedIntervisitMetrics:(TAOutgoingRequests *)arg1 ;
-(void)bootstrapDeviceRecord:(id)arg1 ;
-(TAOutgoingRequests *)stagedIntervisitMetrics;
-(void)notifyObserversOfSuspiciousDeviceUpdate:(id)arg1 ;
-(void)notifyObserversOfVisitStateChange;
-(id)filterAndStageDetectionResults:(id)arg1 ;
-(void)visitState:(id)arg1 didChangeStateFromType:(unsigned long long)arg2 toType:(unsigned long long)arg3 ;
-(void)visitState:(id)arg1 didIssueMetricsSubmissionHint:(unsigned long long)arg2 ;
@end

