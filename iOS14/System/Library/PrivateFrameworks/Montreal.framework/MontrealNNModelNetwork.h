/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/MontrealNNDescription.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSArray, MontrealNNModelQuantization, NSString, MontrealNNModelOptimizerParam;

@interface MontrealNNModelNetwork : MontrealNNDescription <MontrealNNDescriptionProtocol> {

	NSArray* _nodes;
	NSArray* _inputs;
	NSArray* _outputs;
	MontrealNNModelQuantization* _quantization;
	NSString* _jsonDir;
	MontrealNNModelOptimizerParam* _optimizerParams;

}

@property (retain) NSArray * nodes;                                                //@synthesize nodes=_nodes - In the implementation block
@property (retain) NSArray * inputs;                                               //@synthesize inputs=_inputs - In the implementation block
@property (retain) NSArray * outputs;                                              //@synthesize outputs=_outputs - In the implementation block
@property (readonly) MontrealNNModelQuantization * quantization;                   //@synthesize quantization=_quantization - In the implementation block
@property (readonly) NSString * jsonDir;                                           //@synthesize jsonDir=_jsonDir - In the implementation block
@property (readonly) MontrealNNModelOptimizerParam * optimizerParams;              //@synthesize optimizerParams=_optimizerParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInputs:(NSArray *)arg1 ;
-(id)init;
-(void)setNodes:(NSArray *)arg1 ;
-(NSString *)jsonDir;
-(id)jsonDescription;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)checkForValidity;
-(void)generateJSONAtPath:(id)arg1 ;
-(void*)generateModelContainer;
-(MontrealNNModelOptimizerParam *)optimizerParams;
-(id)initWithJSONDir:(id)arg1 ;
-(id)createDataContainer;
-(void)setOutputs:(NSArray *)arg1 ;
-(MontrealNNModelQuantization *)quantization;
-(id)initWithModelContainer:(void*)arg1 tensors:(id)arg2 ;
-(NSArray *)inputs;
-(void)collapseNodes;
-(id)initWithDictionary:(id)arg1 tensors:(id)arg2 quantization:(id)arg3 optimizerParams:(id)arg4 jsonDir:(id)arg5 optimization:(unsigned long long)arg6 ;
-(void)validateNetworkTensors:(id)arg1 ;
-(void)validateNodeTensors;
-(void)collapsePackUnpack:(id)arg1 nodesToRemove:(id)arg2 ;
-(void)removeView:(id)arg1 nodesToRemove:(id)arg2 ;
-(NSArray *)outputs;
-(NSArray *)nodes;
@end

