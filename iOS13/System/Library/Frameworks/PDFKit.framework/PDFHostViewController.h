/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>

@class PDFHostViewControllerPrivate, NSString;

@interface PDFHostViewController : _UIRemoteViewController <UIGestureRecognizerDelegate, UIDocumentPasswordViewDelegate> {

	PDFHostViewControllerPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)backgroundColor;
+(id)serviceViewControllerInterface;
+(void)createHostView:(/*^block*/id)arg1 forExtensionIdentifier:(id)arg2 ;
+(id)loadExtension:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(long long)pageCount;
-(void)_pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 completion:(/*^block*/id)arg4 ;
-(double)minimumZoomScale;
-(double)maximumZoomScale;
-(void)selectAll:(id)arg1 ;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(long long)currentPageIndex;
-(void)setup;
-(void)updatePDFViewLayout;
-(void)goToPageIndex:(long long)arg1 ;
-(void)cancelFindString;
-(void)findString:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)focusOnSearchResultAtIndex:(unsigned long long)arg1 ;
-(void)beginPDFViewRotation;
-(void)endPDFViewRotation;
-(void)snapshotViewRect:(CGRect)arg1 snapshotWidth:(id)arg2 afterScreenUpdates:(BOOL)arg3 withResult:(/*^block*/id)arg4 ;
-(void)cancelFindStringWithHighlightsCleared:(BOOL)arg1 ;
-(id)pageNumberIndicator;
-(void)setDocumentData:(id)arg1 withScrollView:(id)arg2 ;
-(void)clearSearchHighlights;
-(void)_gestureInit;
-(void)_setupExtensionInterruptionBlock;
-(void)_resetPDFHostViewControllerViews;
-(void)findStringUpdate:(unsigned long long)arg1 done:(BOOL)arg2 ;
-(UIEdgeInsets)_pdfViewSafeAreaInsets;
-(double)_hostScrollViewZoomScale;
-(CGRect)_insetBoundsInDocument;
-(void)_endPDFViewRotationAnimated:(BOOL)arg1 withUpdate:(BOOL)arg2 ;
-(void)updateDocumentViewSize;
-(void)updateAutoScaleFactor;
-(CGSize)_documentViewSize;
-(UIEdgeInsets)_pdfViewInsets;
-(void)_setMinimumZoomScale:(double)arg1 ;
-(void)_setMaximumZoomScale:(double)arg1 ;
-(void)_appendPasswordUI;
-(void)handleGesture:(id)arg1 ;
-(BOOL)_isTouchingLollipopAtLocationOfFirstTouch:(CGPoint)arg1 ;
-(unsigned long long)_typeForGestureRecognizer:(id)arg1 ;
-(void)goToPageIndex:(long long)arg1 withViewFrustum:(CGRect)arg2 ;
-(void)recievedSnapshotViewRect:(id)arg1 ;
-(void)setupDocumentViewSize:(CGSize)arg1 ;
-(void)documentIsLocked:(BOOL)arg1 ;
-(void)updateCurrentPageIndex:(long long)arg1 ;
-(void)updatePageCount:(long long)arg1 ;
-(void)showSelectionRect:(CGRect)arg1 ;
-(void)setHasSelection:(BOOL)arg1 ;
-(void)setTextSelectionPoints:(CGPoint)arg1 right:(CGPoint)arg2 ;
-(void)showTextSelectionMenu:(BOOL)arg1 selectionRect:(CGRect)arg2 ;
-(void)zoomToRect:(CGRect)arg1 ;
-(void)goToURL:(id)arg1 atLocation:(CGPoint)arg2 ;
-(void)goToPageIndex:(long long)arg1 pageFrame:(CGRect)arg2 ;
-(void)goToDestination:(long long)arg1 point:(CGPoint)arg2 ;
-(void)didCopyString:(id)arg1 ;
-(void)didCopyData:(id)arg1 ;
-(void)updateDocumentIsLocked:(BOOL)arg1 ;
-(void)didLongPressURL:(id)arg1 atLocation:(CGPoint)arg2 withAnnotationRect:(CGRect)arg3 ;
-(void)didLongPressPageIndex:(long long)arg1 atLocation:(CGPoint)arg2 withAnnotationRect:(CGRect)arg3 ;
-(void)completePointerInteractionRegionForRequest:(id)arg1 ;
-(void)endPDFViewRotationWithContentInset:(UIEdgeInsets)arg1 ;
-(void)killExtensionProcess;
@end

