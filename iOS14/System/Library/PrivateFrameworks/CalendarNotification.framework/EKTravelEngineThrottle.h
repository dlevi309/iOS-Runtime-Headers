/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)emissionThresholdTimeInterval;
+(double)_requestHypothesisRefreshInterval;
-(void)setRunning:(BOOL)arg1 ;
-(void)tearDown;
-(NSObject*<OS_dispatch_queue>)throttleQueue;
-(BOOL)running;
-(void)setEventExternalURL:(NSString *)arg1 ;
-(id)init;
-(void)_unregisterForNotificationObservation;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)_fireEmissionBlock;
-(void)setNextEmissionDate:(NSDate *)arg1 ;
-(void)_uninstallEmissionTimer;
-(void)_emissionTimerFired;
-(void)setThrottleIdentifier:(NSString *)arg1 ;
-(void)_significantTimeChangeNotificationReceived;
-(void)_updateEmissionDate:(id)arg1 ;
-(id)cancelHypothesisRequestRefreshBlock;
-(NSDate *)nextEmissionDate;
-(id)description;
-(void)setEmissionBlock:(id)arg1 ;
-(NSString *)eventExternalURL;
-(void)_createEmissionTimerWithDate:(id)arg1 ;
-(void)setThrottleQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)alarmName;
-(NSString *)throttleIdentifier;
-(void)updatePredictedDepartureDate:(id)arg1 ;
-(id)requestHypothesisRefreshBlock;
-(void)setRequestHypothesisRefreshBlock:(id)arg1 ;
-(id)emissionBlock;
-(void)setCancelHypothesisRequestRefreshBlock:(id)arg1 ;
-(void)_registerForNotificationObservation;
-(void)dealloc;
@end

