/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHRecurrentNeuralNetwork.h>

@class NSString;

@interface CHStrokeTransitionModel : CHRecurrentNeuralNetwork {

	long long _distanceFeatureIndex;
	long long _sinAlphaFeatureIndex;
	long long _cosAlphaFeatureIndex;
	long long _gapFeatureIndex;
	NSString* _directionalFeaturesInputName;
	NSString* _spaceProbabilityOutputName;
	NSString* _charBoundaryProbabilityOutputName;
	NSString* _delayedStrokeProbabilityOutputName;

}

@property (nonatomic,readonly) long long distanceFeatureIndex;                                    //@synthesize distanceFeatureIndex=_distanceFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long sinAlphaFeatureIndex;                                    //@synthesize sinAlphaFeatureIndex=_sinAlphaFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long cosAlphaFeatureIndex;                                    //@synthesize cosAlphaFeatureIndex=_cosAlphaFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long gapFeatureIndex;                                         //@synthesize gapFeatureIndex=_gapFeatureIndex - In the implementation block
@property (nonatomic,retain,readonly) NSString * directionalFeaturesInputName;                    //@synthesize directionalFeaturesInputName=_directionalFeaturesInputName - In the implementation block
@property (nonatomic,retain,readonly) NSString * spaceProbabilityOutputName;                      //@synthesize spaceProbabilityOutputName=_spaceProbabilityOutputName - In the implementation block
@property (nonatomic,retain,readonly) NSString * charBoundaryProbabilityOutputName;               //@synthesize charBoundaryProbabilityOutputName=_charBoundaryProbabilityOutputName - In the implementation block
@property (nonatomic,retain,readonly) NSString * delayedStrokeProbabilityOutputName;              //@synthesize delayedStrokeProbabilityOutputName=_delayedStrokeProbabilityOutputName - In the implementation block
-(void)dealloc;
-(long long)maxSequenceLength;
-(id)initWithModelName:(id)arg1 ;
-(BOOL)classifyStrokesInDrawing:(id)arg1 minimumDrawingSize:(CGSize)arg2 outDelayedStrokeProbabilities:(vector<double, std::__1::allocator<double> >*)arg3 outSpaceProbabilities:(vector<double, std::__1::allocator<double> >*)arg4 outCharBoundaryProbabilities:(vector<double, std::__1::allocator<double> >*)arg5 ;
-(set<long, std::__1::less<long>, std::__1::allocator<long> >*)detectedDelayedStrokes:(const vector<double, std::__1::allocator<double> >*)arg1 ;
-(long long)windowOverlap;
-(vector<float, std::__1::allocator<float> >*)_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id*)arg4 ;
-(NSString *)directionalFeaturesInputName;
-(NSString *)spaceProbabilityOutputName;
-(NSString *)charBoundaryProbabilityOutputName;
-(NSString *)delayedStrokeProbabilityOutputName;
-(long long)distanceFeatureIndex;
-(long long)sinAlphaFeatureIndex;
-(long long)cosAlphaFeatureIndex;
-(long long)gapFeatureIndex;
@end

