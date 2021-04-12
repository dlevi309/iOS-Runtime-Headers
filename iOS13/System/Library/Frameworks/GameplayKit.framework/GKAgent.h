/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKComponent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GKAgentDelegate;
@class GKBehavior;

@interface GKAgent : GKComponent <NSSecureCoding> {

	GKSimpleVehicle* _vehicle;
	id<GKAgentDelegate> _delegate;
	GKBehavior* _behavior;

}

@property (assign,nonatomic,__weak) id<GKAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKBehavior * behavior;                            //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) float mass; 
@property (assign,nonatomic) float radius; 
@property (assign,nonatomic) float speed; 
@property (assign,nonatomic) float maxAcceleration; 
@property (assign,nonatomic) float maxSpeed; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<GKAgentDelegate>)delegate;
-(void)setDelegate:(id<GKAgentDelegate>)arg1 ;
-(float)radius;
-(void)setRadius:(float)arg1 ;
-(float)mass;
-(void)setMass:(float)arg1 ;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(GKBehavior *)behavior;
-(void)setBehavior:(GKBehavior *)arg1 ;
-(float)maxSpeed;
-(void)setMaxSpeed:(float)arg1 ;
-(GKSimpleVehicle*)vehicle;
-(void)setMaxAcceleration:(float)arg1 ;
-(float)maxAcceleration;
-(1)position3;
-(1)velocity3;
-(3)steerForSeek:;
-(3)steerForFlee:;
-(3)steerToAvoidObstacles:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2 ;
-(3)steerToAvoidAgents:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2 ;
-(3)steerForSeparation:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(3)steerForAlignment:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(3)steerForCohesion:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(2)steerForTargetSpeed:(float)arg1 ;
-(2)steerForWander:(double)arg1 speed:(float)arg2 ;
-(3)steerForIntercept:(id)arg1 maxPredictionTime:(double)arg2 ;
-(3)steerToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(BOOL)arg3 ;
-(3)steerToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2 ;
@end

