/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SCNPhysicsContactDelegate;
@class SCNPhysicsContact, SCNScene, NSMutableArray, NSArray, NSMutableSet;

@interface SCNPhysicsWorld : NSObject <NSSecureCoding> {

	btDiscreteDynamicsWorld* _world;
	btOverlappingPairCallback* _ghostPairCallback;
	btVehicleRaycaster* _vehicleRayCaster;
	btC3DDebugDraw* _debugDrawer;
	c3dAether* _aether;
	BOOL _hasActiveFields;
	BOOL _firstSimulationDone;
	id<SCNPhysicsContactDelegate> _contactDelegate;
	SCNPhysicsContact* _contact;
	SCNScene* _scene;
	SCNVector3 _gravity;
	double _speed;
	double _scale;
	double _timeStep;
	NSMutableArray* _fields;
	double _elapsedTime;
	NSMutableArray* _behaviors;
	NSArray* _activeBehaviors;
	BOOL _activeBehaviorsValid;
	NSMutableSet* _bodies;

}

@property (assign,nonatomic) SCNVector3 gravity; 
@property (assign,nonatomic) double speed; 
@property (assign,nonatomic) double timeStep; 
@property (__weak) id<SCNPhysicsContactDelegate> contactDelegate; 
@property (nonatomic,readonly) NSArray * allBehaviors; 
+(BOOL)supportsSecureCoding;
-(id)scene;
-(void)setSpeed:(double)arg1 ;
-(void)setScene:(id)arg1 ;
-(BOOL)_isDefault;
-(double)speed;
-(id)initWithScene:(id)arg1 ;
-(btDynamicsWorld*)_handle;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)commonInit;
-(void)_step:(double)arg1 ;
-(void)removeAllBehaviors;
-(id<SCNPhysicsContactDelegate>)contactDelegate;
-(void)setContactDelegate:(id<SCNPhysicsContactDelegate>)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)addBehavior:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGravity:(SCNVector3)arg1 ;
-(void)removeBehavior:(id)arg1 ;
-(double)timeStep;
-(void)_reset;
-(void)setTimeStep:(double)arg1 ;
-(SCNVector3)gravity;
-(void)dealloc;
-(void)_postCommandWithBlock:(/*^block*/id)arg1 ;
-(c3dAether*)_aetherHandle;
-(void)_removeFieldFromWorld:(id)arg1 ;
-(void)_addFieldToWorld:(id)arg1 ;
-(void)_allowGhostObjects;
-(void)removePhysicsBody:(id)arg1 handle:(void*)arg2 ;
-(void)addPhysicsBody:(id)arg1 nodeRef:(C3DNodeRef)arg2 colGroup:(unsigned long long)arg3 colMask:(unsigned long long)arg4 colTest:(unsigned long long)arg5 ;
-(void)_preTick:(double)arg1 ;
-(void)wakeUpAllBodies;
-(BOOL)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3 ;
-(id)_rayTestWithSegmentFromPoint:(btVector3)arg1 toPoint:(btVector3)arg2 options:(id)arg3 ;
-(void)_createDynamicWorldIfNeeded;
-(void)_customEncodingOfSCNPhysicsWorld:(id)arg1 ;
-(void)_customDecodingOfSCNPhysicsWorld:(id)arg1 ;
-(void)_didDecodeSCNPhysicsWorld:(id)arg1 ;
-(id)_physicsContact;
-(void)sceneWillDie;
-(id)objectInAllBehaviorsAtIndex:(unsigned long long)arg1 ;
-(NSArray *)allBehaviors;
-(id)rayTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(id)contactTestBetweenBody:(id)arg1 andBody:(id)arg2 options:(id)arg3 ;
-(id)contactTestWithBody:(id)arg1 options:(id)arg2 ;
-(id)convexSweepTestWithShape:(id)arg1 fromTransform:(SCNMatrix4)arg2 toTransform:(SCNMatrix4)arg3 options:(id)arg4 ;
-(void)updateCollisionPairs;
-(BOOL)_needsRedraw;
-(void)enumerateBodiesUsingBlock:(/*^block*/id)arg1 ;
-(id)_findFieldAttachedToNode:(id)arg1 ;
-(void)_updatePhysicsFieldsTransforms;
-(btVehicleRaycaster*)_defaultVehicleRayCaster;
-(void)_drawDebugInAuthoringEnvironment:(void*)arg1 ;
@end

