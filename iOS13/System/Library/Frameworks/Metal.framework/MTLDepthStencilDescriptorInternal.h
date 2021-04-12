/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLDepthStencilDescriptor.h>

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {

	MTLDepthStencilDescriptorPrivate _private;

}

@property (readonly) const MTLDepthStencilDescriptorPrivate* depthStencilPrivate; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(void)setDepthCompareFunction:(unsigned long long)arg1 ;
-(void)setDepthWriteEnabled:(BOOL)arg1 ;
-(void)setFrontFaceStencil:(id)arg1 ;
-(void)setBackFaceStencil:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)frontFaceStencil;
-(id)backFaceStencil;
-(const MTLDepthStencilDescriptorPrivate*)depthStencilPrivate;
-(unsigned long long)depthCompareFunction;
-(BOOL)isDepthWriteEnabled;
@end

