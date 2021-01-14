/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@protocol HMICameraVideoFrameAnalyzer <NSObject>
@required
+(id)classHierarchyMap;
-(id)init;
-(void)preAnalyze:(id)arg1;
-(void)handleMotionDetection:(id)arg1 sessionPTS:(SCD_Struct_HM3)arg2 frameDimensions:(CGSize)arg3 sessionIdentifier:(id)arg4;
-(id)analyze:(id)arg1 targetEventTypes:(long long)arg2 enableFaceClassification:(BOOL)arg3 sessionIdentifier:(id)arg4 homeUUID:(id)arg5 error:(id*)arg6;
-(id)initWithMediumConfidenceThresholds:(id)arg1 highConfidenceThresholds:(id)arg2 nmsConfiguration:(id)arg3 assetPath:(id)arg4 error:(id*)arg5;

@end

