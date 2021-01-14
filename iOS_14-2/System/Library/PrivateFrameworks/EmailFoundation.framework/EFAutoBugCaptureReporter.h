/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedReporter;
+(id)log;
-(void)reportIssueType:(id)arg1 description:(id)arg2 ;
-(id)init;
-(SDRDiagnosticReporter *)diagnosticReporter;
-(void)setDiagnosticReporter:(SDRDiagnosticReporter *)arg1 ;
@end

