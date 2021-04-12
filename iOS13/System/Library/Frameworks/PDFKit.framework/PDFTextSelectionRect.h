/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@class PDFPage;

@interface PDFTextSelectionRect : UITextSelectionRect {

	PDFPage* _page;
	CGRect _rect;
	BOOL _isStartingRect;
	BOOL _isEndingRect;

}
-(id)description;
-(BOOL)isVertical;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(CGRect)rect;
-(long long)writingDirection;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 ;
-(void)setIsStartingRect:(BOOL)arg1 ;
-(void)setIsEndingRect:(BOOL)arg1 ;
@end

