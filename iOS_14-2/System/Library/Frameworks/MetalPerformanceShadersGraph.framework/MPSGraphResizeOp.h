/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <MetalPerformanceShadersGraph/MPSGraphResizeBaseOp.h>

@class NSArray;

@interface MPSGraphResizeOp : MPSGraphResizeBaseOp {

	NSArray* _size;

}
-(Value)makeMLIROpWithBuilder:(OpBuilder*)arg1 symbolTable:(MPSSymbolTable=StringMap<std::__1::basic_string<char>, llvm::MallocAllocator>=StringMapEntryBase}IIIIMallocAllocator}}Ref)arg2 inputValues:(vector<mlir::Value, std::__1::allocator<mlir::Value> >*)arg3 opInitialization:(BOOL)arg4 name:(id)arg5 ;
-(id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 size:(id)arg4 mode:(unsigned long long)arg5 centerResult:(BOOL)arg6 alignCorners:(BOOL)arg7 layout:(unsigned long long)arg8 name:(id)arg9 context:(MLIRContext*)arg10 ;
@end

