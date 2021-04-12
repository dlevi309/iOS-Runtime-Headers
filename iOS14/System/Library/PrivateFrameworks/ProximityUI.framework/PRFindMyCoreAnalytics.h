/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@protocol OS_os_log;
@class NSObject, NSDictionary, NSUUID, PRPose, PRTargetEstimate, NSNumber, AKAppleIDSession, NSURLSession, NSString, CASessionData, CARunData;

@interface PRFindMyCoreAnalytics : NSObject {

	NSObject*<OS_os_log> _logger;
	BOOL _shouldLogTargetFoundEvent;
	BOOL _shouldLogMotionEvent;
	BOOL _shouldLogEnteredArmsReachEvent;
	NSDictionary* _customData;
	NSUUID* _sessionId;
	NSUUID* _runId;
	long long _eventNumber;
	double _startTime;
	PRPose* _previousPose;
	PRTargetEstimate* _latestTarget;
	NSNumber* _rangeEstimate;
	NSNumber* _traveledDistance;
	NSNumber* _numberOfPoses;
	NSNumber* _numberOfRanges;
	AKAppleIDSession* _authSession;
	NSURLSession* _urlSession;
	NSString* _authHeaderValue;
	CASessionData* _sessionData;
	CARunData* _runData;

}

@property (nonatomic,retain) NSUUID * sessionId;                               //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) NSUUID * runId;                                   //@synthesize runId=_runId - In the implementation block
@property (assign,nonatomic) long long eventNumber;                            //@synthesize eventNumber=_eventNumber - In the implementation block
@property (assign,nonatomic) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) PRPose * previousPose;                            //@synthesize previousPose=_previousPose - In the implementation block
@property (nonatomic,retain) PRTargetEstimate * latestTarget;                  //@synthesize latestTarget=_latestTarget - In the implementation block
@property (nonatomic,retain) NSNumber * rangeEstimate;                         //@synthesize rangeEstimate=_rangeEstimate - In the implementation block
@property (nonatomic,retain) NSNumber * traveledDistance;                      //@synthesize traveledDistance=_traveledDistance - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfPoses;                         //@synthesize numberOfPoses=_numberOfPoses - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfRanges;                        //@synthesize numberOfRanges=_numberOfRanges - In the implementation block
@property (assign,nonatomic) BOOL shouldLogTargetFoundEvent;                   //@synthesize shouldLogTargetFoundEvent=_shouldLogTargetFoundEvent - In the implementation block
@property (assign,nonatomic) BOOL shouldLogMotionEvent;                        //@synthesize shouldLogMotionEvent=_shouldLogMotionEvent - In the implementation block
@property (assign,nonatomic) BOOL shouldLogEnteredArmsReachEvent;              //@synthesize shouldLogEnteredArmsReachEvent=_shouldLogEnteredArmsReachEvent - In the implementation block
@property (nonatomic,retain) AKAppleIDSession * authSession;                   //@synthesize authSession=_authSession - In the implementation block
@property (nonatomic,retain) NSURLSession * urlSession;                        //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSString * authHeaderValue;                       //@synthesize authHeaderValue=_authHeaderValue - In the implementation block
@property (nonatomic,retain) CASessionData * sessionData;                      //@synthesize sessionData=_sessionData - In the implementation block
@property (nonatomic,retain) CARunData * runData;                              //@synthesize runData=_runData - In the implementation block
@property (retain) NSDictionary * customData;                                  //@synthesize customData=_customData - In the implementation block
+(BOOL)isInternalBuild;
-(NSUUID *)sessionId;
-(void)setSessionId:(NSUUID *)arg1 ;
-(id)init;
-(void)start;
-(void)setStartTime:(double)arg1 ;
-(NSDictionary *)customData;
-(void)setCustomData:(NSDictionary *)arg1 ;
-(NSUUID *)runId;
-(void)stop;
-(NSURLSession *)urlSession;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(void)resetState;
-(void)deinit;
-(void)setSessionData:(CASessionData *)arg1 ;
-(CASessionData *)sessionData;
-(BOOL)isRunning;
-(NSNumber *)numberOfRanges;
-(double)startTime;
-(CARunData *)runData;
-(void)configureSession;
-(AKAppleIDSession *)authSession;
-(void)setAuthSession:(AKAppleIDSession *)arg1 ;
-(PRPose *)previousPose;
-(void)setPreviousPose:(PRPose *)arg1 ;
-(void)targetComputed:(id)arg1 ;
-(void)targetRevoked;
-(void)revokeRangeEstimate;
-(void)targetMovingStateChanged:(BOOL)arg1 ;
-(void)updateTravelDistanceWithPose:(id)arg1 ;
-(void)invalidPoseDetected;
-(void)updateWithRangeEstimate:(id)arg1 ;
-(void)configureComplete;
-(void)rangingFailedWithError:(id)arg1 ;
-(void)setAuthHeaderValue:(NSString *)arg1 ;
-(void)setShouldLogTargetFoundEvent:(BOOL)arg1 ;
-(void)setShouldLogMotionEvent:(BOOL)arg1 ;
-(void)setShouldLogEnteredArmsReachEvent:(BOOL)arg1 ;
-(void)setRangeEstimate:(NSNumber *)arg1 ;
-(void)setTraveledDistance:(NSNumber *)arg1 ;
-(void)setNumberOfPoses:(NSNumber *)arg1 ;
-(void)setNumberOfRanges:(NSNumber *)arg1 ;
-(void)setLatestTarget:(PRTargetEstimate *)arg1 ;
-(long long)eventNumber;
-(void)setEventNumber:(long long)arg1 ;
-(NSNumber *)traveledDistance;
-(NSNumber *)rangeEstimate;
-(NSNumber *)numberOfPoses;
-(void)sendLiveOnAnalytics:(id)arg1 ;
-(id)eventDictionaryWithEvent:(id)arg1 ;
-(void)sendAnalyticsEvent:(id)arg1 ;
-(void)setRunId:(NSUUID *)arg1 ;
-(void)setRunData:(CARunData *)arg1 ;
-(PRTargetEstimate *)latestTarget;
-(void)addLatestTarget:(id)arg1 ;
-(BOOL)shouldLogTargetFoundEvent;
-(BOOL)shouldLogEnteredArmsReachEvent;
-(BOOL)shouldLogMotionEvent;
-(NSString *)authHeaderValue;
@end

