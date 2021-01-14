/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVCarouselViewDelegate.h>
#import <libobjc.A.dylib/TVCarouselViewDataSource.h>
#import <libobjc.A.dylib/VUISwiftImpressionsElement.h>

@interface VideosUI.CarouselViewController : UIViewController <TVCarouselViewDelegate, TVCarouselViewDataSource, VUISwiftImpressionsElement> {

	 viewImpressioner;
	 headerViewModel;
	 viewElement;
	 viewModel;
	 $__lazy_storage_$_visibleCellViewModels;
	 $__lazy_storage_$_carouselViewContainer;
	 items;
	 lastViewWidth;
	 centeredItemIndex;
	 impressionsTracker;
	 impressionsCalculator;
	 selfVisibilityMonitor;
	 $__lazy_storage_$_cellVisibilityMonitor;

}
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)carouselView:(id)arg1 didCenterItemAtIndex:(unsigned long long)arg2 ;
-(id)getSnapshotImpressions;
-(id)getRecordedImpressions;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

