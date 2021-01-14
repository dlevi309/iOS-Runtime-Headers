/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSString;

@interface CHRecurrentNeuralNetwork : NSObject {

	NSString* _modelName;

}

@property (nonatomic,retain,readonly) NSString * modelName;              //@synthesize modelName=_modelName - In the implementation block
-(NSString *)modelName;
-(void)dealloc;
-(id)normalizedDrawing:(id)arg1 targetHeight:(double)arg2 minimumDrawingSize:(CGSize)arg3 interpolationDistance:(double)arg4 outScaleFactor:(double*)arg5 outputPointMap:(vector<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > >, std::__1::allocator<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > > >Ref)arg6 ;
-(id)initWithModelName:(id)arg1 ;
@end

