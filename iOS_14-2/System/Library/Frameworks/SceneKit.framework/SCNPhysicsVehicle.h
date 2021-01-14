/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, NSArray, SCNPhysicsWorld;

@interface SCNPhysicsVehicle : SCNPhysicsBehavior {

	SCNPhysicsBody* _chassisBody;
	NSArray* _wheels;
	SCNPhysicsWorld* _world;
	btRaycastVehicle* _vehicle;
	double _speedKmHour;

}

@property (nonatomic,readonly) double speedInKilometersPerHour; 
@property (nonatomic,readonly) NSArray * wheels; 
@property (nonatomic,readonly) SCNPhysicsBody * chassisBody; 
+(BOOL)supportsSecureCoding;
+(id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(NSArray *)wheels;
-(void)_update;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)physicsWorld;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(void)_handleCreateIfNeeded:(BOOL)arg1 ;
-(BOOL)hasReferenceToPhysicsBody:(id)arg1 ;
-(btRaycastVehicle*)btVehicle;
-(void)applyEngineForce:(double)arg1 forWheelAtIndex:(long long)arg2 ;
-(void)setSteeringAngle:(double)arg1 forWheelAtIndex:(long long)arg2 ;
-(void)applyBrakingForce:(double)arg1 forWheelAtIndex:(long long)arg2 ;
-(double)speedInKilometersPerHour;
-(SCNPhysicsBody *)chassisBody;
-(void)_initializeWheelsArray;
-(id)initWithChassisBody:(id)arg1 wheels:(id)arg2 ;
-(void)_createWheel:(id)arg1 ;
-(id)wheelAtIndex:(unsigned long long)arg1 ;
-(void)_customDecodingOfSCNPhysicsVehicle:(id)arg1 ;
@end

