/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKObstacle.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GKPolygonObstacle : GKObstacle <NSSecureCoding> {

	GKCPolygonObstacle* _cPolygonObstacle;

}

@property (nonatomic,readonly) unsigned long long vertexCount; 
+(BOOL)supportsSecureCoding;
+(id)obstacleWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(2)vertexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)vertexCount;
-(id)initWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(GKCPolygonObstacle*)cPolygonObstacle;
-(Obstacle*)obstacle;
-(void)setCPolygonObstacle:(GKCPolygonObstacle*)arg1 ;
@end

