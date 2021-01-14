/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) unsigned long long pixelFormat; 
@property (assign,getter=isBlendingEnabled,nonatomic) BOOL blendingEnabled; 
@property (assign,nonatomic) unsigned long long sourceRGBBlendFactor; 
@property (assign,nonatomic) unsigned long long destinationRGBBlendFactor; 
@property (assign,nonatomic) unsigned long long rgbBlendOperation; 
@property (assign,nonatomic) unsigned long long sourceAlphaBlendFactor; 
@property (assign,nonatomic) unsigned long long destinationAlphaBlendFactor; 
@property (assign,nonatomic) unsigned long long alphaBlendOperation; 
@property (assign,nonatomic) unsigned long long writeMask; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

