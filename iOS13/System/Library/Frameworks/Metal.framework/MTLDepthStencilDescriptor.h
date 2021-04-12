/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLStencilDescriptor, NSString;

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>

@property (readonly) const MTLDepthStencilDescriptorPrivate* depthStencilPrivate; 
@property (assign,nonatomic) unsigned long long depthCompareFunction; 
@property (assign,getter=isDepthWriteEnabled,nonatomic) BOOL depthWriteEnabled; 
@property (nonatomic,copy) MTLStencilDescriptor * frontFaceStencil; 
@property (nonatomic,copy) MTLStencilDescriptor * backFaceStencil; 
@property (nonatomic,copy) NSString * label; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

