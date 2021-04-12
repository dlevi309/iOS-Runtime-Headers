/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(id<MTLBuffer>)sharedMetalBuffer;
-(FigWiredMemory *)sharedRegWarpBuffer;
-(int)ensureAllocatedSync;
-(int)_allocateSharedMetalBufferWithSizeInMB:(unsigned long long)arg1 ;
-(id)initWithSharedMetalBufferLengthInMB:(unsigned long long)arg1 sharedRegWarpBufferLengthInMB:(unsigned long long)arg2 ;
-(unsigned long long)sharedMetalBufferLengthInMB;
-(unsigned long long)sharedRegWarpBufferLengthInMB;
@end

