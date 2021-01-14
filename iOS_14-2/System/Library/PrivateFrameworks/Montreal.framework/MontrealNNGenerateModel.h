/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/


#import <Montreal/Montreal-Structs.h>
@class MontrealNNModelNetwork, NSMutableDictionary;

@interface MontrealNNGenerateModel : NSObject {

	MontrealNeuralNetworkRef _nnObject;
	unsigned long long _weightFormat;
	MontrealNNModelNetwork* _network;
	NSMutableDictionary* _inputs;
	NSMutableDictionary* _outputs;

}

@property (readonly) unsigned long long weightFormat;               //@synthesize weightFormat=_weightFormat - In the implementation block
@property (readonly) MontrealNNModelNetwork * network;              //@synthesize network=_network - In the implementation block
@property (assign) MontrealNeuralNetworkRef nnObject;               //@synthesize nnObject=_nnObject - In the implementation block
@property (readonly) NSMutableDictionary * inputs;                  //@synthesize inputs=_inputs - In the implementation block
@property (readonly) NSMutableDictionary * outputs;                 //@synthesize outputs=_outputs - In the implementation block
-(void)merge:(id)arg1 ;
-(MontrealNNModelNetwork *)network;
-(void)removeInput:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(MontrealNeuralNetworkRef)nnObject;
-(id)initWithWeightFormat:(unsigned long long)arg1 ;
-(void*)generateModelContainer;
-(unsigned long long)weightFormat;
-(void)addInputs:(id)arg1 ;
-(void)addOutputs:(id)arg1 ;
-(NSMutableDictionary *)inputs;
-(id)networkInputs;
-(id)networkOutputs;
-(id)modelContainerPath;
-(void)setNnObject:(MontrealNeuralNetworkRef)arg1 ;
-(NSMutableDictionary *)outputs;
-(void)dealloc;
@end

