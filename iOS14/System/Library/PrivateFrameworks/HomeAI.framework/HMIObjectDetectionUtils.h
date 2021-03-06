/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


#import <HomeAI/HomeAI-Structs.h>
@interface HMIObjectDetectionUtils : NSObject
+(void)nmsMultiClass:(id)arg1 output:(id)arg2 nmsConfiguration:(id)arg3 ;
+(void)nonMaximumSuppression:(id)arg1 output:(id)arg2 withThreshold:(double)arg3 withMetric:(long long)arg4 ;
+(float)intersectionOverUnion:(CGRect)arg1 b:(CGRect)arg2 ;
+(float)intersectionOverMinArea:(CGRect)arg1 b:(CGRect)arg2 ;
+(id)convertObjectDetections:(id)arg1 cropRect:(CGRect)arg2 originalImageSize:(CGSize)arg3 ;
@end

