/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <MetalPerformanceShadersGraph/MPSGraphOperation.h>

@class NSData, NSArray;

@interface MPSGraphConstantOp : MPSGraphOperation {

	NSData* _data;
	unsigned _dataType;
	NSArray* _shape;

}

@property (nonatomic,readonly) NSArray * shape;                //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) unsigned dataType;              //@synthesize dataType=_dataType - In the implementation block
-(unsigned)dataType;
-(NSArray *)shape;
-(Value)makeMLIROpWithBuilder:(OpBuilder*)arg1 symbolTable:(MPSSymbolTable=StringMap<std::__1::basic_string<char>, llvm::MallocAllocator>=StringMapEntryBase}IIIIMallocAllocator}}Ref)arg2 inputValues:(vector<mlir::Value, std::__1::allocator<mlir::Value> >*)arg3 opInitialization:(BOOL)arg4 name:(id)arg5 ;
-(id)initWithGraph:(id)arg1 data:(id)arg2 shape:(id)arg3 dataType:(unsigned)arg4 name:(id)arg5 ;
@end

