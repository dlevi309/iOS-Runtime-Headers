/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class NSMutableArray, PKPhysicsBody;

@interface UISnapBehavior : UIDynamicBehavior {

	CGPoint _anchorPoint;
	double _damping;
	double _distance;
	double _frequency;
	struct {
		unsigned attachedToView : 1;
		unsigned dampingSet : 1;
		unsigned frequencySet : 1;
		unsigned lengthSet : 1;
	}  _stateFlags;
	NSMutableArray* _joints;
	PKPhysicsBody* _anchorBody;

}

@property (assign,nonatomic) CGPoint snapPoint; 
@property (assign,nonatomic) double damping;                 //@synthesize damping=_damping - In the implementation block
+(BOOL)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(double)_frequency;
-(id)initWithItem:(id)arg1 snapToPoint:(CGPoint)arg2 ;
-(double)_distance;
-(void)_setDistance:(double)arg1 ;
-(void)_setFrequency:(double)arg1 ;
-(void)setSnapPoint:(CGPoint)arg1 ;
-(CGPoint)snapPoint;
@end

