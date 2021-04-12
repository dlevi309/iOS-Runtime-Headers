/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLAccelerationStructureGeometryDescriptor.h>

@protocol MTLBuffer;
@interface MTLAccelerationStructureBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor {

	id<MTLBuffer> _boundingBoxBuffer;
	unsigned long long _boundingBoxBufferOffset;
	unsigned long long _boundingBoxStride;
	unsigned long long _boundingBoxCount;

}

@property (nonatomic,retain) id<MTLBuffer> boundingBoxBuffer;                         //@synthesize boundingBoxBuffer=_boundingBoxBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long boundingBoxBufferOffset;              //@synthesize boundingBoxBufferOffset=_boundingBoxBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long boundingBoxStride;                    //@synthesize boundingBoxStride=_boundingBoxStride - In the implementation block
@property (assign,nonatomic) unsigned long long boundingBoxCount;                     //@synthesize boundingBoxCount=_boundingBoxCount - In the implementation block
+(id)descriptor;
-(id)init;
-(id<MTLBuffer>)boundingBoxBuffer;
-(void)setBoundingBoxBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)boundingBoxBufferOffset;
-(void)setBoundingBoxBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)boundingBoxStride;
-(void)setBoundingBoxStride:(unsigned long long)arg1 ;
-(unsigned long long)boundingBoxCount;
-(unsigned long long)hash;
-(void)setBoundingBoxCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

