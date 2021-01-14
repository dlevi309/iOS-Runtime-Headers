/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


#import <MPSCore/MPSCore-Structs.h>
@interface MPSNDArrayDescriptor : NSObject {

	 _dimensionLengths;
	 _sliceOffsets;
	 _sliceLengths;
	 _dimensionOrder;
	unsigned long long _numberOfDimensions;
	unsigned _dataType;
	MPSNDArrayDescriptor* _child;
	MPSNDArrayDescriptor* _parent;
	int _transitionOp;
	BOOL _preferPackedRows;

}

@property (assign,nonatomic) BOOL preferPackedRows;                              //@synthesize preferPackedRows=_preferPackedRows - In the implementation block
@property (assign,nonatomic) unsigned dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfDimensions;              //@synthesize numberOfDimensions=_numberOfDimensions - In the implementation block
+(id)descriptorWithDataType:(unsigned)arg1 dimensionCount:(unsigned long long)arg2 dimensionSizes:(unsigned long long*)arg3 ;
+(id)descriptorWithDataType:(unsigned)arg1 shape:(id)arg2 ;
+(id)descriptorWithDataType:(unsigned)arg1 dimensionSizes:(unsigned long long)arg2 ;
-(unsigned)dataType;
-(void)setDataType:(unsigned)arg1 ;
-(unique_ptr<const std::__1::vector<long, std::__1::allocator<long> >, std::__1::default_delete<const std::__1::vector<long, std::__1::allocator<long> > > >*)getShapeVector;
-(id)initWithDataType:(unsigned)arg1 dimensions:(unsigned long long)arg2 ;
-(unsigned long long)lengthOfDimension:(unsigned long long)arg1 ;
-(void)setLengthOfDimension:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(MPSDimensionSlice)sliceRangeForDimension:(unsigned long long)arg1 ;
-(void)sliceDimension:(unsigned long long)arg1 withSubrange:(MPSDimensionSlice)arg2 ;
-(void)permuteWithDimensionOrder:(unsigned long long*)arg1 ;
-(void)reshapeWithShape:(id)arg1 ;
-(void)reshapeWithDimensionCount:(unsigned long long)arg1 dimensionSizes:(unsigned long long*)arg2 ;
-(BOOL)preferPackedRows;
-(void)setPreferPackedRows:(BOOL)arg1 ;
-(id)getShape;
-(void)transposeDimension:(unsigned long long)arg1 withDimension:(unsigned long long)arg2 ;
-(1)dimensionOrder;
-(unsigned long long)numberOfDimensions;
-(void)setNumberOfDimensions:(unsigned long long)arg1 ;
-(void)dealloc;
@end

