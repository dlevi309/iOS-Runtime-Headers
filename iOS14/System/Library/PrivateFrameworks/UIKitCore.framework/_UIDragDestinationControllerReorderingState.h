/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(_UIDragDestinationControllerSessionState *)sessionState;
-(BOOL)supportsLocalSessionReordering;
-(BOOL)hasPerformedReordering;
-(void)setSessionState:(_UIDragDestinationControllerSessionState *)arg1 ;
-(void)setReorderCadenceSettings:(_UIDragMovementCadenceSettings *)arg1 ;
-(void)didBeginInteractiveReorder;
-(UICollectionView *)collectionView;
-(id)_reorderCadenceSettings;
-(void)reorderingDidBecomePossible;
-(void)setHasStartedInteractiveReorder:(BOOL)arg1 ;
-(void)setReorderBecamePossibleTime:(double)arg1 ;
-(long long)dragMovementPhase;
-(long long)reorderCount;
-(BOOL)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)arg1 ;
-(double)reorderBecamePossibleTime;
-(_UIVelocityIntegrator *)velocityIntegrator;
-(void)setDragMovementPhase:(long long)arg1 ;
-(void)reorderResetToStartingLocation;
-(void)didReorder;
-(_UIDragMovementCadenceSettings *)reorderCadenceSettings;
-(id)initWithSessionState:(id)arg1 collectionView:(id)arg2 ;
-(void)setReorderCount:(long long)arg1 ;
-(void)didEndInteractiveReorder;
-(void)setSupportsLocalSessionReordering:(BOOL)arg1 ;
-(void)velocityExceededThreshold;
-(BOOL)hasStartedInteractiveReorder;
@end

