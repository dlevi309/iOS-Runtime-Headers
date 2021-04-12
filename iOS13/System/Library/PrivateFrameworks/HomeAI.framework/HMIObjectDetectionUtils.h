/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


#import <HomeAI/HomeAI-Structs.h>
@interface HMIObjectDetectionUtils : NSObject
+(void)nmsMultiClass:(id)arg1 output:(id)arg2 withThreshold:(double)arg3 ;
+(void)nonMaximumSuppression:(id)arg1 output:(id)arg2 withThreshold:(double)arg3 ;
+(float)intersectionOverUnion:(CGRect)arg1 b:(CGRect)arg2 ;
+(id)convertObjectDetections:(id)arg1 cropRect:(CGRect)arg2 originalImageSize:(CGSize)arg3 ;
@end

