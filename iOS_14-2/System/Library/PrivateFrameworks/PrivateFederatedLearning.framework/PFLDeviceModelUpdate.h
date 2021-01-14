/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSMutableArray, GPBFloatArray, Metrics;

@interface PFLDeviceModelUpdate : GPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) int modelVersion; 
@property (nonatomic,retain) NSMutableArray * shapesArray; 
@property (nonatomic,readonly) unsigned long long shapesArray_Count; 
@property (nonatomic,retain) GPBFloatArray * flattenedPrivatizedWeightDiffsArray; 
@property (nonatomic,readonly) unsigned long long flattenedPrivatizedWeightDiffsArray_Count; 
@property (nonatomic,retain) Metrics * evaluationMetrics; 
@property (assign,nonatomic) BOOL hasEvaluationMetrics; 
@property (assign,nonatomic) int numSamples; 
+(id)descriptor;
@end

