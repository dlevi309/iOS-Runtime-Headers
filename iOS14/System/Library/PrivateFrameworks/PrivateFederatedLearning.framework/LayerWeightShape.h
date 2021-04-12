/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <Transparency/GPBMessage.h>

@class NSString, GPBInt32Array;

@interface LayerWeightShape : GPBMessage

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,retain) GPBInt32Array * weightShapeArray; 
@property (nonatomic,readonly) unsigned long long weightShapeArray_Count; 
@property (nonatomic,retain) GPBInt32Array * biasShapeArray; 
@property (nonatomic,readonly) unsigned long long biasShapeArray_Count; 
+(id)descriptor;
@end

