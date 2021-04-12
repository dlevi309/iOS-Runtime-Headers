/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@protocol UICollisionBehaviorDelegate;
@class PKExtendedPhysicsBody, NSMutableDictionary, NSArray;

@interface UICollisionBehavior : UIDynamicBehavior {

	BOOL _usesImplicitBounds;
	UIEdgeInsets _implicitBoundsInsets;
	PKExtendedPhysicsBody* _implicitBoundsBody;
	NSMutableDictionary* _boundaryBodies;
	NSMutableDictionary* _boundaryPaths;
	unsigned long long _collisionMode;
	id<UICollisionBehaviorDelegate> _collisionDelegate;
	unsigned _groupVID;
	unsigned _groupBID;
	struct {
		unsigned delegateBeganWithItem : 1;
		unsigned delegateEndedWithItem : 1;
		unsigned delegateBeganWithBoundary : 1;
		unsigned delegateEndedWithBoundary : 1;
	}  _collisionBehaviorFlags;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) unsigned long long collisionMode; 
@property (assign,nonatomic) BOOL translatesReferenceBoundsIntoBoundary; 
@property (nonatomic,copy,readonly) NSArray * boundaryIdentifiers; 
@property (assign,nonatomic,__weak) id<UICollisionBehaviorDelegate> collisionDelegate; 
+(BOOL)_isPrimitiveBehavior;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)init;
-(void)_setTranslatesReferenceItemBounds:(BOOL)arg1 intoBoundaryWithInsets:(UIEdgeInsets)arg2 ;
-(NSArray *)items;
-(void)_setCollisions:(BOOL)arg1 forBody:(id)arg2 isEdge:(BOOL)arg3 ;
-(void)_addCollisionItem:(id)arg1 ;
-(void)_setupImplicitBoundaries;
-(void)_setupExplicitBoundaries;
-(void)_removeImplicitBoundaries;
-(void)_removeExplicitBoundaryBodies;
-(void)_registerBodyForIdentifier:(id)arg1 path:(id)arg2 ;
-(void)_registerBoundaryForIdentifier:(id)arg1 path:(id)arg2 ;
-(void)_removeExplicitBoundaryPaths;
-(BOOL)translatesReferenceBoundsIntoBoundary;
-(void)_didEndContact:(id)arg1 ;
-(void)setCollisionMode:(unsigned long long)arg1 ;
-(void)_didBeginContact:(id)arg1 ;
-(id<UICollisionBehaviorDelegate>)collisionDelegate;
-(void)setCollisionDelegate:(id<UICollisionBehaviorDelegate>)arg1 ;
-(id)boundaryWithIdentifier:(id)arg1 ;
-(void)setTranslatesReferenceBoundsIntoBoundary:(BOOL)arg1 ;
-(void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(UIEdgeInsets)arg1 ;
-(void)addBoundaryWithIdentifier:(id)arg1 forPath:(id)arg2 ;
-(NSArray *)boundaryIdentifiers;
-(void)addBoundaryWithIdentifier:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 ;
-(void)removeBoundaryWithIdentifier:(id)arg1 ;
-(void)removeAllBoundaries;
-(id)description;
-(void)_associate;
-(void)_dissociate;
-(void)_reevaluate:(unsigned long long)arg1 ;
-(unsigned long long)collisionMode;
-(void)_applySettings;
@end

