/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class PDFExtensionViewControllerPrivate;

@interface PDFExtensionViewController : UIViewController {

	PDFExtensionViewControllerPrivate* _private;

}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)selectAll;
-(id)init;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)copy;
-(void)setMaximumZoomScale:(double)arg1 ;
-(void)viewDidLoad;
-(void)goToPageIndex:(long long)arg1 ;
-(void)cancelFindString;
-(void)findString:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)focusOnSearchResultAtIndex:(unsigned long long)arg1 ;
-(void)cancelFindStringWithHighlightsCleared:(BOOL)arg1 ;
-(void)_updatePageCount;
-(void)setDocumentData:(id)arg1 ;
-(void)unlockWithPassword:(id)arg1 ;
-(void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 isIndirectTouch:(BOOL)arg5 ;
-(void)clearSearchHighlights;
-(void)updatePDFViewLayout:(CGRect)arg1 scrollViewFrame:(CGRect)arg2 safeAreaInsets:(UIEdgeInsets)arg3 zoomScale:(double)arg4 ;
-(void)snapshotViewRect:(CGRect)arg1 forWidth:(double)arg2 afterScreenUpdates:(BOOL)arg3 ;
-(void)pointerRegionForLocation:(CGPoint)arg1 ;
-(void)documentDidEndDocumentFind:(id)arg1 ;
-(void)didMatchString:(id)arg1 ;
-(void)_pageChangedNotification:(id)arg1 ;
-(void)_goToPage:(id)arg1 ;
-(void)_goToDestination:(id)arg1 ;
-(void)_pdfViewZoomToRect:(id)arg1 ;
-(void)_selectionChangedNotification:(id)arg1 ;
-(void)_selectionPointsChangedNotification:(id)arg1 ;
-(void)_textSelectionShowTextSelectionMenu:(id)arg1 ;
-(void)_textSelectionDidCopyStringNotification:(id)arg1 ;
-(void)_textSelectionDidCopyDataNotification:(id)arg1 ;
-(void)_annotationHitNotification:(id)arg1 ;
-(void)_annotationLongPressNotification:(id)arg1 ;
-(void)_setupDocumentViewSize;
-(void)setupPDFView;
-(void)_updateDocumentIsLocked;
-(void)_zoomToRect:(CGRect)arg1 ;
-(void)_updateTextSelectionPoints;
@end

