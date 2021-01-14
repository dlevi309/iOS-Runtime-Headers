/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLBVHGeometryDescriptor.h>

@protocol MTLBuffer;
@interface MTLBVHBoundingBoxGeometryDescriptor : MTLBVHGeometryDescriptor {

	id<MTLBuffer> _boundingBoxBuffer;
	unsigned long long _boundingBoxBufferOffset;
	unsigned long long _boundingBoxStride;

}

@property (nonatomic,retain) id<MTLBuffer> boundingBoxBuffer;                         //@synthesize boundingBoxBuffer=_boundingBoxBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long boundingBoxBufferOffset;              //@synthesize boundingBoxBufferOffset=_boundingBoxBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long boundingBoxStride;                    //@synthesize boundingBoxStride=_boundingBoxStride - In the implementation block
-(id<MTLBuffer>)boundingBoxBuffer;
-(void)setBoundingBoxBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)boundingBoxBufferOffset;
-(void)setBoundingBoxBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)boundingBoxStride;
-(void)setBoundingBoxStride:(unsigned long long)arg1 ;
-(unsigned long long)primitiveType;
-(void)dealloc;
@end

