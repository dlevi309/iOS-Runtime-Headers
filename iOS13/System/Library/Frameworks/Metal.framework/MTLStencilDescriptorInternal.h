/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLStencilDescriptor.h>

@interface MTLStencilDescriptorInternal : MTLStencilDescriptor {

	MTLStencilDescriptorPrivate _private;

}

@property (readonly) const MTLStencilDescriptorPrivate* stencilPrivate; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWriteMask:(unsigned)arg1 ;
-(unsigned)writeMask;
-(void)setStencilFailureOperation:(unsigned long long)arg1 ;
-(void)setDepthFailureOperation:(unsigned long long)arg1 ;
-(void)setDepthStencilPassOperation:(unsigned long long)arg1 ;
-(void)setStencilCompareFunction:(unsigned long long)arg1 ;
-(void)setReadMask:(unsigned)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLStencilDescriptorPrivate*)stencilPrivate;
-(unsigned long long)stencilCompareFunction;
-(unsigned long long)stencilFailureOperation;
-(unsigned long long)depthFailureOperation;
-(unsigned long long)depthStencilPassOperation;
-(unsigned)readMask;
@end

