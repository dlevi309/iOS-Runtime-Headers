/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@protocol HMICameraVideoFrameAnalyzer <NSObject>
@required
+(id)classHierarchyMap;
-(id)init;
-(id)initWithConfidenceThresholds:(id)arg1 nmsThreshold:(double)arg2 error:(id*)arg3;
-(void)preAnalyze:(id)arg1;
-(id)analyze:(id)arg1 targetEventTypes:(long long)arg2 error:(id*)arg3;

@end

