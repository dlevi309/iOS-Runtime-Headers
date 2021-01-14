/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol MTLBuffer;
@class FigWiredMemory;

@interface FigStillImageSharedProcessingResources : NSObject {

	unsigned long long _sharedMetalBufferLengthInMB;
	unsigned long long _sharedRegWarpBufferLengthInMB;
	BOOL _resourcesAllocated;
	int _resourceAllocationError;
	id<MTLBuffer> _sharedMetalBuffer;
	FigWiredMemory* _sharedRegWarpBuffer;

}

@property (nonatomic,readonly) unsigned long long sharedMetalBufferLengthInMB;                //@synthesize sharedMetalBufferLengthInMB=_sharedMetalBufferLengthInMB - In the implementation block
@property (nonatomic,readonly) unsigned long long sharedRegWarpBufferLengthInMB;              //@synthesize sharedRegWarpBufferLengthInMB=_sharedRegWarpBufferLengthInMB - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> sharedMetalBuffer; 
@property (nonatomic,readonly) FigWiredMemory * sharedRegWarpBuffer; 
+(void)initialize;
-(id)description;
-(int)_allocateSharedMetalBufferWithSizeInMB:(unsigned long long)arg1 ;
-(id)initWithSharedMetalBufferLengthInMB:(unsigned long long)arg1 sharedRegWarpBufferLengthInMB:(unsigned long long)arg2 ;
-(int)ensureAllocatedSync;
-(id<MTLBuffer>)sharedMetalBuffer;
-(FigWiredMemory *)sharedRegWarpBuffer;
-(unsigned long long)sharedMetalBufferLengthInMB;
-(unsigned long long)sharedRegWarpBufferLengthInMB;
-(void)dealloc;
@end

