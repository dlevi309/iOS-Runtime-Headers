/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithWeightFormat:(unsigned long long)arg1 ;
-(void)merge:(id)arg1 ;
-(NSMutableDictionary *)inputs;
-(void)removeInput:(id)arg1 ;
-(NSMutableDictionary *)outputs;
-(void)removeOutput:(id)arg1 ;
-(void*)generateModelContainer;
-(MontrealNNModelNetwork *)network;
-(unsigned long long)weightFormat;
-(void)addInputs:(id)arg1 ;
-(void)addOutputs:(id)arg1 ;
-(id)networkInputs;
-(id)networkOutputs;
-(id)modelContainerPath;
-(void)setNnObject:(MontrealNeuralNetworkRef)arg1 ;
-(MontrealNeuralNetworkRef)nnObject;
@end

