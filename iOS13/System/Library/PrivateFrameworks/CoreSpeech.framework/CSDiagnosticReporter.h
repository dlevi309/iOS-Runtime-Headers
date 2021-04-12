/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(SDRDiagnosticReporter *)reporter;
-(void)submitVoiceIdIssueReport:(id)arg1 ;
-(void)submitDiagnosticReportWithType:(id)arg1 withSubType:(id)arg2 withDuration:(double)arg3 withContext:(id)arg4 ;
-(void)submitAudioIssueReport:(id)arg1 ;
-(void)setReporter:(SDRDiagnosticReporter *)arg1 ;
@end

