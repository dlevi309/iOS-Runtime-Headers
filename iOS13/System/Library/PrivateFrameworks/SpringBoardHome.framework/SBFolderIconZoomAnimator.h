/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBScaleIconZoomAnimator.h>
#import <libobjc.A.dylib/SBSearchGestureObserver.h>

@class SBFolderController, SBFloatyFolderView, _SBInnerFolderIconZoomAnimator, SBFFluidBehaviorSettings, SBSearchGesture, SBHFolderZoomSettings, SBFolderIcon, SBIconView, NSString;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator <SBSearchGestureObserver> {

	SBFolderController* _innerFolderController;
	SBFloatyFolderView* _innerFolderView;
	_SBInnerFolderIconZoomAnimator* _innerZoomAnimator;
	BOOL _isAnimatingInFloatingDock;
	SBFFluidBehaviorSettings* _dockAnimationSettings;
	SBSearchGesture* _searchGesture;

}

@property (nonatomic,retain) SBSearchGesture * searchGesture;                               //@synthesize searchGesture=_searchGesture - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingInFloatingDock;                                //@synthesize isAnimatingInFloatingDock=_isAnimatingInFloatingDock - In the implementation block
@property (nonatomic,retain) SBHFolderZoomSettings * settings; 
@property (nonatomic,retain) SBFFluidBehaviorSettings * dockAnimationSettings;              //@synthesize dockAnimationSettings=_dockAnimationSettings - In the implementation block
@property (nonatomic,readonly) SBFolderIcon * targetIcon; 
@property (nonatomic,readonly) SBIconView * targetIconView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepareAnimation;
-(CGRect)_zoomedFrame;
-(SBIconView *)targetIconView;
-(void)_setAnimationFraction:(double)arg1 ;
-(void)_cleanupAnimation;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(SBSearchGesture *)searchGesture;
-(void)_setupMatchMoveWithDock;
-(void)_setupCounterDockMatchMoveAnimationWithOffset:(double)arg1 layer:(id)arg2 additive:(BOOL)arg3 ;
-(void)_setupMatchMoveWithDockWithTargetIconCenter:(CGPoint)arg1 targetIconAnchor:(CGPoint)arg2 ;
-(SBFFluidBehaviorSettings *)dockAnimationSettings;
-(id)defaultTargetIconContainerView;
-(void)setSearchGesture:(SBSearchGesture *)arg1 ;
-(void)_setupMatchMoveAnimation;
-(BOOL)shouldMatchMoveWithDock;
-(void)_updateDockMatchMoveWithFraction:(double)arg1 ;
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2 ;
-(void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2 ;
-(id)initWithAnimationContainer:(id)arg1 innerFolderController:(id)arg2 folderIcon:(id)arg3 ;
-(id)_referenceFolderIconView;
-(BOOL)_forceSquareZoomDimension;
-(BOOL)isAnimatingInFloatingDock;
-(void)setIsAnimatingInFloatingDock:(BOOL)arg1 ;
-(void)setDockAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end

