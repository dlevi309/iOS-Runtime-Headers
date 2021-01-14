/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterFoundation/_GKStateMachine.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/GKSegmentedSectionDataSourceEventHandler.h>

@class UICollectionView, GKCollectionViewDataSource, GKCancelSwipeToEditGestureRecognizer, UIPanGestureRecognizer, GKCollectionViewCell, _UIDynamicAnimation, NSIndexPath, NSString;

@interface GKSwipeToEditStateMachine : _GKStateMachine <UIGestureRecognizerDelegate, GKSegmentedSectionDataSourceEventHandler> {

	int _debounce;
	UICollectionView* _collectionView;
	GKCollectionViewDataSource* _gkDataSource;
	GKCancelSwipeToEditGestureRecognizer* _editModeCancelRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	GKCollectionViewCell* _editingCell;
	double _startTrackingX;
	_UIDynamicAnimation* _openAnimation;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * gkDataSource;                                    //@synthesize gkDataSource=_gkDataSource - In the implementation block
@property (nonatomic,retain) GKCancelSwipeToEditGestureRecognizer * editModeCancelRecognizer;              //@synthesize editModeCancelRecognizer=_editModeCancelRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) GKCollectionViewCell * editingCell;                                           //@synthesize editingCell=_editingCell - In the implementation block
@property (assign,nonatomic) double startTrackingX;                                                        //@synthesize startTrackingX=_startTrackingX - In the implementation block
@property (nonatomic,retain) _UIDynamicAnimation * openAnimation;                                          //@synthesize openAnimation=_openAnimation - In the implementation block
@property (nonatomic,readonly) NSIndexPath * trackedIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3 ;
-(void)setStartTrackingX:(double)arg1 ;
-(void)didEnterNothingState;
-(void)setGkDataSource:(GKCollectionViewDataSource *)arg1 ;
-(void)setEditModeCancelRecognizer:(GKCancelSwipeToEditGestureRecognizer *)arg1 ;
-(UICollectionView *)collectionView;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)didExitNothingState;
-(void)setEditingCell:(GKCollectionViewCell *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)didEnterAnimatingOpenState;
-(void)didEnterAnimatingShutState;
-(void)setOpenAnimation:(_UIDynamicAnimation *)arg1 ;
-(void)didExitAnimatingOpenState;
-(void)handlePan:(id)arg1 ;
-(double)xPositionForTranslation:(CGPoint)arg1 ;
-(GKCollectionViewDataSource *)gkDataSource;
-(void)shutActionPaneForEditingCellAnimated:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)handleCancelTap:(id)arg1 ;
-(double)startTrackingX;
-(void)didEnterEditingState;
-(_UIDynamicAnimation *)openAnimation;
-(NSIndexPath *)trackedIndexPath;
-(void)didExitEditingState;
-(GKCollectionViewCell *)editingCell;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(GKCancelSwipeToEditGestureRecognizer *)editModeCancelRecognizer;
-(void)dealloc;
@end

