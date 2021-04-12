/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class MLCGraph;

@interface MLCConditionalLayer : MLCLayer {

	MLCGraph* _trueBranch;
	MLCGraph* _falseBranch;

}

@property (nonatomic,retain,readonly) MLCGraph * trueBranch;               //@synthesize trueBranch=_trueBranch - In the implementation block
@property (nonatomic,retain,readonly) MLCGraph * falseBranch;              //@synthesize falseBranch=_falseBranch - In the implementation block
+(id)layerWithTrueBranch:(id)arg1 falseBranch:(id)arg2 ;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(id)initWithTrueBranch:(id)arg1 falseBranch:(id)arg2 ;
-(MLCGraph *)trueBranch;
-(MLCGraph *)falseBranch;
-(unsigned long long)resultSizeForOutputIndex:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
@end

