/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsSamplerState.h>

@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState {

	MTLSamplerDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MTLSamplerDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(id)newSamplerStateWithBaseObject:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLSamplerDescriptor *)descriptor;
-(id)description;
-(void)dealloc;
-(id)_initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end

