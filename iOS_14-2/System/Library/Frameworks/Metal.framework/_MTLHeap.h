/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLObjectWithLabel.h>

@interface _MTLHeap : _MTLObjectWithLabel {

	unsigned long long _heapResourceOptions;
	long long _heapType;
	unsigned long long _gpuAddress;

}

@property (readonly) long long type; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (nonatomic,readonly) unsigned long long gpuAddress;                   //@synthesize gpuAddress=_gpuAddress - In the implementation block
-(unsigned long long)cpuCacheMode;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)storageMode;
-(id)description;
-(unsigned long long)gpuAddress;
-(long long)type;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)unfilteredResourceOptions;
-(id)initWithType:(long long)arg1 options:(unsigned long long)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 atOffset:(unsigned long long)arg2 ;
-(unsigned long long)resourceOptions;
@end

