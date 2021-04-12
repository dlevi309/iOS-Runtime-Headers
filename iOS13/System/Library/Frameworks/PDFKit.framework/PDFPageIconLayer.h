/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class PDFDocument;

@interface PDFPageIconLayer : CALayer {

	PDFDocument* _document;
	CGSize _frameSize;
	int _pageIndex;
	BOOL _needsUpdate;

}
-(id)initWithSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsUpdate;
-(int)pageIndex;
-(id)document;
-(void)updateAsPageIndex:(int)arg1 forDocument:(id)arg2 ;
@end

