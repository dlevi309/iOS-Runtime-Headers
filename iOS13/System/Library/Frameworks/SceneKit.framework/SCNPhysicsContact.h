/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNPhysicsContact : NSObject {

	SCNNode* _nodeA;
	SCNNode* _nodeB;
	SCNVector3 _contactPoint;
	SCNVector3 _contactNormal;
	double _collisionImpulse;
	double _distance;
	double _fraction;
	long long _updateCount;

}

@property (nonatomic,readonly) SCNNode * nodeA; 
@property (nonatomic,readonly) SCNNode * nodeB; 
@property (nonatomic,readonly) SCNVector3 contactPoint; 
@property (nonatomic,readonly) SCNVector3 contactNormal; 
@property (nonatomic,readonly) double collisionImpulse; 
@property (nonatomic,readonly) double penetrationDistance; 
@property (nonatomic,readonly) double sweepTestFraction; 
+(id)_contactWithManifold:(const btPersistentManifold*)arg1 index:(long long)arg2 ;
-(void)dealloc;
-(id)description;
-(SCNVector3)contactPoint;
-(void)_setupWithManifold:(const btPersistentManifold*)arg1 index:(long long)arg2 point:(const btManifoldPoint*)arg3 ;
-(void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(SCNVector3)arg3 collisionImpulse:(SCNVector3)arg4 distance:(double)arg5 hitFraction:(double)arg6 ;
-(void)_fillNodeA:(id)arg1 nodeB:(id)arg2 ;
-(SCNNode *)nodeA;
-(SCNNode *)nodeB;
-(SCNVector3)contactNormal;
-(double)collisionImpulse;
-(double)penetrationDistance;
-(double)sweepTestFraction;
-(void)_prepareUpdate;
-(BOOL)_shouldPostUpdate;
@end

