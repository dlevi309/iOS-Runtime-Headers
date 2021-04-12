/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class PKExtendedPhysicsBody, PKPhysicsJoint, NSArray;

@interface UIAttachmentBehavior : UIDynamicBehavior {

	CGPoint _anchorPoint;
	CGPoint _anchorPointA;
	CGPoint _anchorPointB;
	PKExtendedPhysicsBody* _anchorBody;
	PKPhysicsJoint* _joint;
	double _damping;
	double _frequency;
	double _length;
	CGVector _axis;
	unsigned long long _attachmentType;
	long long _type;
	struct {
		unsigned dampingSet : 1;
		unsigned frequencySet : 1;
		unsigned lengthSet : 1;
		unsigned rangeSet : 1;
		unsigned frictionTorqueSet : 1;
		unsigned isRevolute : 1;
	}  _stateFlags;
	long long _attachedBehaviorType;
	double _frictionTorque;
	CGSize _attachmentRange;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) long long attachedBehaviorType;              //@synthesize attachedBehaviorType=_attachedBehaviorType - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) double frictionTorque;                         //@synthesize frictionTorque=_frictionTorque - In the implementation block
@property (assign,nonatomic) CGSize attachmentRange;                        //@synthesize attachmentRange=_attachmentRange - In the implementation block
+(BOOL)_isPrimitiveBehavior;
+(id)slidingAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(CGPoint)arg3 axisOfTranslation:(CGVector)arg4 ;
+(id)slidingAttachmentWithItem:(id)arg1 attachmentAnchor:(CGPoint)arg2 axisOfTranslation:(CGVector)arg3 ;
+(id)limitAttachmentWithItem:(id)arg1 offsetFromCenter:(UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(UIOffset)arg4 ;
+(id)fixedAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(CGPoint)arg3 ;
+(id)pinAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(CGPoint)arg3 ;
-(id)init;
-(double)length;
-(id)description;
-(long long)type;
-(void)setLength:(double)arg1 ;
-(NSArray *)items;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)initWithItem:(id)arg1 attachedToItem:(id)arg2 ;
-(id)initWithItem:(id)arg1 attachedToAnchor:(CGPoint)arg2 ;
-(void)_updateJointWithRange:(CGSize)arg1 ;
-(void)_changedParameter;
-(id)initWithItem:(id)arg1 offsetFromCenter:(UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(UIOffset)arg4 ;
-(void)setFrictionTorque:(double)arg1 ;
-(id)initWithItem:(id)arg1 point:(CGPoint)arg2 attachedToAnchor:(CGPoint)arg3 ;
-(id)initWithItem:(id)arg1 point:(CGPoint)arg2 attachedToItem:(id)arg3 point:(CGPoint)arg4 ;
-(id)initWithItem:(id)arg1 offsetFromCenter:(UIOffset)arg2 attachedToAnchor:(CGPoint)arg3 ;
-(void)_reevaluateJoint;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(void)setAttachmentRange:(CGSize)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(long long)attachedBehaviorType;
-(double)frictionTorque;
-(CGSize)attachmentRange;
@end

