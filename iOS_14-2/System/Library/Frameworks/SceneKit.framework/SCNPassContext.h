/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLDevice>)device;
-(id<MTLCommandBuffer>)commandBuffer;
-(id)inputTextureWithName:(id)arg1 ;
-(id)outputTextureWithName:(id)arg1 ;
@end

