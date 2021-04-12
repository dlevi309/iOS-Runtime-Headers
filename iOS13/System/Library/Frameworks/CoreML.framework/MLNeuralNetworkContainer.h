/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@class NSString, NSArray, NSDictionary, MLModel, MLNeuralNetworksCompileTimeParams;

@interface MLNeuralNetworkContainer : NSObject {

	BOOL _hasBidirectionalLayer;
	BOOL _hasOptionalInputSequenceConcat;
	BOOL _hasDynamicLayer;
	BOOL _ndArrayInterpretation;
	int _precision;
	int _engine;
	NSString* _modelFilePath;
	NSArray* _inputLayerNames;
	NSArray* _outputLayerNames;
	NSString* _name;
	NSDictionary* _inputDescription;
	NSDictionary* _outputDescription;
	NSDictionary* _imageParameters;
	NSArray* _configurationList;
	NSArray* _classLabels;
	NSString* _classScoreVectorName;
	MLModel* _transformDesc;
	NSDictionary* _imagePreprocessingParams;
	MLNeuralNetworksCompileTimeParams* _updatableModelCompiledParams;
	map<std::__1::basic_string<char>, MLOptionalNNInputType, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MLOptionalNNInputType> > >* _optionalInputTypes;

}

@property (assign,nonatomic) int precision;                                                                 //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) int engine;                                                                    //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> optionalInputTypes;                           //@synthesize optionalInputTypes=_optionalInputTypes - In the implementation block
@property (nonatomic,retain) NSString * modelFilePath;                                                      //@synthesize modelFilePath=_modelFilePath - In the implementation block
@property (nonatomic,retain,readonly) NSArray * inputLayerNames;                                            //@synthesize inputLayerNames=_inputLayerNames - In the implementation block
@property (nonatomic,retain,readonly) NSArray * outputLayerNames;                                           //@synthesize outputLayerNames=_outputLayerNames - In the implementation block
@property (nonatomic,retain) NSString * name;                                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * inputDescription;                                               //@synthesize inputDescription=_inputDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * outputDescription;                                              //@synthesize outputDescription=_outputDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * imageParameters;                                                //@synthesize imageParameters=_imageParameters - In the implementation block
@property (nonatomic,retain) NSArray * configurationList;                                                   //@synthesize configurationList=_configurationList - In the implementation block
@property (assign,nonatomic) BOOL hasBidirectionalLayer;                                                    //@synthesize hasBidirectionalLayer=_hasBidirectionalLayer - In the implementation block
@property (assign,nonatomic) BOOL hasOptionalInputSequenceConcat;                                           //@synthesize hasOptionalInputSequenceConcat=_hasOptionalInputSequenceConcat - In the implementation block
@property (assign,nonatomic) BOOL hasDynamicLayer;                                                          //@synthesize hasDynamicLayer=_hasDynamicLayer - In the implementation block
@property (retain) NSArray * classLabels;                                                                   //@synthesize classLabels=_classLabels - In the implementation block
@property (retain) NSString * classScoreVectorName;                                                         //@synthesize classScoreVectorName=_classScoreVectorName - In the implementation block
@property (retain) MLModel * transformDesc;                                                                 //@synthesize transformDesc=_transformDesc - In the implementation block
@property (assign) BOOL ndArrayInterpretation;                                                              //@synthesize ndArrayInterpretation=_ndArrayInterpretation - In the implementation block
@property (nonatomic,retain) NSDictionary * imagePreprocessingParams;                                       //@synthesize imagePreprocessingParams=_imagePreprocessingParams - In the implementation block
@property (nonatomic,retain) MLNeuralNetworksCompileTimeParams * updatableModelCompiledParams;              //@synthesize updatableModelCompiledParams=_updatableModelCompiledParams - In the implementation block
+(id)containerFromFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4 ;
+(id)containerFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(int)engine;
-(NSArray *)classLabels;
-(id)initWithFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4 ;
-(id)initWithFeatureDescriptions:(id)arg1 transformDesc:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4 configurations:(id)arg5 classScoreVectorName:(id)arg6 classLabels:(id)arg7 hasBidirectionalLayer:(BOOL)arg8 hasOptionalInputSequenceConcat:(BOOL)arg9 hasDynamicLayer:(BOOL)arg10 ;
-(NSString *)modelFilePath;
-(void)setModelFilePath:(NSString *)arg1 ;
-(NSArray *)inputLayerNames;
-(NSArray *)outputLayerNames;
-(NSDictionary *)inputDescription;
-(void)setInputDescription:(NSDictionary *)arg1 ;
-(NSDictionary *)outputDescription;
-(void)setOutputDescription:(NSDictionary *)arg1 ;
-(NSDictionary *)imageParameters;
-(void)setImageParameters:(NSDictionary *)arg1 ;
-(NSArray *)configurationList;
-(void)setConfigurationList:(NSArray *)arg1 ;
-(BOOL)hasBidirectionalLayer;
-(void)setHasBidirectionalLayer:(BOOL)arg1 ;
-(BOOL)hasOptionalInputSequenceConcat;
-(void)setHasOptionalInputSequenceConcat:(BOOL)arg1 ;
-(BOOL)hasDynamicLayer;
-(void)setHasDynamicLayer:(BOOL)arg1 ;
-(void)setClassLabels:(NSArray *)arg1 ;
-(NSString *)classScoreVectorName;
-(void)setClassScoreVectorName:(NSString *)arg1 ;
-(MLModel *)transformDesc;
-(void)setTransformDesc:(MLModel *)arg1 ;
-(BOOL)ndArrayInterpretation;
-(void)setNdArrayInterpretation:(BOOL)arg1 ;
-(NSDictionary *)imagePreprocessingParams;
-(void)setImagePreprocessingParams:(NSDictionary *)arg1 ;
-(MLNeuralNetworksCompileTimeParams *)updatableModelCompiledParams;
-(void)setUpdatableModelCompiledParams:(MLNeuralNetworksCompileTimeParams *)arg1 ;
-(int)precision;
-(void)setPrecision:(int)arg1 ;
-(void)setEngine:(int)arg1 ;
-(map<std::__1::basic_string<char>)optionalInputTypes;
-(void)setOptionalInputTypes:(map<std::__1::basic_string<char>)arg1 ;
@end

