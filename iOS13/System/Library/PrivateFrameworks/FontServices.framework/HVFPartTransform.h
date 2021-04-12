/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
*/


#import <libhvf.dylib/libhvf.dylib-Structs.h>
@interface HVFPartTransform : NSObject {

	PartTransform* _transform;
	vector<std::__1::tuple<unsigned long, double>, std::__1::allocator<std::__1::tuple<unsigned long, double> > >* axisValues;

}

@property (readonly) const PartTransform* transform; 
@property (assign,nonatomic) CGVector translation; 
@property (assign,nonatomic) double drotation; 
-(const PartTransform*)transform;
-(CGVector)translation;
-(void)setTranslation:(CGVector)arg1 ;
-(double)drotation;
-(void)setDrotation:(double)arg1 ;
-(unsigned long long)countOfAxisValues;
-(id)objectInAxisValuesAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inAxisValuesAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromAxisValuesAtIndex:(unsigned long long)arg1 ;
@end

