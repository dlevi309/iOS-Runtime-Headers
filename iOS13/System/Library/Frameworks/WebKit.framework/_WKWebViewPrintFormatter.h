/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIViewPrintFormatter.h>

@class _WKFrameHandle;

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {

	RetainPtr<_WKFrameHandle>* _frameToPrint;
	RetainPtr<CGPDFDocument *>* _printedDocument;
	BOOL _suppressPageCountRecalc;
	BOOL _snapshotFirstPage;

}

@property (nonatomic,retain) _WKFrameHandle * frameToPrint; 
@property (assign,nonatomic) BOOL snapshotFirstPage;                     //@synthesize snapshotFirstPage=_snapshotFirstPage - In the implementation block
-(id)_webView;
-(void)_setNeedsRecalc;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(_WKFrameHandle *)frameToPrint;
-(void)setFrameToPrint:(_WKFrameHandle *)arg1 ;
-(BOOL)snapshotFirstPage;
-(void)_setSnapshotPaperRect:(CGRect)arg1 ;
-(void)setSnapshotFirstPage:(BOOL)arg1 ;
@end

