/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <MetalPerformanceShadersGraph/MPSGraphOperation.h>

@class MPSGraphTensor, NSArray;

@interface MPSGraphStitchedOp : MPSGraphOperation {

	/*^block*/id _stitchingBlock;
	MPSGraphTensor* _finalOutputTensorForStitchedRegion;
	NSArray* _opsAddedInStitchedRegion;

}
-(Value)makeMLIROpWithBuilder:(OpBuilder*)arg1 symbolTable:(MPSSymbolTable=StringMap<std::__1::basic_string<char>, llvm::MallocAllocator>=StringMapEntryBase}IIIIMallocAllocator}}Ref)arg2 inputValues:(vector<mlir::Value, std::__1::allocator<mlir::Value> >*)arg3 opInitialization:(BOOL)arg4 name:(id)arg5 ;
-(void)recurseOperation:(id)arg1 builder:(OpBuilder*)arg2 symbolTable:(MPSSymbolTable=StringMap<std::__1::basic_string<char>, llvm::MallocAllocator>=StringMapEntryBase}IIIIMallocAllocator}}Ref)arg3 tensorToValueMap:(map<MPSGraphTensor *, mlir::Value, std::__1::less<MPSGraphTensor *>, std::__1::allocator<std::__1::pair<MPSGraphTensor *const, mlir::Value> > >*)arg4 operationsRecursed:(id)arg5 ;
-(id)initWithGraph:(id)arg1 withBlock:(/*^block*/id)arg2 inputTensors:(id)arg3 controlDependencies:(id)arg4 name:(id)arg5 ;
@end

