/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIPageViewController.h>
#import <PDFKit/PDFPageBackgroundManagerDelegate.h>
#import <PDFKit/PDFDocumentPageChangeDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class PDFDocumentViewControllerPrivate, NSString;

@interface PDFDocumentViewController : UIPageViewController <PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {

	PDFDocumentViewControllerPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScaleFactor:(double)arg1 ;
-(void)viewWillLayoutSubviews;
-(double)scaleFactor;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(void)setSelection:(id)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(id)currentPage;
-(BOOL)hasBackgroundImage;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)selection;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)pageViews;
-(id)document;
-(id)scrollView;
-(void)dealloc;
-(double)minScaleFactor;
-(id)pageViewForPageAtIndex:(unsigned long long)arg1 ;
-(double)autoScaleFactor;
-(void)setAutoScales:(BOOL)arg1 ;
-(void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2 ;
-(id)pageForPoint:(CGPoint)arg1 nearest:(BOOL)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 ;
-(void)_setupDocument;
-(void)_documentChanged;
-(id)_pageViewControllerCreate:(int)arg1 ;
-(void)_updateCurrentPageViewController:(id)arg1 ;
-(void)willForceUpdate;
-(void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toPDFPageViewController:(id)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromPDFPageViewController:(id)arg2 ;
-(id)_pageViewController:(id)arg1 nextViewController:(int)arg2 forViewController:(id)arg3 ;
-(void)_documentWasUnlocked;
-(void)_loadDocument;
-(id)findPageViewControllerForPageIndex:(long long)arg1 ;
-(void)goToPage:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 ;
-(id)backgroundImageForPage:(id)arg1 withQuality:(int*)arg2 ;
-(void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3 ;
-(void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithPDFView:(id)arg1 andNavigationOrientation:(long long)arg2 withRenderingProperties:(id)arg3 andOptions:(id)arg4 ;
-(double)maxScaleFactor;
-(void)setDisplaysRTL:(BOOL)arg1 ;
-(void)setScrollViewScrollEnabled:(BOOL)arg1 ;
-(void)updateScrollViews;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 ;
@end

