/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKObstacle.h>

@interface GKCircleObstacle : GKObstacle {

	SphericalObstacle* _obstacle;

}

@property (assign,nonatomic) float radius; 
@property (assign,nonatomic)  position; 
+(id)obstacleWithRadius:(float)arg1 ;
-(id)init;
-()position;
-(float)radius;
-(void)setRadius:(float)arg1 ;
-(void)setPosition:;
-(id)initWithRadius:(float)arg1 ;
-(Obstacle*)obstacle;
@end

