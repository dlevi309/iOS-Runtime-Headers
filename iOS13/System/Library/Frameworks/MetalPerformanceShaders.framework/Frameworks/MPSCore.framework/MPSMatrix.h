/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


#import <MPSCore/MPSCore-Structs.h>
@interface MPSMatrix : NSObject {

	MPSDevice* _device;
	unsigned long long _rows;
	unsigned long long _columns;
	unsigned long long _matrices;
	unsigned long long _rowBytes;
	unsigned long long _matrixBytes;
	unsigned long long _offset;
	unsigned _dataType;
	MPSAutoBuffer* _buffer;

}

@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long rows;                     //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) unsigned long long matrices;                 //@synthesize matrices=_matrices - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                           //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long rowBytes;                 //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long matrixBytes;              //@synthesize matrixBytes=_matrixBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> data; 
-(void)incrementReadCount;
-(void)resetReadCount;
-(void)decrementReadCount;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id<MTLBuffer>)data;
-(id<MTLDevice>)device;
-(unsigned)dataType;
-(unsigned long long)rows;
-(unsigned long long)offset;
-(unsigned long long)columns;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)rowBytes;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(id)ndArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(unsigned long long)resourceSize;
-(unsigned long long)matrices;
-(unsigned long long)matrixBytes;
-(id)initPrivateWithDescriptor:(id)arg1 device:(MPSDevice*)arg2 ;
-(BOOL)canAliasWithNDArrayDescriptor:(id)arg1 ;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 descriptor:(id)arg3 ;
-(BOOL)doesAliasWithNDArray:(id)arg1 ;
@end

