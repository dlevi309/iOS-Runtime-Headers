/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKPhysicsGrid : NSObject {

	float _width;
	float _height;

}

@property (nonatomic,readonly) float width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) float height;              //@synthesize height=_height - In the implementation block
+(id)vectorGridFromTexture:(id)arg1 accuracy:(float)arg2 ;
+(id)gridFromTexture:(id)arg1 alphaThreshold:(float)arg2 accuracy:(float)arg3 ;
+(id)gridFromOccupancyArray:(const char*)arg1 width:(int)arg2 height:(int)arg3 ;
-(float)width;
-(float)height;
-(void)spritesFromGrid:(id)arg1 gridSize:(CGSize)arg2 zPosition:(double)arg3 edgeColor:(id)arg4 interiorColor:(id)arg5 spriteSize:(CGSize)arg6 physicsBody:(id)arg7 ;
-(void)spritesFromGrid:(id)arg1 xDivisions:(int)arg2 zPosition:(double)arg3 spriteSize:(CGSize)arg4 texture:(id)arg5 physicsBody:(id)arg6 ;
@end

