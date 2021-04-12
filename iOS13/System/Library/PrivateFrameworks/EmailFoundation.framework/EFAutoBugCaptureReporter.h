/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class SDRDiagnosticReporter, NSString;

@interface EFAutoBugCaptureReporter : NSObject <EFLoggable> {

	SDRDiagnosticReporter* _diagnosticReporter;

}

@property (nonatomic,retain) SDRDiagnosticReporter * diagnosticReporter;              //@synthesize diagnosticReporter=_diagnosticReporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)sharedReporter;
-(id)init;
-(void)reportIssueType:(id)arg1 description:(id)arg2 ;
-(SDRDiagnosticReporter *)diagnosticReporter;
-(void)setDiagnosticReporter:(SDRDiagnosticReporter *)arg1 ;
@end

