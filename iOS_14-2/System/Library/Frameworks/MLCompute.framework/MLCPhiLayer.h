/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@interface MLCPhiLayer : MLCLayer
+(id)layerWithControlTreeNode:(id)arg1 sources:(id)arg2 resultTensor:(id)arg3 ;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)initWithControlTreeNode:(id)arg1 sources:(id)arg2 resultTensor:(id)arg3 ;
@end

