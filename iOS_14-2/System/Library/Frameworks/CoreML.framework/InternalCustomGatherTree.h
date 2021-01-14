/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLCustomLayer.h>

@interface InternalCustomGatherTree : NSObject <MLCustomLayer> {

	vector<int, std::__1::allocator<int> >* _shape;

}

@property (nonatomic,readonly) vector<int shape;              //@synthesize shape=_shape - In the implementation block
-(vector<int)shape;
-(BOOL)setWeightData:(id)arg1 error:(id*)arg2 ;
-(id)initWithParameterDictionary:(id)arg1 error:(id*)arg2 ;
-(id)outputShapesForInputShapes:(id)arg1 error:(id*)arg2 ;
-(BOOL)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id*)arg3 ;
@end

