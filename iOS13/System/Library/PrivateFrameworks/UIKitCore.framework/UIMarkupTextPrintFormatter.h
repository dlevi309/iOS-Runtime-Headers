/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPrintFormatter.h>

@class UIWebDocumentView, UIWebPaginationInfo, NSString;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {

	UIWebDocumentView* _webDocumentView;
	UIWebPaginationInfo* _paginationInfo;
	NSString* _markupText;

}

@property (nonatomic,copy) NSString * markupText;              //@synthesize markupText=_markupText - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMarkupText:(NSString *)arg1 ;
-(void)removeFromPrintPageRenderer;
-(id)initWithMarkupText:(id)arg1 ;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(NSString *)markupText;
@end

