/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SKPhysicsContactDelegate;
@interface SKPhysicsWorld : NSObject <NSSecureCoding> {

	double speed;
	id<SKPhysicsContactDelegate> _contactDelegate;
	CGVector _gravity;

}

@property (assign,nonatomic) CGVector gravity;                                          //@synthesize gravity=_gravity - In the implementation block
@property (assign,nonatomic) double speed; 
@property (assign,nonatomic) id<SKPhysicsContactDelegate> contactDelegate;              //@synthesize contactDelegate=_contactDelegate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(id)fields;
-(double)speed;
-(void)encodeWithCoder:(id)arg1 ;
-(void)removeJoint:(id)arg1 ;
-(void)addBody:(id)arg1 ;
-(id)bodies;
-(void)addJoint:(id)arg1 ;
-(id<SKPhysicsContactDelegate>)contactDelegate;
-(void)setContactDelegate:(id<SKPhysicsContactDelegate>)arg1 ;
-(void)enumerateBodiesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeBody:(id)arg1 ;
-(void)setGravity:(CGVector)arg1 ;
-(CGVector)gravity;
-(void)removeAllJoints;
-(void)removeAllBodies;
-(BOOL)hasBodies;
-(BOOL)hasFields;
-(void)enumerateBodiesAtPoint:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateBodiesAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)bodyAtPoint:(CGPoint)arg1 ;
-(id)bodyInRect:(CGRect)arg1 ;
-(id)bodyAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(3)sampleFields:;
-(3)sampleFieldsAt:;
@end

