/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHRecurrentNeuralNetwork.h>

@class NSString;

@interface CHCutpointModel : CHRecurrentNeuralNetwork {

	long long _distanceLeftFeatureIndex;
	long long _distanceRightFeatureIndex;
	long long _sinAngleLeftFeatureIndex;
	long long _cosAngleLeftFeatureIndex;
	long long _sinAngleRightFeatureIndex;
	long long _cosAngleRightFeatureIndex;
	long long _endpointFeatureIndex;
	NSString* _directionalFeaturesInputName;
	NSString* _cutpointProbabilityOutputName;

}

@property (nonatomic,readonly) long long distanceLeftFeatureIndex;                           //@synthesize distanceLeftFeatureIndex=_distanceLeftFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long distanceRightFeatureIndex;                          //@synthesize distanceRightFeatureIndex=_distanceRightFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long sinAngleLeftFeatureIndex;                           //@synthesize sinAngleLeftFeatureIndex=_sinAngleLeftFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long cosAngleLeftFeatureIndex;                           //@synthesize cosAngleLeftFeatureIndex=_cosAngleLeftFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long sinAngleRightFeatureIndex;                          //@synthesize sinAngleRightFeatureIndex=_sinAngleRightFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long cosAngleRightFeatureIndex;                          //@synthesize cosAngleRightFeatureIndex=_cosAngleRightFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long endpointFeatureIndex;                               //@synthesize endpointFeatureIndex=_endpointFeatureIndex - In the implementation block
@property (nonatomic,retain,readonly) NSString * directionalFeaturesInputName;               //@synthesize directionalFeaturesInputName=_directionalFeaturesInputName - In the implementation block
@property (nonatomic,retain,readonly) NSString * cutpointProbabilityOutputName;              //@synthesize cutpointProbabilityOutputName=_cutpointProbabilityOutputName - In the implementation block
-(void)dealloc;
-(long long)maxSequenceLength;
-(id)initWithModelName:(id)arg1 ;
-(id)detectCutpointsInDrawing:(id)arg1 minimumDrawingSize:(CGSize)arg2 excludingStrokeIDs:(const set<long, std::__1::less<long>, std::__1::allocator<long> >*)arg3 ;
-(long long)windowOverlap;
-(vector<float, std::__1::allocator<float> >*)_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id*)arg4 ;
-(NSString *)directionalFeaturesInputName;
-(NSString *)cutpointProbabilityOutputName;
-(vector<CHCutpointCandidate, std::__1::allocator<CHCutpointCandidate> >*)_detectedCutpoints:(vector<double, std::__1::allocator<double> >*)arg1 resampledDrawing:(id)arg2 ;
-(id)_remappedCutpoints:(vector<CHCutpointCandidate, std::__1::allocator<CHCutpointCandidate> >*)arg1 pointMap:(vector<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > >, std::__1::allocator<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > > >*)arg2 originalDrawing:(id)arg3 excludingStrokeIDs:(const set<long, std::__1::less<long>, std::__1::allocator<long> >*)arg4 ;
-(long long)distanceLeftFeatureIndex;
-(long long)distanceRightFeatureIndex;
-(long long)sinAngleLeftFeatureIndex;
-(long long)cosAngleLeftFeatureIndex;
-(long long)sinAngleRightFeatureIndex;
-(long long)cosAngleRightFeatureIndex;
-(long long)endpointFeatureIndex;
@end

