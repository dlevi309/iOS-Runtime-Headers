/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)markupText;
-(void)setMarkupText:(NSString *)arg1 ;
-(void)_resetPaginationInfo;
-(void)removeFromPrintPageRenderer;
-(long long)_recalcPageCount;
-(id)initWithMarkupText:(id)arg1 ;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

