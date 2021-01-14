/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFScannerResultPrivate;

@interface PDFScannerResult : NSObject {

	PDFScannerResultPrivate* _private;

}
-(id)rects;
-(CGRect)bounds;
-(BOOL)containsPoint:(CGPoint)arg1 ;
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

