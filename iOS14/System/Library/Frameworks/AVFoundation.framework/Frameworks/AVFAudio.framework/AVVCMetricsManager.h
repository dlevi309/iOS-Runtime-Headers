/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class CAReporter, NSMutableDictionary;

@interface AVVCMetricsManager : NSObject {

	CAReporter* mMetricsReporter;
	long long mAudioIssueDetector;
	unsigned long long mAudioDataAnalysisSiriSession;
	unsigned long long _voiceTriggerStartHostTime;
	unsigned long long _callToStartRecordHostTime;
	NSMutableDictionary* _publicMetrics;
	NSMutableDictionary* _avvcProfilingInfoDictionary;

}

@property (retain) NSMutableDictionary * publicMetrics;                                 //@synthesize publicMetrics=_publicMetrics - In the implementation block
@property (retain) NSMutableDictionary * avvcProfilingInfoDictionary;                   //@synthesize avvcProfilingInfoDictionary=_avvcProfilingInfoDictionary - In the implementation block
@property (assign,nonatomic) unsigned long long voiceTriggerStartHostTime;              //@synthesize voiceTriggerStartHostTime=_voiceTriggerStartHostTime - In the implementation block
@property (assign,nonatomic) unsigned long long callToStartRecordHostTime;              //@synthesize callToStartRecordHostTime=_callToStartRecordHostTime - In the implementation block
+(id)sharedManager;
+(CAMutex*)getLock;
+(void)createSharedManager;
+(void)destroySharedManager;
-(id)init;
-(void)updateWithReporterID:(long long)arg1 ;
-(void)checkAndUpdateReporterID;
-(id)retrieveMetrics;
-(id)getStringDate:(id)arg1 ;
-(void)resetProfileMetrics;
-(id)retrieveProfileMetrics;
-(int)resetAudioIssueDetector;
-(BOOL)measureElapseTimeForMetric:(id)arg1 block:(/*^block*/id)arg2 ;
-(int)setAudioIssueDetectorFormat:(CAStreamBasicDescription)arg1 numFrames:(unsigned)arg2 ;
-(int)audioIssueDetectorAnalyzeBuffer:(AudioBufferList*)arg1 numFrames:(unsigned)arg2 timeStamp:(const AudioTimeStamp*)arg3 shouldAnalyze:(BOOL)arg4 ;
-(void)logSessionMetric:(id)arg1 value:(id)arg2 category:(unsigned)arg3 type:(unsigned short)arg4 ;
-(void)logSessionMetric:(id)arg1 value:(id)arg2 category:(unsigned)arg3 type:(unsigned short)arg4 context:(id)arg5 ;
-(void)logSingleMetric:(id)arg1 value:(id)arg2 category:(unsigned)arg3 type:(unsigned short)arg4 ;
-(void)logRecordAudioFormat:(CAStreamBasicDescription)arg1 ;
-(void)logRecordRoute:(id)arg1 andPlaybackRoute:(id)arg2 ;
-(void)logProfileMetrics:(id)arg1 ;
-(NSMutableDictionary *)publicMetrics;
-(unsigned long long)voiceTriggerStartHostTime;
-(void)setVoiceTriggerStartHostTime:(unsigned long long)arg1 ;
-(unsigned long long)callToStartRecordHostTime;
-(void)setCallToStartRecordHostTime:(unsigned long long)arg1 ;
-(void)setPublicMetrics:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)avvcProfilingInfoDictionary;
-(void)setAvvcProfilingInfoDictionary:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

