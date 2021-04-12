/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>
#import <UIKit/UICollisionBehaviorDelegate.h>

@protocol UIDynamicItem;
@class UIDynamicItemBehavior, UICollisionBehavior, UIGravityBehavior, UIAttachmentBehavior, _UIEdgeFeedbackGenerator, NSString;

@interface SBBounceBehavior : UIDynamicBehavior <UICollisionBehaviorDelegate> {

	double _midwayPosition;
	double _completionThreshold;
	double _previousLinearVelocity;
	double _previousPreviousLinearVelocity;
	CGRect _targetFrame;
	id<UIDynamicItem> _item;
	UIDynamicItemBehavior* _bodyBehavior;
	UICollisionBehavior* _collisionBehavior;
	UIGravityBehavior* _gravityBehavior;
	UIDynamicItemBehavior* _pushBehavior;
	UIAttachmentBehavior* _draggingBehavior;
	double _gravity;
	double _velocity;
	double _elasticity;
	double _friction;
	double _resistance;
	double _minVelocityToAssist;
	double _maxVelocityToAssist;
	double _maxVelocityAssistance;
	_UIEdgeFeedbackGenerator* _hapticGenerator;
	UIEdgeInsets _boundaryInsets;

}

@property (assign,nonatomic) double gravity;                                          //@synthesize gravity=_gravity - In the implementation block
@property (assign,nonatomic) double velocity;                                         //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) double elasticity;                                       //@synthesize elasticity=_elasticity - In the implementation block
@property (assign,nonatomic) double friction;                                         //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double resistance;                                       //@synthesize resistance=_resistance - In the implementation block
@property (assign,nonatomic) double minVelocityToAssist;                              //@synthesize minVelocityToAssist=_minVelocityToAssist - In the implementation block
@property (assign,nonatomic) double maxVelocityToAssist;                              //@synthesize maxVelocityToAssist=_maxVelocityToAssist - In the implementation block
@property (assign,nonatomic) double maxVelocityAssistance;                            //@synthesize maxVelocityAssistance=_maxVelocityAssistance - In the implementation block
@property (nonatomic,retain) _UIEdgeFeedbackGenerator * hapticGenerator;              //@synthesize hapticGenerator=_hapticGenerator - In the implementation block
@property (assign,nonatomic) UIEdgeInsets boundaryInsets;                             //@synthesize boundaryInsets=_boundaryInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isActive;
-(double)gravity;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(double)resistance;
-(id)initWithItem:(id)arg1 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(void)bounce;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(CGPoint)arg4 ;
-(BOOL)allowsAnimatorToStop;
-(double)elasticity;
-(void)setElasticity:(double)arg1 ;
-(void)setResistance:(double)arg1 ;
-(void)setGravity:(double)arg1 ;
-(void)_beginInteraction;
-(double)_percentComplete;
-(void)setMinVelocityToAssist:(double)arg1 ;
-(void)setMaxVelocityToAssist:(double)arg1 ;
-(void)setMaxVelocityAssistance:(double)arg1 ;
-(double)minVelocityToAssist;
-(double)maxVelocityToAssist;
-(double)maxVelocityAssistance;
-(double)_minVelocityToAssist;
-(double)_maxVelocityToAssist;
-(_UIEdgeFeedbackGenerator *)hapticGenerator;
-(void)setHapticGenerator:(_UIEdgeFeedbackGenerator *)arg1 ;
-(BOOL)_itemCompleted;
-(void)_setupCollisionBoundaries;
-(id)initWithItem:(id)arg1 targetFrame:(CGRect)arg2 feedbackGenerator:(id)arg3 ;
-(BOOL)_itemStopped;
-(void)_frameCollisionBoundaryPoints:(CGPoint*)arg1 ;
-(BOOL)_isGravityDown;
-(void)_removeDraggingBehavior;
-(BOOL)_itemPastMidway;
-(double)_adjustedVelocity:(double)arg1 ;
-(void)finishInteractionWithVelocity:(CGPoint)arg1 removingGravityAtMidway:(BOOL)arg2 ;
-(void)finishInteractionWithVelocity:(CGPoint)arg1 ;
-(double)_itemOriginY;
-(BOOL)_shouldAssistWithVelocity:(double)arg1 ;
-(double)_velocityAssistance;
-(double)_percentRemaining;
-(void)setBoundaryInsets:(UIEdgeInsets)arg1 ;
-(void)initiateInteractionFromPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithPoint:(CGPoint)arg1 ;
-(void)finishInteraction;
-(UIEdgeInsets)boundaryInsets;
@end

