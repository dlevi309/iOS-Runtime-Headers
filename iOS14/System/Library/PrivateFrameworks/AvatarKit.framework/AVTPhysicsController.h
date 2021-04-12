/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)physicsState;
-(void)setupPhysics;
-(void)applyForcesWithMultiplier:(double)arg1 ;
-(void)_setupPhysicsChain:(id)arg1 ;
-(void)_setupCollisionNode:(id)arg1 ;
-(void)updateAtTime:(double)arg1 forceMultiplier:(double)arg2 ;
-(3)offsetFromRestingPositionForNode:(id)arg1 inCoordinateSpaceOfNode:(id)arg2 ;
-(void)downforcesDidChange;
-(void)setupPhysicsIfNeeded;
-(void)resetToPhysicsState:(id)arg1 ;
@end

