/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSDate;

@interface EKTravelEngineThrottle : NSObject {

	BOOL _running;
	NSString* _eventExternalURL;
	/*^block*/id _requestHypothesisRefreshBlock;
	/*^block*/id _cancelHypothesisRequestRefreshBlock;
	/*^block*/id _emissionBlock;
	NSString* _throttleIdentifier;
	NSObject*<OS_dispatch_queue> _throttleQueue;
	NSDate* _nextEmissionDate;

}

@property (assign,nonatomic) BOOL running;                                            //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSString * throttleIdentifier;                           //@synthesize throttleIdentifier=_throttleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> throttleQueue;              //@synthesize throttleQueue=_throttleQueue - In the implementation block
@property (nonatomic,retain) NSDate * nextEmissionDate;                               //@synthesize nextEmissionDate=_nextEmissionDate - In the implementation block
@property (retain) NSString * eventExternalURL;                                       //@synthesize eventExternalURL=_eventExternalURL - In the implementation block
@property (nonatomic,copy) id requestHypothesisRefreshBlock;                          //@synthesize requestHypothesisRefreshBlock=_requestHypothesisRefreshBlock - In the implementation block
@property (nonatomic,copy) id cancelHypothesisRequestRefreshBlock;                    //@synthesize cancelHypothesisRequestRefreshBlock=_cancelHypothesisRequestRefreshBlock - In the implementation block
@property (nonatomic,copy) id emissionBlock;                                          //@synthesize emissionBlock=_emissionBlock - In the implementation block
+(double)_requestHypothesisRefreshInterval;
+(double)emissionThresholdTimeInterval;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(void)tearDown;
-(NSObject*<OS_dispatch_queue>)throttleQueue;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(void)_registerForNotificationObservation;
-(void)_unregisterForNotificationObservation;
-(void)_significantTimeChangeNotificationReceived;
-(id)btaJobName;
-(void)setEventExternalURL:(NSString *)arg1 ;
-(void)setThrottleIdentifier:(NSString *)arg1 ;
-(NSString *)throttleIdentifier;
-(void)setThrottleQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_uninstallEmissionTimer;
-(NSDate *)nextEmissionDate;
-(void)_fireEmissionBlock;
-(void)_updateEmissionDate:(id)arg1 ;
-(NSString *)eventExternalURL;
-(void)_emissionTimerFired:(id)arg1 ;
-(void)setNextEmissionDate:(NSDate *)arg1 ;
-(void)_createEmissionTimerWithDate:(id)arg1 ;
-(id)emissionBlock;
-(id)requestHypothesisRefreshBlock;
-(id)cancelHypothesisRequestRefreshBlock;
-(void)updatePredictedDepartureDate:(id)arg1 ;
-(void)setRequestHypothesisRefreshBlock:(id)arg1 ;
-(void)setCancelHypothesisRequestRefreshBlock:(id)arg1 ;
-(void)setEmissionBlock:(id)arg1 ;
@end

