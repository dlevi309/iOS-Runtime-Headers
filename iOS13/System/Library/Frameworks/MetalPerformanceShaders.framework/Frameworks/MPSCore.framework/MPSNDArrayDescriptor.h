/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (assign,nonatomic) unsigned dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfDimensions;              //@synthesize numberOfDimensions=_numberOfDimensions - In the implementation block
+(id)descriptorWithDataType:(unsigned)arg1 shape:(id)arg2 ;
+(id)descriptorWithDataType:(unsigned)arg1 dimensionSizes:(unsigned long long)arg2 ;
+(id)descriptorWithDataType:(unsigned)arg1 dimensionCount:(unsigned long long)arg2 dimensionSizes:(unsigned long long*)arg3 ;
-(void)dealloc;
-(unsigned)dataType;
-(unsigned long long)numberOfDimensions;
-(void)setNumberOfDimensions:(unsigned long long)arg1 ;
-(void)setDataType:(unsigned)arg1 ;
-(id)initWithDataType:(unsigned)arg1 dimensions:(unsigned long long)arg2 ;
-(unsigned long long)lengthOfDimension:(unsigned long long)arg1 ;
-(void)setLengthOfDimension:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(MPSDimensionSlice)sliceRangeForDimension:(unsigned long long)arg1 ;
-(void)sliceDimension:(unsigned long long)arg1 withSubrange:(MPSDimensionSlice)arg2 ;
-(void)transposeDimension:(unsigned long long)arg1 withDimension:(unsigned long long)arg2 ;
-(1)dimensionOrder;
-(void)reshapeWithShape:(id)arg1 ;
-(void)reshapeWithDimensionCount:(unsigned long long)arg1 dimensionSizes:(unsigned long long*)arg2 ;
@end

