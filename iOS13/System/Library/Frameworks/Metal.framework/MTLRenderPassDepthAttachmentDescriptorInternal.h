/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDepthAttachmentDescriptor.h>

@interface MTLRenderPassDepthAttachmentDescriptorInternal : MTLRenderPassDepthAttachmentDescriptor {

	MTLRenderPassAttachmentDescriptorPrivate _private;

}
+(id)attachmentDescriptor;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)slice;
-(unsigned long long)level;
-(void)setTexture:(id)arg1 ;
-(void)setStoreAction:(unsigned long long)arg1 ;
-(void)setLoadAction:(unsigned long long)arg1 ;
-(id)texture;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)setClearDepth:(double)arg1 ;
-(unsigned long long)storeAction;
-(void)setResolveTexture:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPassAttachmentDescriptorPrivate*)_descriptorPrivate;
-(id)resolveTexture;
-(void)setSlice:(unsigned long long)arg1 ;
-(void)setDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)depthPlane;
-(void)setResolveLevel:(unsigned long long)arg1 ;
-(unsigned long long)resolveLevel;
-(void)setResolveSlice:(unsigned long long)arg1 ;
-(unsigned long long)resolveSlice;
-(void)setResolveDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)resolveDepthPlane;
-(void)setYInvert:(BOOL)arg1 ;
-(BOOL)yInvert;
-(unsigned long long)loadAction;
-(unsigned long long)storeActionOptions;
-(void)setStoreActionOptions:(unsigned long long)arg1 ;
-(double)clearDepth;
-(unsigned long long)depthResolveFilter;
-(void)setDepthResolveFilter:(unsigned long long)arg1 ;
@end

