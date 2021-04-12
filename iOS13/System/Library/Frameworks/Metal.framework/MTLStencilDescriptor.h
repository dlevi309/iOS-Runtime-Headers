/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLStencilDescriptor : NSObject <NSCopying>

@property (readonly) const MTLStencilDescriptorPrivate* stencilPrivate; 
@property (assign,nonatomic) unsigned long long stencilCompareFunction; 
@property (assign,nonatomic) unsigned long long stencilFailureOperation; 
@property (assign,nonatomic) unsigned long long depthFailureOperation; 
@property (assign,nonatomic) unsigned long long depthStencilPassOperation; 
@property (assign,nonatomic) unsigned readMask; 
@property (assign,nonatomic) unsigned writeMask; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

