/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MontrealNNDescription.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSString, NSArray, NSDictionary, MontrealNNModelQuantization;

@interface MontrealNNModelNode : MontrealNNDescription <MontrealNNDescriptionProtocol> {

	BOOL _parametersSet;
	NSString* _nodeStr;
	NSArray* _activations;
	NSString* _name;
	NSDictionary* _properties;
	NSArray* _inputs;
	NSArray* _inputsWithDimensions;
	NSArray* _outputs;
	NSArray* _outputsWithDimensions;
	NSArray* _weights;
	MontrealNNModelQuantization* _quantization;
	SCD_Struct_Mo4* _parameters;

}

@property (assign) BOOL parametersSet;                                        //@synthesize parametersSet=_parametersSet - In the implementation block
@property (assign) SCD_Struct_Mo4* parameters;                                //@synthesize parameters=_parameters - In the implementation block
@property (readonly) NSString * nodeStr;                                      //@synthesize nodeStr=_nodeStr - In the implementation block
@property (readonly) NSArray * activations;                                   //@synthesize activations=_activations - In the implementation block
@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) NSDictionary * properties;                               //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSArray * inputs;                                //@synthesize inputs=_inputs - In the implementation block
@property (nonatomic,retain) NSArray * inputsWithDimensions;                  //@synthesize inputsWithDimensions=_inputsWithDimensions - In the implementation block
@property (nonatomic,retain) NSArray * outputs;                               //@synthesize outputs=_outputs - In the implementation block
@property (nonatomic,retain) NSArray * outputsWithDimensions;                 //@synthesize outputsWithDimensions=_outputsWithDimensions - In the implementation block
@property (readonly) NSArray * weights;                                       //@synthesize weights=_weights - In the implementation block
@property (readonly) MontrealNNModelQuantization * quantization;              //@synthesize quantization=_quantization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_Mo4*)parameters;
-(void)setParameters:(SCD_Struct_Mo4*)arg1 ;
-(NSDictionary *)properties;
-(void)setInputs:(NSArray *)arg1 ;
-(NSString *)nodeStr;
-(NSString *)name;
-(id)jsonDescription;
-(BOOL)isValid;
-(NSArray *)weights;
-(unsigned long long)hash;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)checkForValidity;
-(void)generateJSONAtPath:(id)arg1 ;
-(BOOL)parametersSet;
-(NSArray *)inputsWithDimensions;
-(id)auditAndUpdateTensors:(id)arg1 dimensionTensors:(id)arg2 ;
-(NSArray *)outputsWithDimensions;
-(void)setParametersSet:(BOOL)arg1 ;
-(NSArray *)activations;
-(id)createDataContainer;
-(id)initWithName:(id)arg1 nodeStr:(id)arg2 activations:(id)arg3 properties:(id)arg4 weights:(id)arg5 ;
-(void)setOutputs:(NSArray *)arg1 ;
-(void)keepTensors:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 tensors:(id)arg2 quantization:(id)arg3 jsonDir:(id)arg4 ;
-(SCD_Struct_Mo4*)parameters:(void*)arg1 ;
-(void)setInputsWithDimensions:(NSArray *)arg1 ;
-(void)setOutputsWithDimensions:(NSArray *)arg1 ;
-(MontrealNNModelQuantization *)quantization;
-(NSArray *)inputs;
-(NSArray *)outputs;
-(BOOL)isEqual:(id)arg1 ;
@end

