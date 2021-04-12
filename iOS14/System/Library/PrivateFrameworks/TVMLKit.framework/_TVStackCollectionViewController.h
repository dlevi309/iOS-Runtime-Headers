/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <TVMLKit/_TVCollectionViewing.h>

@protocol _TVStackCollectionViewControllerDelegate;
@class NSArray, NSIndexPath, _TVNeedsMoreContentEvaluator, UIViewController, UIView, IKViewElement, _TVStackCollectionView, NSString;

@interface _TVStackCollectionViewController : UICollectionViewController <_TVCollectionViewing> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<_TVStackCollectionViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setDelegate:(id<_TVStackCollectionViewControllerDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IKViewElement *)viewElement;
-(void)updateWithViewElement:(id)arg1 ;
-(BOOL)_updateWithCollectionListElement:(id)arg1 autoHighlightIndexPath:(id*)arg2 ;
-(void)_configureBackgroundTintView;
-(void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(CGPoint*)arg2 ;
-(id)_needsMoreTargetElement;
-(void)_buildStackSections;
-(void)_updateBackgroundTintView;
-(void)preloadCellsInRect:(CGRect)arg1 ;
-(void)resetLastFocusedIndexPath;
-(void)_updateBackgroundTintViewEffects;
-(double)_maxViewWidth;
-(id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2 ;
-(CGSize)_maxContentSize;
-(void)_updateFirstItemRowIndexes;
@end

