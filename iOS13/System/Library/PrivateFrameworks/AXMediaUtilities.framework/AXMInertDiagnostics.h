/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMDiagnostics.h>

@interface AXMInertDiagnostics : AXMDiagnostics
+(id)sharedInstance;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)metrics;
-(id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(/*^block*/id)arg3 ;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(BOOL)diagnosticsEnabled;
-(void)addMetric:(id)arg1 ;
-(void)clearMetrics;
-(id)startMeasurement:(long long)arg1 name:(id)arg2 ;
-(void)appendVisionObservations:(id)arg1 ;
-(id)visionObservations;
@end

