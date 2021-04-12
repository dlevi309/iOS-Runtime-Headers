/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface CSAggregator : NSObject {

	unsigned long long _currentState;
	double _lastAggTime;
	double _cumulativeUptime;
	double _cumulativeDowntime;
	double _lastAggTimeFalseWakeUp;
	unsigned long long _numFalseWakeUp;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	NSString* _languageCode;
	NSString* _assetString;

}
+(id)sharedAggregator;
-(id)init;
-(void)setLanguageCode:(id)arg1 ;
-(void)logVoiceProfilePruningFailureWithReasonCode:(unsigned long long)arg1 ;
-(void)logProfileUpdateUtt:(id)arg1 withScore:(double)arg2 ;
-(void)logProfileUpdateScoreMSE:(double)arg1 ;
-(void)logProfileUpdateNumDiscardedUttsPHS:(int)arg1 ;
-(void)logProfileUpdateNumPrunedUttsPHS:(int)arg1 ;
-(void)logProfileUpdateNumRetainedUttsPHS:(int)arg1 ;
-(void)logTdPsrSATRetrainingTimedOut;
-(void)logTdPsrSATRetrainingWaitTimeMs:(double)arg1 ;
-(void)logTdPsrFailedDuringSATRetraining;
-(void)_logUptime;
-(id)_makeKeyWithLanguageAndAssetString:(id)arg1 ;
-(void)_addValueForScalarKey:(id)arg1 withValue:(long long)arg2 ;
-(void)_pushValueForDistributionKey:(id)arg1 withValue:(double)arg2 ;
-(id)_makeKey:(id)arg1 ;
-(void)cumulativeUptime:(id*)arg1 cumulativeDowntime:(id*)arg2 reset:(BOOL)arg3 ;
-(void)setAssetString:(id)arg1 ;
-(void)logTdPsrSATDetectionWaitTimeMs:(double)arg1 ;
-(void)logTdPsrFailedDuringSATDetection;
-(void)logTdPsrSATDetectionTimedOut;
@end

