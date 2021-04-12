/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
*/


@protocol OS_dispatch_queue;
@class SignpostSupportObjectExtractor, NSObject, NSDate, STYAbcHelper;

@interface STYSignpostsMonitor : NSObject {

	BOOL _autoUploadThroughAbc;
	BOOL _seedUserMode;
	unsigned _timeToReconnectWithDiagnosticd;
	unsigned _eventCount;
	SignpostSupportObjectExtractor* _notificationExtractor;
	NSObject*<OS_dispatch_queue> _spObjectProcessingQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSDate* _lastTailspinRequestForDelayedNotifications;
	NSDate* _lastTailspinRequest;
	STYAbcHelper* _abcHelper;

}

@property (retain) SignpostSupportObjectExtractor * notificationExtractor;              //@synthesize notificationExtractor=_notificationExtractor - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> spObjectProcessingQueue;                //@synthesize spObjectProcessingQueue=_spObjectProcessingQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> processingQueue;                        //@synthesize processingQueue=_processingQueue - In the implementation block
@property (retain) NSDate * lastTailspinRequestForDelayedNotifications;                 //@synthesize lastTailspinRequestForDelayedNotifications=_lastTailspinRequestForDelayedNotifications - In the implementation block
@property (retain) NSDate * lastTailspinRequest;                                        //@synthesize lastTailspinRequest=_lastTailspinRequest - In the implementation block
@property (assign) unsigned timeToReconnectWithDiagnosticd;                             //@synthesize timeToReconnectWithDiagnosticd=_timeToReconnectWithDiagnosticd - In the implementation block
@property (assign) unsigned eventCount;                                                 //@synthesize eventCount=_eventCount - In the implementation block
@property (assign) BOOL autoUploadThroughAbc;                                           //@synthesize autoUploadThroughAbc=_autoUploadThroughAbc - In the implementation block
@property (assign) BOOL seedUserMode;                                                   //@synthesize seedUserMode=_seedUserMode - In the implementation block
@property (retain) STYAbcHelper * abcHelper;                                            //@synthesize abcHelper=_abcHelper - In the implementation block
+(id)sharedMonitor;
-(unsigned)eventCount;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(id)initPrivate;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)startListeningForNotifications;
-(void)setEventCount:(unsigned)arg1 ;
-(void)processEmittedEvent:(id)arg1 ;
-(void)reportLatencyToReceiveSignposts:(id)arg1 ;
-(id)tailspinFilenamePrefixForInterval:(id)arg1 ;
-(BOOL)seedUserMode;
-(STYAbcHelper *)abcHelper;
-(void)perfProblemDetected:(id)arg1 tailspinFilenamePrefix:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)spObjectProcessingQueue;
-(void)processInterval:(id)arg1 ;
-(void)notificationStreamTerminated:(id)arg1 unmatchedIntervalStarts:(id)arg2 ;
-(void)setupNotificationPipeline;
-(SignpostSupportObjectExtractor *)notificationExtractor;
-(void)setSeedUserMode:(BOOL)arg1 ;
-(void)perfProblemDetectedOnMac:(id)arg1 tailspinFilenamePrefix:(id)arg2 ;
-(BOOL)getCoinTossResult;
-(BOOL)monitorSignposts:(BOOL)arg1 ;
-(void)stopMonitoringSignposts;
-(void)setNotificationExtractor:(SignpostSupportObjectExtractor *)arg1 ;
-(void)setSpObjectProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)lastTailspinRequestForDelayedNotifications;
-(void)setLastTailspinRequestForDelayedNotifications:(NSDate *)arg1 ;
-(NSDate *)lastTailspinRequest;
-(void)setLastTailspinRequest:(NSDate *)arg1 ;
-(unsigned)timeToReconnectWithDiagnosticd;
-(void)setTimeToReconnectWithDiagnosticd:(unsigned)arg1 ;
-(BOOL)autoUploadThroughAbc;
-(void)setAutoUploadThroughAbc:(BOOL)arg1 ;
-(void)setAbcHelper:(STYAbcHelper *)arg1 ;
@end

