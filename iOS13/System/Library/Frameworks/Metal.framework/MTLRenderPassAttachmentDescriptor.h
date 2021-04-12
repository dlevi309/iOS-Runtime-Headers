/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic,retain) id<MTLTexture> texture; 
@property (assign,nonatomic) unsigned long long level; 
@property (assign,nonatomic) unsigned long long slice; 
@property (assign,nonatomic) unsigned long long depthPlane; 
@property (nonatomic,retain) id<MTLTexture> resolveTexture; 
@property (assign,nonatomic) unsigned long long resolveLevel; 
@property (assign,nonatomic) unsigned long long resolveSlice; 
@property (assign,nonatomic) unsigned long long resolveDepthPlane; 
@property (assign,nonatomic) unsigned long long loadAction; 
@property (assign,nonatomic) unsigned long long storeAction; 
@property (assign,nonatomic) unsigned long long storeActionOptions; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

