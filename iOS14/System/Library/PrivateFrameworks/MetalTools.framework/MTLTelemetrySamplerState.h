/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MTLSamplerDescriptor *)descriptor;
-(void)dealloc;
-(void)setSamplerStatsWithDescriptor:(id)arg1 telemetryStat:(MTLTelemetrySamplerStatRec*)arg2 ;
-(id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end

