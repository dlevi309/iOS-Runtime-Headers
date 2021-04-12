/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <MetalPerformanceShadersGraph/MPSGraphOperation.h>

@class MPSGraphVariable, NSArray;

@interface MPSGraphVariableOp : MPSGraphOperation {

	MPSGraphVariable* _variable;
	unsigned _dataType;
	NSArray* _shape;

}

@property (nonatomic,readonly) MPSGraphVariable * variable;              //@synthesize variable=_variable - In the implementation block
@property (nonatomic,readonly) NSArray * shape;                          //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                        //@synthesize dataType=_dataType - In the implementation block
-(unsigned)dataType;
-(NSArray *)shape;
-(MPSGraphVariable *)variable;
-(Value)makeMLIROpWithBuilder:(OpBuilder*)arg1 symbolTable:(MPSSymbolTable=StringMap<std::__1::basic_string<char>, llvm::MallocAllocator>=StringMapEntryBase}IIIIMallocAllocator}}Ref)arg2 inputValues:(vector<mlir::Value, std::__1::allocator<mlir::Value> >*)arg3 opInitialization:(BOOL)arg4 name:(id)arg5 ;
-(id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg1 variableMPSNDArray:(id)arg2 name:(id)arg3 ;
-(id)mpsNDArrayWithDevice:(id)arg1 ;
-(id)initWithGraph:(id)arg1 shape:(id)arg2 dataType:(unsigned)arg3 name:(id)arg4 ;
@end

