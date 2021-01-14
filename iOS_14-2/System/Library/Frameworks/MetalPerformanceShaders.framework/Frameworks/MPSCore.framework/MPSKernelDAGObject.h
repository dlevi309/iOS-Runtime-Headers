/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


#import <MPSCore/MPSCore-Structs.h>
@class NSArray, NSMutableDictionary, NSMutableArray;

@interface MPSKernelDAGObject : NSObject {

	MPSKernelDAG* _kernelDAG;
	shared_ptr<MPSKernelDAG>* _kernelDAGSharedPtr;
	MPSDAGKernelOp* _finalOp;
	NSArray* _stitchedFunctions;
	NSMutableDictionary* _functions;
	NSMutableArray* _functionNames;
	BOOL _keepSubDAGArray[5];
	 _sha256;

}

@property (nonatomic,readonly) MPSDAGKernelOp* finalOp;              //@synthesize finalOp=_finalOp - In the implementation block
@property (nonatomic,readonly) MPSKernelDAG* graph;                  //@synthesize kernelDAG=_kernelDAG - In the implementation block
@property (nonatomic,readonly)  hash;                                //@synthesize sha256=_sha256 - In the implementation block
-(MPSKernelDAG*)graph;
-(id)debugDescription;
-(MPSDAGKernelOp*)finalOp;
-(const BaseTensor*)inputTensorAtIndex:(unsigned long long)arg1 ;
-(const BaseTensor*)outputTensorAtIndex:(unsigned long long)arg1 ;
-(id)initWithKernelDAG:(shared_ptr<MPSKernelDAG>*)arg1 finalOp:(MPSDAGKernelOp*)arg2 ;
-(id)getStitchedFunctions:(id)arg1 ;
-(BOOL)hasPostfixFunction;
-(id)initKernelDAGWithObject:(id)arg1 keepPrimaryPrefix:(BOOL)arg2 keepSecondaryPrefix:(BOOL)arg3 keepTertiaryPrefix:(BOOL)arg4 keepQuaternaryPrefix:(BOOL)arg5 keepPrimaryPostfix:(BOOL)arg6 ;
-()hash;
-(void)dealloc;
@end

