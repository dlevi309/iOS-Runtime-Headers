/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsDepthStencilState.h>

@class MTLDepthStencilDescriptor;

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState {

	unsigned char _attachmentWriteMask;
	MTLDepthStencilDescriptor* _descriptor;

}

@property (nonatomic,readonly) MTLDepthStencilDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned char attachmentWriteMask;                   //@synthesize attachmentWriteMask=_attachmentWriteMask - In the implementation block
+(id)newDepthStencilStateWithBaseObject:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLDepthStencilDescriptor *)descriptor;
-(id)description;
-(void)dealloc;
-(id)_initWithBaseDepthStencilState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(unsigned char)attachmentWriteMask;
@end

