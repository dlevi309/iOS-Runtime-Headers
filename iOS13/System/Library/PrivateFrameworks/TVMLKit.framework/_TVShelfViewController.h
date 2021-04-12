/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVMLCollectionViewController.h>
#import <TVMLKit/TVShelfViewLayoutDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol __TVShelfViewControllerDelegate;
@class NSIndexPath, NSString;

@interface _TVShelfViewController : _TVMLCollectionViewController <TVShelfViewLayoutDelegate, UICollectionViewDelegateFlowLayout> {

	NSIndexPath* _pendingPreviewedIndexPath;
	NSIndexPath* _lastPreviewedIndexPath;
	double _lastPreviewDelay;
	unsigned long long _autohighlightScrollPosition;
	BOOL _configureForListTemplate;
	long long _listTemplateAlignment;
	struct {
		BOOL hasUpdateRelatedView;
		BOOL hasDidSelectItemAtIndexPath;
		BOOL hasDidPlayItemAtIndexPath;
		BOOL hasDidSettleOnItemAtIndexPath;
		BOOL hasDidSnapToItemAtIndexPath;
		BOOL hasFocusDependentMethods;
	}  _delegateFlags;
	BOOL _centered;
	id<__TVShelfViewControllerDelegate> _delegate;
	unsigned long long _speedBumpEdges;
	long long _prominentSectionIndex;

}

@property (assign,nonatomic) long long prominentSectionIndex;                                  //@synthesize prominentSectionIndex=_prominentSectionIndex - In the implementation block
@property (assign,nonatomic,__weak) id<__TVShelfViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long speedBumpEdges;                                //@synthesize speedBumpEdges=_speedBumpEdges - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;                                  //@synthesize centered=_centered - In the implementation block
@property (assign,nonatomic) BOOL hideHeader; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_contentForCell:(id)arg1 shouldHide:(BOOL)arg2 ;
-(id<__TVShelfViewControllerDelegate>)delegate;
-(void)setDelegate:(id<__TVShelfViewControllerDelegate>)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLoad;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(unsigned long long)speedBumpEdges;
-(void)setSpeedBumpEdges:(unsigned long long)arg1 ;
-(BOOL)isCentered;
-(void)setCentered:(BOOL)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 cellMetrics:(TVCellMetrics)arg2 ;
-(void)_delayedUpdatePreview;
-(void)_didSettleOnItemAtIndexPath:(id)arg1 ;
-(void)dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)prominentSectionIndex;
-(CGSize)expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setProminentSectionIndex:(long long)arg1 ;
-(void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)makeCollectionViewWithFrame:(CGRect)arg1 ;
-(BOOL)contentFlowsVertically;
-(unsigned long long)preferredScrollPosition;
-(void)updateViewLayoutAnimated:(BOOL)arg1 relayout:(BOOL)arg2 ;
-(void)setHideHeader:(BOOL)arg1 ;
-(BOOL)hideHeader;
@end
