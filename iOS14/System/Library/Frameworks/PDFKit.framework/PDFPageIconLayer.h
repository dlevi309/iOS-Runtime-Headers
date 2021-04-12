/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNeedsUpdate;
-(id)initWithSize:(CGSize)arg1 ;
-(int)pageIndex;
-(void)setFrame:(CGRect)arg1 ;
-(id)document;
-(void)updateAsPageIndex:(int)arg1 forDocument:(id)arg2 ;
@end

