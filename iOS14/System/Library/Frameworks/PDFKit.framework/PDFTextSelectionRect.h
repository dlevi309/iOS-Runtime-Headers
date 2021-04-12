/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isVertical;
-(CGRect)rect;
-(id)description;
-(BOOL)containsEnd;
-(BOOL)containsStart;
-(long long)writingDirection;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 ;
-(void)setIsStartingRect:(BOOL)arg1 ;
-(void)setIsEndingRect:(BOOL)arg1 ;
@end

