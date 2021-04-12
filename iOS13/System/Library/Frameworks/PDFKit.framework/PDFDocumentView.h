/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFTextInputView.h>
#import <PDFKit/PDFPageBackgroundManagerDelegate.h>
#import <PDFKit/PDFDocumentPageChangeDelegate.h>
#import <PDFKit/PDFTextInputDelegate.h>

@class PDFDocumentViewPrivate, NSString;

@interface PDFDocumentView : PDFTextInputView <PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate, PDFTextInputDelegate> {

	PDFDocumentViewPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)pageViews;
-(void)setDocument:(id)arg1 ;
-(void)_updateVisibility;
-(id)document;
-(id)pdfView;
-(id)initWithPDFView:(id)arg1 ;
-(id)pageViewForPageAtIndex:(unsigned long long)arg1 ;
-(void)layoutDocumentView;
-(void)changedBoundsForBoxNotification:(id)arg1 ;
-(void)didRotatePageNotification:(id)arg1 ;
-(id)pageBackgroundManager;
-(void)willForceUpdate;
-(void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2 ;
-(id)backgroundImageForPage:(id)arg1 withQuality:(int*)arg2 ;
-(void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3 ;
-(void)willInsertPage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)willRemovePage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)willSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)didSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(CGSize)documentViewSize;
-(id)_createPageView:(id)arg1 ;
-(CGPoint)_pixelAlignPageFrameOrigin:(CGRect)arg1 ;
-(void)_updateVisibilityDelegateForVisiblePageView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)createPageViewForPageAtIndex:(unsigned long long)arg1 withFrame:(CGRect)arg2 ;
-(void)removePageViewForPageAtIndex:(unsigned long long)arg1 ;
-(void)updateVisibility;
-(void)_removePageOverlaysStartingAtIndex:(unsigned long long)arg1 ;
-(void)_shiftPagesAtIndex:(unsigned long long)arg1 downwards:(BOOL)arg2 ;
-(void)_reAddPageOverlaysStartingAtIndex:(unsigned long long)arg1 ;
-(void)previewRotateShiftPages:(double)arg1 ;
@end

