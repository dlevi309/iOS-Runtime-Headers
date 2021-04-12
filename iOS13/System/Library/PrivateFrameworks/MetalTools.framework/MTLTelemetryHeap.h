/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsHeap.h>

@class MTLTelemetryDevice;

@interface MTLTelemetryHeap : MTLToolsHeap {

	MTLTelemetryDevice* _telemetryDevice;

}

@property (nonatomic,readonly) MTLTelemetryDevice * telemetryDevice;              //@synthesize telemetryDevice=_telemetryDevice - In the implementation block
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)initWithHeap:(id)arg1 descriptor:(id)arg2 device:(id)arg3 ;
-(MTLTelemetryDevice *)telemetryDevice;
@end

