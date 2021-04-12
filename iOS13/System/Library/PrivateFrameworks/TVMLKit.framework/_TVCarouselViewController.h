/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVMLKit/TVCarouselViewDataSource.h>
#import <TVMLKit/TVCarouselViewDelegate.h>
#import <TVMLKit/TVCollectionViewLockupCellDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class TVCarouselLayout, IKCollectionElement, _TVCarouselView, IKViewElement, NSString;

@interface _TVCarouselViewController : UIViewController <TVCarouselViewDataSource, TVCarouselViewDelegate, TVCollectionViewLockupCellDelegate, TVAppTemplateImpressionable> {

	TVCarouselLayout* _carouselLayout;
	IKCollectionElement* _collectionElement;
	_TVCarouselView* _carouselView;
	IKViewElement* _headerElement;
	struct {
		BOOL didAppear;
		BOOL indexesDirty;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)headerElementFromCollectionElement:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_updateLayout;
-(void)_updateHeaderView;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)collectionViewCellDidSelect:(id)arg1 ;
-(void)_cancelImpressionsUpdate;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 layout:(id)arg2 ;
-(void)_registerCellClasses;
-(void)_updateAutoScrollInterval;
-(void)_updateLayoutAndReload;
-(void)_updateImpressions;
-(void)_dispatchEvent:(id)arg1 forItemAtIndex:(unsigned long long)arg2 cell:(id)arg3 ;
-(void)_recordImpressionsForVisibleView;
-(void)centerItemAtPageIndex:(long long)arg1 ;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)carouselView:(id)arg1 willDisplayItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 didEndDisplayingItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselViewDidScroll:(id)arg1 ;
-(void)carouselView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2 ;
-(CGSize)viewSizeThatFits:(CGSize)arg1 ;
-(BOOL)_needsDefaultCarouselCells;
@end

