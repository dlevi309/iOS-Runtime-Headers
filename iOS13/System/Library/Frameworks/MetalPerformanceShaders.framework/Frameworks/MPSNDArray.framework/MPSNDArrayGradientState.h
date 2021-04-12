/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSCore/MPSState.h>

@interface MPSNDArrayGradientState : MPSState {

	unsigned long long _srcCount;
	NDArraySrcInfo* _srcInfo;
	unsigned _provenance;

}
-(void)dealloc;
-(id)initWithSourceCount:(unsigned long long)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceGradientIndex:(unsigned long long)arg2 ;
@end

