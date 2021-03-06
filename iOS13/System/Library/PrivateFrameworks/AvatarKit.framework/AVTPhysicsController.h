/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@protocol AVTPhysicsControllerDelegate;
@class NSMutableArray;

@interface AVTPhysicsController : NSObject {

	NSMutableArray* _physicsRigs;
	BOOL _setupDone;
	BOOL _firstFrameRendered;
	id<AVTPhysicsControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AVTPhysicsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AVTPhysicsControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTPhysicsControllerDelegate>)arg1 ;
-(void)setupPhysics;
-(void)applyForcesWithMultiplier:(double)arg1 ;
-(void)_setupPhysicsChain:(id)arg1 ;
-(void)_setupCollisionNode:(id)arg1 ;
-(void)updateAtTime:(double)arg1 forceMultiplier:(double)arg2 ;
-(3)offsetFromRestingPositionForNode:(id)arg1 inCoordinateSpaceOfNode:(id)arg2 ;
-(void)setupPhysicsDebugNodes;
-(void)downforcesDidChange;
-(void)setupPhysicsIfNeeded;
-(id)physicsState;
-(void)resetToPhysicsState:(id)arg1 ;
@end

