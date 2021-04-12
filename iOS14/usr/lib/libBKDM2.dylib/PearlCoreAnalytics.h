/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/


@class AWDServerConnection, NSDate, BiometricAutoBugCapture;

@interface PearlCoreAnalytics : NSObject {

	AWDServerConnection* awdConnection;
	NSDate* _yogiErrorDate;
	BOOL _isInternalBuild;
	unsigned _totalMatchAttempts;
	unsigned _totalMatchAttemptsFaceDetected;
	unsigned _totalMatchAttemptsFailed;
	unsigned _totalMatchAttemptsSuccessful;
	/*^block*/id _analyticsPerformCommandBlock;
	BiometricAutoBugCapture* _pearlAbc;

}

@property (nonatomic,copy) id analyticsPerformCommandBlock;                   //@synthesize analyticsPerformCommandBlock=_analyticsPerformCommandBlock - In the implementation block
@property (nonatomic,retain) BiometricAutoBugCapture * pearlAbc;              //@synthesize pearlAbc=_pearlAbc - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setPearlAbc:(BiometricAutoBugCapture *)arg1 ;
-(void)setAnalyticsPerformCommandBlock:(id)arg1 ;
-(void)sendMatchEventAnalytics:(id)arg1 orientation:(unsigned long long)arg2 identities:(id)arg3 ;
-(void)sendFaceDetectEventAnalytics:(id)arg1 fromMatch:(BOOL)arg2 orientation:(unsigned long long)arg3 ;
-(void)sendEnrollEventAnalytics:(id)arg1 orientation:(unsigned long long)arg2 ;
-(void)sendPasscodeChallengeEventAnalytics:(id)arg1 orientation:(unsigned long long)arg2 ;
-(void)sendBioLockoutEventAnalytics:(id)arg1 ;
-(id)getDailyUpdateAnalytics;
-(int)sequenceTypeToCaptureMethod:(unsigned char)arg1 forSequence:(unsigned char)arg2 ;
-(void)sendPearlAbcEvent:(unsigned long long)arg1 ;
-(void)checkYogiError:(int)arg1 ;
-(void)countMatchAttempts:(BOOL)arg1 withFaceDetectResult:(unsigned)arg2 ;
-(void)clearMatchAttempts;
-(void)persistsMatchAttempts;
-(id)analyticsPerformCommandBlock;
-(BiometricAutoBugCapture *)pearlAbc;
@end

