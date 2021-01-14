/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@protocol OS_dispatch_queue;
@class SDRDiagnosticReporter, NSObject;

@interface CSDiagnosticReporter : NSObject {

	SDRDiagnosticReporter* _reporter;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) SDRDiagnosticReporter * reporter;                //@synthesize reporter=_reporter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(SDRDiagnosticReporter *)reporter;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)submitVoiceTriggerIssueReport:(id)arg1 ;
-(void)submitAudioIssueReport:(id)arg1 ;
-(void)submitDiagnosticReportWithType:(id)arg1 withSubType:(id)arg2 withDuration:(double)arg3 withContext:(id)arg4 ;
-(void)submitTrialIssueReport:(id)arg1 ;
-(void)submitVoiceIdIssueReport:(id)arg1 ;
-(void)submitEndpointerIssueReport:(id)arg1 ;
-(void)setReporter:(SDRDiagnosticReporter *)arg1 ;
@end

