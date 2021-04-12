/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSString, NSArray, NSDictionary;

@interface CHRecurrentNeuralNetwork : NSObject {

	NSString* _modelName;
	NSArray* _inputNames;
	NSDictionary* _featureCounts;
	NSArray* _outputNames;
	NSDictionary* _classCounts;
	MontrealNeuralNetworkRef __model;

}

@property (nonatomic,readonly) MontrealNeuralNetworkRef _model;                  //@synthesize _model=__model - In the implementation block
@property (nonatomic,retain,readonly) NSString * modelName;                      //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,retain,readonly) NSArray * inputNames;                      //@synthesize inputNames=_inputNames - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * featureCounts;              //@synthesize featureCounts=_featureCounts - In the implementation block
@property (nonatomic,retain,readonly) NSArray * outputNames;                     //@synthesize outputNames=_outputNames - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * classCounts;                //@synthesize classCounts=_classCounts - In the implementation block
-(void)dealloc;
-(MontrealNeuralNetworkRef)_model;
-(NSString *)modelName;
-(id)initWithModelName:(id)arg1 ;
-(NSArray *)inputNames;
-(NSDictionary *)featureCounts;
-(BOOL)_recursivelyPredictProbabilitiesForDrawing:(id)arg1 features:(vector<float, std::__1::allocator<float> >*)arg2 pointRange:(NSRange)arg3 modelInputName:(id)arg4 modelOutputNames:(id)arg5 probabilities:(vector<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > >, std::__1::allocator<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > > >*)arg6 probabilityPredictionBlock:(/*^block*/id)arg7 error:(id*)arg8 ;
-(id)normalizedDrawing:(id)arg1 minimumDrawingSize:(CGSize)arg2 interpolationDistance:(double)arg3 outputPointMap:(vector<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > >, std::__1::allocator<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > > >Ref)arg4 ;
-(vector<float, std::__1::allocator<float> >*)_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id*)arg4 ;
-(NSArray *)outputNames;
-(NSDictionary *)classCounts;
@end

