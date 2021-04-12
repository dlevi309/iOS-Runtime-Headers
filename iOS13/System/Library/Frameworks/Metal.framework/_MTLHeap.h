/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLObjectWithLabel.h>

@interface _MTLHeap : _MTLObjectWithLabel {

	unsigned long long _heapResourceOptions;
	long long _heapType;

}

@property (readonly) long long type; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
-(id)init;
-(id)description;
-(long long)type;
-(unsigned long long)storageMode;
-(unsigned long long)resourceOptions;
-(unsigned long long)cpuCacheMode;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)unfilteredResourceOptions;
-(id)initWithType:(long long)arg1 options:(unsigned long long)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 atOffset:(unsigned long long)arg2 ;
@end

