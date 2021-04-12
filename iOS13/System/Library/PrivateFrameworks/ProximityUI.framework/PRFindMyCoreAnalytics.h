/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@protocol OS_os_log;
@class NSObject, NSDictionary, NSUUID, PRPose, PRTargetEstimate, NSNumber, AKAppleIDSession, NSURLSession, NSString;

@interface PRFindMyCoreAnalytics : NSObject {

	NSObject*<OS_os_log> _logger;
	BOOL _shouldLogTargetFoundEvent;
	NSDictionary* _customData;
	NSUUID* _sessionId;
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

}

@property (nonatomic,retain) NSUUID * sessionId;                           //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) long long eventNumber;                        //@synthesize eventNumber=_eventNumber - In the implementation block
@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) PRPose * previousPose;                        //@synthesize previousPose=_previousPose - In the implementation block
@property (nonatomic,retain) PRTargetEstimate * latestTarget;              //@synthesize latestTarget=_latestTarget - In the implementation block
@property (nonatomic,retain) NSNumber * rangeEstimate;                     //@synthesize rangeEstimate=_rangeEstimate - In the implementation block
@property (nonatomic,retain) NSNumber * traveledDistance;                  //@synthesize traveledDistance=_traveledDistance - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfPoses;                     //@synthesize numberOfPoses=_numberOfPoses - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfRanges;                    //@synthesize numberOfRanges=_numberOfRanges - In the implementation block
@property (assign,nonatomic) BOOL shouldLogTargetFoundEvent;               //@synthesize shouldLogTargetFoundEvent=_shouldLogTargetFoundEvent - In the implementation block
@property (nonatomic,retain) AKAppleIDSession * authSession;               //@synthesize authSession=_authSession - In the implementation block
@property (nonatomic,retain) NSURLSession * urlSession;                    //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSString * authHeaderValue;                   //@synthesize authHeaderValue=_authHeaderValue - In the implementation block
@property (retain) NSDictionary * customData;                              //@synthesize customData=_customData - In the implementation block
+(BOOL)isInternalBuild;
-(id)init;
-(NSNumber *)numberOfRanges;
-(void)endSession;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSUUID *)sessionId;
-(void)setSessionId:(NSUUID *)arg1 ;
-(NSURLSession *)urlSession;
-(void)startSession;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(NSDictionary *)customData;
-(void)setCustomData:(NSDictionary *)arg1 ;
-(AKAppleIDSession *)authSession;
-(void)setAuthSession:(AKAppleIDSession *)arg1 ;
-(void)configureSession;
-(PRPose *)previousPose;
-(void)setPreviousPose:(PRPose *)arg1 ;
-(void)targetComputed:(id)arg1 ;
-(void)targetRevoked;
-(void)updateTravelDistanceWithPose:(id)arg1 ;
-(void)invalidPoseDetected;
-(void)updateWithRangeEstimate:(id)arg1 ;
-(void)rangingFailedWithError:(id)arg1 ;
-(void)deinit;
-(void)setShouldLogTargetFoundEvent:(BOOL)arg1 ;
-(void)setRangeEstimate:(NSNumber *)arg1 ;
-(void)setTraveledDistance:(NSNumber *)arg1 ;
-(void)setNumberOfPoses:(NSNumber *)arg1 ;
-(void)setNumberOfRanges:(NSNumber *)arg1 ;
-(void)setAuthHeaderValue:(NSString *)arg1 ;
-(long long)eventNumber;
-(void)setEventNumber:(long long)arg1 ;
-(NSNumber *)traveledDistance;
-(NSNumber *)rangeEstimate;
-(NSNumber *)numberOfPoses;
-(void)sendLiveOnAnalytics:(id)arg1 withName:(id)arg2 ;
-(id)eventDictionaryWithEvent:(id)arg1 ;
-(void)sendAnalyticsEvent:(id)arg1 withName:(id)arg2 ;
-(PRTargetEstimate *)latestTarget;
-(void)addLatestTarget:(id)arg1 ;
-(void)setLatestTarget:(PRTargetEstimate *)arg1 ;
-(BOOL)shouldLogTargetFoundEvent;
-(NSString *)authHeaderValue;
-(void)targetMovingStateChanged:(BOOL)arg1 ;
@end

