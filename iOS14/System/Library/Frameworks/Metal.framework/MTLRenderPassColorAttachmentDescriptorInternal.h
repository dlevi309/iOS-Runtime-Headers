/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptor.h>

@interface MTLRenderPassColorAttachmentDescriptorInternal : MTLRenderPassColorAttachmentDescriptor {

	MTLRenderPassAttachmentDescriptorPrivate _private;

}
+(id)attachmentDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)texture;
-(unsigned long long)resolveDepthPlane;
-(void)setResolveTexture:(id)arg1 ;
-(id)init;
-(void)setYInvert:(BOOL)arg1 ;
-(BOOL)yInvert;
-(const MTLRenderPassAttachmentDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)depthPlane;
-(void)setResolveDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)storeActionOptions;
-(unsigned long long)storeAction;
-(void)setStoreAction:(unsigned long long)arg1 ;
-(void)setDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)slice;
-(id)description;
-(unsigned long long)level;
-(unsigned long long)resolveLevel;
-(void)setTexture:(id)arg1 ;
-(void)setResolveLevel:(unsigned long long)arg1 ;
-(void)setStoreActionOptions:(unsigned long long)arg1 ;
-(SCD_Struct_MT93)clearColor;
-(unsigned long long)hash;
-(void)setResolveSlice:(unsigned long long)arg1 ;
-(void)setSlice:(unsigned long long)arg1 ;
-(void)setClearColor:(SCD_Struct_MT93)arg1 ;
-(unsigned long long)resolveSlice;
-(void)setLoadAction:(unsigned long long)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)resolveTexture;
-(unsigned long long)loadAction;
@end

