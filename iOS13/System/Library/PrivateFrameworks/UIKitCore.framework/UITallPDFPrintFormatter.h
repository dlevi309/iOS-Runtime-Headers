/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPrintFormatter.h>

@class NSURL;

@interface UITallPDFPrintFormatter : UIPrintFormatter {

	NSURL* _pdfPath;
	CGPDFDocumentRef _pdfDocRef;
	double _pdfScaleFactor;
	BOOL _rotate90;
	double _shiftUpLength;

}
-(long long)_recalcPageCount;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)initWithPDFURL:(id)arg1 ;
-(id)initWithPDFData:(id)arg1 ;
@end

