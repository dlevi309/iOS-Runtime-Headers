/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@interface MTLIndirectCommandBufferDescriptor : NSObject

@property (assign,nonatomic) unsigned long long commandTypes; 
@property (assign,nonatomic) BOOL inheritPipelineState; 
@property (assign,nonatomic) BOOL inheritBuffers; 
@property (assign,nonatomic) unsigned long long maxVertexBufferBindCount; 
@property (assign,nonatomic) unsigned long long maxFragmentBufferBindCount; 
@property (assign,nonatomic) unsigned long long maxKernelBufferBindCount; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

