/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLCustomLayer.h>

@interface InternalCustomTileLike : NSObject <MLCustomLayer> {

	unsigned long long _inputRank;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _multiples;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _inputShape;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _outputShape;

}

@property (nonatomic,readonly) unsigned long long inputRank;                  //@synthesize inputRank=_inputRank - In the implementation block
@property (nonatomic,readonly) vector<unsigned long multiples;                //@synthesize multiples=_multiples - In the implementation block
@property (nonatomic,readonly) vector<unsigned long inputShape;               //@synthesize inputShape=_inputShape - In the implementation block
@property (nonatomic,readonly) vector<unsigned long outputShape;              //@synthesize outputShape=_outputShape - In the implementation block
-(vector<unsigned long)inputShape;
-(unsigned long long)inputRank;
-(vector<unsigned long)multiples;
-(vector<unsigned long)outputShape;
-(BOOL)setWeightData:(id)arg1 error:(id*)arg2 ;
-(id)initWithParameterDictionary:(id)arg1 error:(id*)arg2 ;
-(id)outputShapesForInputShapes:(id)arg1 error:(id*)arg2 ;
-(BOOL)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id*)arg3 ;
@end

