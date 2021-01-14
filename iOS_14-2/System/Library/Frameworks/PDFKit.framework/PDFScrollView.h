/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class PDFScrollViewPrivate, NSString;

@interface PDFScrollView : UIScrollView <UIScrollViewDelegate> {

	PDFScrollViewPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateLayout;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)setDocument:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)setPDFView:(id)arg1 ;
-(void)centerAlign;
-(id)pdfDocumentView;
-(void)setForcesTopAlignment:(BOOL)arg1 ;
@end

