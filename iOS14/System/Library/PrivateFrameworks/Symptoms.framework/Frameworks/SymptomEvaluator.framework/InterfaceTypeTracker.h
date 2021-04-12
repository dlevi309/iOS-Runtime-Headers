/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol flowDispositionObserver;
@class NSArray, NSMutableDictionary, TrackerPolicy, NWUsageTargetSelector, NetworkAnalyticsStateRelay, NSDate, LightweightTimer;

@interface InterfaceTypeTracker : NSObject {

	NSArray* _alwaysNote;
	NSArray* _neverNote;
	NSArray* _daemonCheck;
	NSMutableDictionary* _trackerCache;
	long long _interfaceType;
	id<flowDispositionObserver> _observer;
	TrackerPolicy* _defaultPolicy;
	NWUsageTargetSelector* _targetFlowsNewWiFi;
	NetworkAnalyticsStateRelay* _stateRelay;
	NSDate* _madePrimaryDate;
	LightweightTimer* _lwTimer;

}

@property (retain) NSArray * alwaysNote;                                    //@synthesize alwaysNote=_alwaysNote - In the implementation block
@property (retain) NSArray * neverNote;                                     //@synthesize neverNote=_neverNote - In the implementation block
@property (retain) NSArray * daemonCheck;                                   //@synthesize daemonCheck=_daemonCheck - In the implementation block
@property (retain) NSMutableDictionary * trackerCache;                      //@synthesize trackerCache=_trackerCache - In the implementation block
@property (assign) long long interfaceType;                                 //@synthesize interfaceType=_interfaceType - In the implementation block
@property (retain) id<flowDispositionObserver> observer;                    //@synthesize observer=_observer - In the implementation block
@property (retain) TrackerPolicy * defaultPolicy;                           //@synthesize defaultPolicy=_defaultPolicy - In the implementation block
@property (retain) NWUsageTargetSelector * targetFlowsNewWiFi;              //@synthesize targetFlowsNewWiFi=_targetFlowsNewWiFi - In the implementation block
@property (retain) NetworkAnalyticsStateRelay * stateRelay;                 //@synthesize stateRelay=_stateRelay - In the implementation block
@property (retain) NSDate * madePrimaryDate;                                //@synthesize madePrimaryDate=_madePrimaryDate - In the implementation block
@property (retain) LightweightTimer * lwTimer;                              //@synthesize lwTimer=_lwTimer - In the implementation block
-(void)_dumpState;
-(NetworkAnalyticsStateRelay *)stateRelay;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTargetFlowsNewWiFi:(NWUsageTargetSelector *)arg1 ;
-(NSDate *)madePrimaryDate;
-(long long)interfaceType;
-(id)initWithInterfaceType:(long long)arg1 ;
-(void)setObserver:(id<flowDispositionObserver>)arg1 ;
-(id<flowDispositionObserver>)observer;
-(void)noteFlowClassificationExpiry:(id)arg1 ;
-(unsigned long long)scheduleExpiryCheckFor:(unsigned long long)arg1 delay:(double)arg2 ;
-(NWUsageTargetSelector *)targetFlowsNewWiFi;
-(void)removeLinkages:(id)arg1 ;
-(id)infoDir;
-(void)noteFlow:(id)arg1 withDelegatee:(id)arg2 snapshot:(id)arg3 ;
-(void)setNeverNote:(NSArray *)arg1 ;
-(void)setDefaultPolicy:(TrackerPolicy *)arg1 ;
-(void)setStateRelay:(NetworkAnalyticsStateRelay *)arg1 ;
-(void)setTrackerCache:(NSMutableDictionary *)arg1 ;
-(id)description;
-(NSArray *)alwaysNote;
-(void)setupLightweightTimer;
-(void)getNetworkActivity:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)trackerCache;
-(NSArray *)daemonCheck;
-(void)configurePolicies:(id)arg1 ;
-(LightweightTimer *)lwTimer;
-(void)setAlwaysNote:(NSArray *)arg1 ;
-(void)setLwTimer:(LightweightTimer *)arg1 ;
-(void)noteFlow:(id)arg1 withOwner:(id)arg2 snapshot:(id)arg3 ;
-(NSArray *)neverNote;
-(void)setDaemonCheck:(NSArray *)arg1 ;
-(void)setInterfaceType:(long long)arg1 ;
-(TrackerPolicy *)defaultPolicy;
-(void)setMadePrimaryDate:(NSDate *)arg1 ;
-(void)_trackerCachePrune;
-(void)dealloc;
@end

