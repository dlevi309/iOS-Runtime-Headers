/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <PDFKit/PDFTextInputDelegate.h>

@class PDFPageViewControllerPrivate, NSString;

@interface PDFPageViewController : UIViewController <UIScrollViewDelegate, PDFTextInputDelegate> {

	PDFPageViewControllerPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)textInputView;
-(id)scrollView;
-(id)selection;
-(void)setSelection:(id)arg1 ;
-(id)pdfView;
-(id)pageView;
-(void)setPDFView:(id)arg1 ;
-(void)enforceAutoScaleFactor;
-(double)autoScaleFactor;
-(void)setAutoScales:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 ;
-(void)changedBoundsForBoxNotification:(id)arg1 ;
-(void)didRotatePageNotification:(id)arg1 ;
-(void)_removePDFView;
-(void)_buildPDFPageView;
-(void)_updateAnnotations;
-(void)removeAKOverlay;
-(void)_centerAlign;
-(void)_setupGestureRecognizerDependencies;
-(void)setRenderingProperties:(id)arg1 ;
-(void)setPageBreakMargins:(UIEdgeInsets)arg1 ;
-(void)setPDFPage:(id)arg1 ;
-(id)PDFPage;
-(void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2 ;
@end

