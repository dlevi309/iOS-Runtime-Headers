/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/RERelevanceEngineMetricsRecorder.h>

@class NSString;

@interface REClockFaceMetricsSubmitter : NSObject <RERelevanceEngineMetricsRecorder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)recordTrainingMetrics:(id)arg1 forInteraction:(id)arg2 ;
-(void)recordCallibrationCurveMetrics:(id)arg1 forInteraction:(id)arg2 ;
-(BOOL)_runningInClockFace;
-(BOOL)_runningInTest;
-(BOOL)_shouldRecordMetrics;
@end

