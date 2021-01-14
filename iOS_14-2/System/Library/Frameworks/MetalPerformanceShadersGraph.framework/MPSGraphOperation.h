/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPSGraph, NSArray, NSMutableArray, NSString;

@interface MPSGraphOperation : NSObject <NSCopying> {

	MPSGraph* _graph;
	NSArray* _inputTensors;
	NSArray* _outputTensors;
	NSMutableArray* _controlDependencies;
	NSString* _name;
	BOOL _stopGradient;

}

@property (assign,nonatomic) BOOL stopGradient;                            //@synthesize stopGradient=_stopGradient - In the implementation block
@property (nonatomic,readonly) NSArray * inputTensors;                     //@synthesize inputTensors=_inputTensors - In the implementation block
@property (nonatomic,readonly) NSArray * outputTensors;                    //@synthesize outputTensors=_outputTensors - In the implementation block
@property (nonatomic,readonly) NSArray * controlDependencies; 
@property (nonatomic,__weak,readonly) MPSGraph * graph;                    //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
-(MPSGraph *)graph;
-(id)initInternal;
-(id)init;
-(NSString *)name;
-(BOOL)stopGradient;
-(void)setStopGradient:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Value)makeMLIROpWithBuilder:(OpBuilder*)arg1 symbolTable:(MPSSymbolTable=StringMap<std::__1::basic_string<char>, llvm::MallocAllocator>=StringMapEntryBase}IIIIMallocAllocator}}Ref)arg2 inputValues:(vector<mlir::Value, std::__1::allocator<mlir::Value> >*)arg3 opInitialization:(BOOL)arg4 name:(id)arg5 ;
-(NSArray *)controlDependencies;
-(id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 name:(id)arg4 ;
-(id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4 ;
-(NSArray *)inputTensors;
-(NSArray *)outputTensors;
@end

