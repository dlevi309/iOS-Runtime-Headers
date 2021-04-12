/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsSamplerState.h>

@class MTLSamplerDescriptor;

@interface MTLTelemetrySamplerState : MTLToolsSamplerState {

	BOOL isAniso;
	MTLSamplerDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MTLSamplerDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)dealloc;
-(MTLSamplerDescriptor *)descriptor;
-(void)setSamplerStatsWithDescriptor:(id)arg1 telemetryStat:(MTLTelemetrySamplerStatRec*)arg2 ;
-(id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end

