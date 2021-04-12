/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewController.h>

@protocol _TVStackCollectionViewControllerDelegate;
@class NSArray, NSIndexPath, _TVNeedsMoreContentEvaluator, UIViewController, UIView, IKViewElement, _TVStackCollectionView;

@interface _TVStackCollectionViewController : UICollectionViewController {

	NSArray* _viewControllers;
	NSArray* _stackSections;
	NSArray* _stackRows;
	NSIndexPath* _lastFocusedIndexPath;
	_TVNeedsMoreContentEvaluator* _needsMoreContentEvaluator;
	UIViewController* _backdropTintViewController;
	UIView* _backdropTintView;
	BOOL _configureForListTemplate;
	struct {
		BOOL respondsToStackCollectionViewControllerScrollViewDidScroll;
	}  _delegateFlags;
	IKViewElement* _viewElement;
	id<_TVStackCollectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVStackCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;                                             //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) _TVStackCollectionView * collectionView; 
-(id<_TVStackCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_TVStackCollectionViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(IKViewElement *)viewElement;
-(void)updateWithViewElement:(id)arg1 ;
-(BOOL)_updateWithCollectionListElement:(id)arg1 autoHighlightIndexPath:(id*)arg2 ;
-(void)_configureBackgroundTintView;
-(void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(CGPoint*)arg2 ;
-(id)_needsMoreTargetElement;
-(void)_buildStackSections;
-(void)_updateBackgroundTintView;
-(void)_updateBackgroundTintViewEffects;
-(double)_maxViewWidth;
-(id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2 ;
-(CGSize)_maxContentSize;
-(void)_updateFirstItemRowIndexes;
@end

