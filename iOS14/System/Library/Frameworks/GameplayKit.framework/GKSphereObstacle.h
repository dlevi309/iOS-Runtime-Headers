/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKObstacle.h>

@interface GKSphereObstacle : GKObstacle {

	SphericalObstacle* _obstacle;

}

@property (assign,nonatomic) float radius; 
@property (assign,nonatomic)  position; 
+(id)obstacleWithRadius:(float)arg1 ;
-()position;
-(void)setRadius:(float)arg1 ;
-(id)init;
-(float)radius;
-(id)initWithRadius:(float)arg1 ;
-(void)setPosition:;
-(Obstacle*)obstacle;
@end

