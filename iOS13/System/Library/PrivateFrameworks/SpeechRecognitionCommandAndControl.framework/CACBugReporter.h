/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

