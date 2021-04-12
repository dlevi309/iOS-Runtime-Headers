/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@interface _PFLContinuedFraction : NSObject
+(double)sampleConditionalBetaWithDimension:(double)arg1 r:(double)arg2 minCDProduct:(double)arg3 precision:(double)arg4 ;
+(double)logCoeffWithA:(double)arg1 b:(double)arg2 ;
+(double)regularizeIncompletedBetaWithX:(double)arg1 a:(double)arg2 b:(double)arg3 minCDProduct:(double)arg4 ;
+(double)logComplementaryCDFWithX:(double)arg1 r:(double)arg2 d:(double)arg3 minCDProduct:(double)arg4 ;
+(double)valueForCFWithX:(double)arg1 a:(double)arg2 b:(double)arg3 minCDProduct:(double)arg4 ;
+(double)dOfIndex:(unsigned long long)arg1 x:(double)arg2 a:(double)arg3 b:(double)arg4 ;
-(id)init;
@end

