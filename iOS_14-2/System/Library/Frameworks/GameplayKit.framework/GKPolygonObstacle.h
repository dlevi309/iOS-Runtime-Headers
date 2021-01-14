/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)vertexCount;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(2)vertexAtIndex:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(GKCPolygonObstacle*)cPolygonObstacle;
-(Obstacle*)obstacle;
-(void)setCPolygonObstacle:(GKCPolygonObstacle*)arg1 ;
@end

