/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsDepthStencilState.h>

@class MTLDepthStencilDescriptor;

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState {

	MTLDepthStencilDescriptor* _descriptor;

}

@property (nonatomic,readonly) MTLDepthStencilDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)dealloc;
-(id)description;
-(MTLDepthStencilDescriptor *)descriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithBaseDepthStencilState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end

