/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@interface NewsFeed.DebugFormatEditorViewController : UIViewController <UIScrollViewDelegate> {

	 delegate;
	 editor;
	 packages;
	 errorViewController;
	 canvasViewController;
	 scrollView;
	 rulerView;
	 $__lazy_storage_$_overlayView;
	 contentView;
	 statusView;
	 zoomLabel;

}
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)doReload;
-(void)doDismiss;
-(void)doToggleSidebar;
-(void)doLightDarkModeWithSender:(id)arg1 ;
-(void)doDevicesWithSender:(id)arg1 ;
-(void)doOptionsWithSender:(id)arg1 ;
-(void)resetZoom;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(void)viewDidLoad;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

