/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLDepthStencilDescriptor.h>

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {

	MTLDepthStencilDescriptorPrivate _private;

}

@property (readonly) const MTLDepthStencilDescriptorPrivate* depthStencilPrivate; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isDepthWriteEnabled;
-(void)setFrontFaceStencil:(id)arg1 ;
-(id)description;
-(id)backFaceStencil;
-(void)setBackFaceStencil:(id)arg1 ;
-(unsigned long long)depthCompareFunction;
-(unsigned long long)hash;
-(id)frontFaceStencil;
-(void)setDepthWriteEnabled:(BOOL)arg1 ;
-(void)setLabel:(id)arg1 ;
-(void)setDepthCompareFunction:(unsigned long long)arg1 ;
-(const MTLDepthStencilDescriptorPrivate*)depthStencilPrivate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

