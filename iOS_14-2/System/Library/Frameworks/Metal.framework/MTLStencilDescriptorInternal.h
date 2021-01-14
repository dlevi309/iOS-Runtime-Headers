/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLStencilDescriptor.h>

@interface MTLStencilDescriptorInternal : MTLStencilDescriptor {

	MTLStencilDescriptorPrivate _private;

}

@property (readonly) const MTLStencilDescriptorPrivate* stencilPrivate; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)init;
-(unsigned)writeMask;
-(unsigned long long)stencilFailureOperation;
-(unsigned)readMask;
-(unsigned long long)stencilCompareFunction;
-(void)setDepthStencilPassOperation:(unsigned long long)arg1 ;
-(unsigned long long)depthFailureOperation;
-(id)description;
-(unsigned long long)depthStencilPassOperation;
-(void)setReadMask:(unsigned)arg1 ;
-(unsigned long long)hash;
-(void)setStencilCompareFunction:(unsigned long long)arg1 ;
-(const MTLStencilDescriptorPrivate*)stencilPrivate;
-(void)setDepthFailureOperation:(unsigned long long)arg1 ;
-(void)setStencilFailureOperation:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWriteMask:(unsigned)arg1 ;
@end

