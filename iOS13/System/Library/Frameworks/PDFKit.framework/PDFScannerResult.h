/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFScannerResultPrivate;

@interface PDFScannerResult : NSObject {

	PDFScannerResultPrivate* _private;

}
-(CGRect)bounds;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(id)rects;
-(id)ddResult;
-(BOOL)resultIsPastDate;
-(BOOL)hasActionsForResult;
-(DDHighlightRef)highlightRef;
-(BOOL)containsPoint:(CGPoint)arg1 onPageLayer:(id)arg2 ;
-(BOOL)pointIsOnButton:(CGPoint)arg1 onPageLayer:(id)arg2 ;
-(id)initWithDDScannerResult:(id)arg1 foundOnPage:(id)arg2 ;
-(void)setHighlightRef:(DDHighlightRef)arg1 ;
-(BOOL)pointIsOnButton:(CGPoint)arg1 ;
-(void)setButtonPressed:(BOOL)arg1 ;
@end

