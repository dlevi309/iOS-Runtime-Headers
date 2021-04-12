/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIVelocityIntegrator, _UIDragDestinationControllerSessionState, UICollectionView, _UIDragMovementCadenceSettings;

@interface _UIDragDestinationControllerReorderingState : NSObject {

	BOOL _supportsLocalSessionReordering;
	BOOL _hasStartedInteractiveReorder;
	_UIVelocityIntegrator* _velocityIntegrator;
	long long _reorderCount;
	_UIDragDestinationControllerSessionState* _sessionState;
	UICollectionView* _collectionView;
	double _reorderBecamePossibleTime;
	long long _dragMovementPhase;
	_UIDragMovementCadenceSettings* _reorderCadenceSettings;

}

@property (nonatomic,retain) _UIDragDestinationControllerSessionState * sessionState;              //@synthesize sessionState=_sessionState - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                             //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * velocityIntegrator;                           //@synthesize velocityIntegrator=_velocityIntegrator - In the implementation block
@property (assign,nonatomic) long long reorderCount;                                               //@synthesize reorderCount=_reorderCount - In the implementation block
@property (assign,nonatomic) double reorderBecamePossibleTime;                                     //@synthesize reorderBecamePossibleTime=_reorderBecamePossibleTime - In the implementation block
@property (assign,nonatomic) long long dragMovementPhase;                                          //@synthesize dragMovementPhase=_dragMovementPhase - In the implementation block
@property (nonatomic,retain) _UIDragMovementCadenceSettings * reorderCadenceSettings;              //@synthesize reorderCadenceSettings=_reorderCadenceSettings - In the implementation block
@property (assign,nonatomic) BOOL hasStartedInteractiveReorder;                                    //@synthesize hasStartedInteractiveReorder=_hasStartedInteractiveReorder - In the implementation block
@property (assign,nonatomic) BOOL supportsLocalSessionReordering;                                  //@synthesize supportsLocalSessionReordering=_supportsLocalSessionReordering - In the implementation block
@property (nonatomic,readonly) BOOL hasPerformedReordering; 
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(BOOL)supportsLocalSessionReordering;
-(_UIDragDestinationControllerSessionState *)sessionState;
-(BOOL)hasPerformedReordering;
-(void)setSupportsLocalSessionReordering:(BOOL)arg1 ;
-(void)setSessionState:(_UIDragDestinationControllerSessionState *)arg1 ;
-(BOOL)hasStartedInteractiveReorder;
-(void)didEndInteractiveReorder;
-(id)initWithSessionState:(id)arg1 collectionView:(id)arg2 ;
-(_UIVelocityIntegrator *)velocityIntegrator;
-(void)reorderingDidBecomePossible;
-(_UIDragMovementCadenceSettings *)reorderCadenceSettings;
-(BOOL)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)arg1 ;
-(void)velocityExceededThreshold;
-(void)didBeginInteractiveReorder;
-(void)didReorder;
-(id)_reorderCadenceSettings;
-(long long)dragMovementPhase;
-(void)reorderResetToStartingLocation;
-(void)setVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(long long)reorderCount;
-(void)setReorderCount:(long long)arg1 ;
-(void)setHasStartedInteractiveReorder:(BOOL)arg1 ;
-(double)reorderBecamePossibleTime;
-(void)setReorderBecamePossibleTime:(double)arg1 ;
-(void)setDragMovementPhase:(long long)arg1 ;
-(void)setReorderCadenceSettings:(_UIDragMovementCadenceSettings *)arg1 ;
@end

