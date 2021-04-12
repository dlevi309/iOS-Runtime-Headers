/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFAKOverlayAdaptor.h>

@class PDFAKOverlayAdaptorPrivate_ios;

@interface PDFAKOverlayAdaptor_ios : PDFAKOverlayAdaptor {

	PDFAKOverlayAdaptorPrivate_ios* _privateIOS;

}

@property (assign) BOOL singleFingerScrollingDisabled; 
-(void)dealloc;
-(id)initWithPDFView:(id)arg1 ;
-(void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2 ;
-(void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2 ;
-(void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_uninstallOverlayAtIndex:(unsigned long long)arg1 ;
-(BOOL)singleFingerScrollingDisabled;
-(void)annotationWillBeginEditing:(id)arg1 ;
-(void)annotationDidEndEditing:(id)arg1 ;
-(void)adjustScrollViewForKeyboardNotification:(id)arg1 ;
-(void)_setupGestureRecognizersForPageAtIndex:(unsigned long long)arg1 ;
-(void)_teardownGestureRecognizersForPageAtIndex:(unsigned long long)arg1 ;
-(id)_scrollViewRecognizersForPageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageIndexForAnnotation:(id)arg1 ;
-(void)setSingleFingerScrollingDisabled:(BOOL)arg1 ;
-(void)addDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 ;
-(void)removeDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 ;
-(void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(BOOL)arg3 ;
@end

