/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIconZoomAnimator.h>
#import <libobjc.A.dylib/SBIconListLayoutDelegate.h>
#import <libobjc.A.dylib/SBIconListModelObserver.h>

@protocol SBDockOffscreenFractionModifying;
@class UIView, SBFolderController, SBHCenterZoomSettings, NSString;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate, SBIconListModelObserver> {

	UIView* _zoomView;
	UIView* _folderView;
	double _iconZoomedZ;
	UIView* _extraViewsContainer;
	double _centerRow;
	double _centerCol;
	CGPoint _cameraPosition;
	BOOL _animatingIcons;
	id<SBDockOffscreenFractionModifying> _dockOffscreenFractionModifier;

}

@property (nonatomic,retain) id<SBDockOffscreenFractionModifying> dockOffscreenFractionModifier;              //@synthesize dockOffscreenFractionModifier=_dockOffscreenFractionModifier - In the implementation block
@property (nonatomic,readonly) UIView * zoomView;                                                             //@synthesize zoomView=_zoomView - In the implementation block
@property (nonatomic,readonly) CGPoint cameraPosition;                                                        //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) double centerRow;                                                              //@synthesize centerRow=_centerRow - In the implementation block
@property (nonatomic,readonly) double centerCol;                                                              //@synthesize centerCol=_centerCol - In the implementation block
@property (nonatomic,readonly) BOOL animatingIcons;                                                           //@synthesize animatingIcons=_animatingIcons - In the implementation block
@property (nonatomic,readonly) SBFolderController * folderController; 
@property (nonatomic,retain) SBHCenterZoomSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)cameraPosition;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(void)_cleanupAnimation;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didMoveIcon:(id)arg2 ;
-(SBFolderController *)folderController;
-(void)_calculateCentersAndCameraPosition;
-(void)setDockOffscreenFractionModifier:(id<SBDockOffscreenFractionModifying>)arg1 ;
-(void)_positionView:(id)arg1 forIcon:(id)arg2 ;
-(void)_setAnimationFraction:(double)arg1 withCenter:(CGPoint)arg2 ;
-(double)_zPositionForView:(id)arg1 center:(CGPoint)arg2 andFraction:(double)arg3 ;
-(void)enumerateExtraViewsWithHandler:(/*^block*/id)arg1 ;
-(void)_updateDockForFraction:(double)arg1 ;
-(id<SBDockOffscreenFractionModifying>)dockOffscreenFractionModifier;
-(void)_cleanupAnimationIncludingDock:(BOOL)arg1 ;
-(double)_iconZoomDelay;
-(id)_animationFactoryForIcon:(id)arg1 ;
-(id)_animationFactoryForDock;
-(id)_animationFactoryForFolderView;
-(void)_calculateCenters;
-(CGPoint)iconListView:(id)arg1 originForIconCoordinate:(SBIconCoordinate)arg2 proposedOrigin:(CGPoint)arg3 ;
-(void)iconListViewIsNotDisplayingAnyIcons:(id)arg1 ;
-(id)initWithFolderController:(id)arg1 ;
-(void)setFraction:(double)arg1 withCenter:(CGPoint)arg2 ;
-(UIView *)zoomView;
-(double)centerRow;
-(double)centerCol;
-(BOOL)animatingIcons;
@end

