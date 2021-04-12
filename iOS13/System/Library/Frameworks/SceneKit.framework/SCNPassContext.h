/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNPassContext : NSObject {

	SCD_Struct_SC40* _context;

}

@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) id<MTLCommandBuffer> commandBuffer; 
@property (nonatomic,readonly) id<MTLDevice> device; 
-(double)time;
-(id<MTLDevice>)device;
-(id<MTLCommandBuffer>)commandBuffer;
-(id<MTLCommandQueue>)commandQueue;
-(id)inputTextureWithName:(id)arg1 ;
-(id)outputTextureWithName:(id)arg1 ;
@end

