/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLParallelRenderCommandEncoder.h>

@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder
-(void)endEncoding;
-(void)setLabel:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(unsigned long long)getType;
-(id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 ;
-(BOOL)isMemorylessRender;
@end

