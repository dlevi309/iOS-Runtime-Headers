/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@class NSMutableArray;

@interface ETModelDef : NSObject {

	map<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > > >* layer_variable_names;
	NSMutableArray* _all_variables;
	shared_ptr<Espresso::net>* _network;
	shared_ptr<Espresso::gradient_builder>* _gb;

}

@property (assign) shared_ptr<Espresso::net>* network;                      //@synthesize network=_network - In the implementation block
@property (retain) NSMutableArray * all_variables;                          //@synthesize all_variables=_all_variables - In the implementation block
@property (assign) shared_ptr<Espresso::gradient_builder>* gb;              //@synthesize gb=_gb - In the implementation block
-(shared_ptr<Espresso::net>*)network;
-(void)setNetwork:(shared_ptr<Espresso::net>*)arg1 ;
-(id)initWithNetwork:(id)arg1 ;
-(id)layerNames;
-(id)variables;
-(shared_ptr<Espresso::gradient_builder>*)gb;
-(void)transformForTraining:(shared_ptr<Espresso::net>*)arg1 ;
-(shared_ptr<std::__1::basic_string<char> >*)topNamesForLayerIndex:(int)arg1 ;
-(layer*)layerForName:(id)arg1 ;
-(shared_ptr<Espresso::blob<float, 2> >*)weightsForLayer:(id)arg1 ;
-(shared_ptr<Espresso::blob<float, 1> >*)biasesForLayer:(id)arg1 ;
-(void)updateLayer:(id)arg1 withWeights:(shared_ptr<float>*)arg2 length:(unsigned long long)arg3 ;
-(void)updateLayer:(id)arg1 withBiases:(shared_ptr<float>*)arg2 length:(unsigned long long)arg3 ;
-(void)randomizeWeightsForLayer:(id)arg1 withSeed:(float)arg2 ;
-(void)setupVariablesDef;
-(id)variableNameForLayer:(id)arg1 kind:(unsigned long long)arg2 ;
-(int)configureLayersToTrain:(id)arg1 reinitializeVariables:(BOOL)arg2 ;
-(id)variableForLayer:(id)arg1 kind:(unsigned long long)arg2 ;
-(NSMutableArray *)all_variables;
-(void)setAll_variables:(NSMutableArray *)arg1 ;
-(void)setGb:(shared_ptr<Espresso::gradient_builder>*)arg1 ;
@end

