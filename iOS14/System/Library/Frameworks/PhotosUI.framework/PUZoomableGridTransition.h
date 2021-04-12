/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UICollectionView, PUMomentsZoomLevelManager, NSIndexPath, UICollectionViewTransitionLayout, NSString;

@interface PUZoomableGridTransition : NSObject <UIViewControllerInteractiveTransitioning> {

	UICollectionView* _collectionView;
	BOOL _interactive;
	PUMomentsZoomLevelManager* _zoomLevelManager;
	unsigned long long _originZoomLevel;
	unsigned long long _targetZoomLevel;
	unsigned long long _transitionState;
	NSIndexPath* _anchorItemIndexPath;
	double _currentInteractiveProgress;
	UICollectionViewTransitionLayout* __transitionLayout;
	id<UIViewControllerContextTransitioning> _transitionContext;
	CGSize _currentInteractiveCenterOffset;

}

@property (assign,setter=_setTransitionState:,nonatomic) unsigned long long transitionState;                                 //@synthesize transitionState=_transitionState - In the implementation block
@property (assign,setter=_setOriginZoomLevel:,nonatomic) unsigned long long originZoomLevel;                                 //@synthesize originZoomLevel=_originZoomLevel - In the implementation block
@property (assign,setter=_setTargetZoomLevel:,nonatomic) unsigned long long targetZoomLevel;                                 //@synthesize targetZoomLevel=_targetZoomLevel - In the implementation block
@property (setter=_setTransitionLayout:,nonatomic,retain) UICollectionViewTransitionLayout * _transitionLayout;              //@synthesize _transitionLayout=__transitionLayout - In the implementation block
@property (assign,setter=_setCurrentInteractiveProgress:,nonatomic) double currentInteractiveProgress;                       //@synthesize currentInteractiveProgress=_currentInteractiveProgress - In the implementation block
@property (assign,setter=_setCurrentInteractiveCenterOffset:,nonatomic) CGSize currentInteractiveCenterOffset;               //@synthesize currentInteractiveCenterOffset=_currentInteractiveCenterOffset - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;                                     //@synthesize transitionContext=_transitionContext - In the implementation block
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive;                                                        //@synthesize interactive=_interactive - In the implementation block
@property (nonatomic,__weak,readonly) PUMomentsZoomLevelManager * zoomLevelManager;                                          //@synthesize zoomLevelManager=_zoomLevelManager - In the implementation block
@property (nonatomic,retain) NSIndexPath * anchorItemIndexPath;                                                              //@synthesize anchorItemIndexPath=_anchorItemIndexPath - In the implementation block
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)targetZoomLevel;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(BOOL)isInteractive;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)_setTransitionLayout:(id)arg1 ;
-(UICollectionViewTransitionLayout *)_transitionLayout;
-(unsigned long long)transitionState;
-(PUMomentsZoomLevelManager *)zoomLevelManager;
-(void)updateInteractiveTransitionForProgress:(double)arg1 centerOffset:(CGSize)arg2 ;
-(id)initWithOriginLevel:(unsigned long long)arg1 targetLevel:(unsigned long long)arg2 zoomLevelManager:(id)arg3 interactive:(BOOL)arg4 ;
-(void)finishInteractiveTransitionAnimated;
-(void)cancelInteractiveTransitionAnimated;
-(void)_setTransitionState:(unsigned long long)arg1 ;
-(unsigned long long)originZoomLevel;
-(void)_setOriginZoomLevel:(unsigned long long)arg1 ;
-(void)_setTargetZoomLevel:(unsigned long long)arg1 ;
-(NSIndexPath *)anchorItemIndexPath;
-(void)setAnchorItemIndexPath:(NSIndexPath *)arg1 ;
-(double)currentInteractiveProgress;
-(void)_setCurrentInteractiveProgress:(double)arg1 ;
-(CGSize)currentInteractiveCenterOffset;
-(void)_setCurrentInteractiveCenterOffset:(CGSize)arg1 ;
@end
