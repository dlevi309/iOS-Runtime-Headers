/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class SDRDiagnosticReporter;

@interface CACBugReporter : NSObject {

	SDRDiagnosticReporter* _diagnosticReporter;

}

@property (retain) SDRDiagnosticReporter * diagnosticReporter;              //@synthesize diagnosticReporter=_diagnosticReporter - In the implementation block
+(id)sharedReporter;
-(id)init;
-(SDRDiagnosticReporter *)diagnosticReporter;
-(void)setDiagnosticReporter:(SDRDiagnosticReporter *)arg1 ;
-(void)reportIssue:(id)arg1 subtype:(id)arg2 description:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)reportIssue:(id)arg1 subtype:(id)arg2 description:(id)arg3 ;
@end

