/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsSamplerState.h>

@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState {

	MTLSamplerDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MTLSamplerDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)dealloc;
-(id)description;
-(MTLSamplerDescriptor *)descriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end

