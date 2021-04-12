/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCounterSampleBuffer.h>

@class MTLCounterSampleBufferDescriptor;

@interface MTLDebugCounterSampleBuffer : MTLToolsCounterSampleBuffer {

	MTLCounterSampleBufferDescriptor* _descriptor;
	unsigned long long _storageMode;

}

@property (nonatomic,readonly) MTLCounterSampleBufferDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long storageMode;                             //@synthesize storageMode=_storageMode - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)storageMode;
-(MTLCounterSampleBufferDescriptor *)descriptor;
-(id)description;
-(void)dealloc;
-(id)resolveCounterRange:(NSRange)arg1 ;
-(id)initWithCounterSampleBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end

