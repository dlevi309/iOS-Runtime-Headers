/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

