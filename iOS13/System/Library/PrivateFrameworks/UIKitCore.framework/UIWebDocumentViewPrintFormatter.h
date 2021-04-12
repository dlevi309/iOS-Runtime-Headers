/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewPrintFormatter.h>

@class UIWebPaginationInfo, WebFrame;

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {

	UIWebPaginationInfo* _paginationInfo;
	WebFrame* _frameToPrint;

}

@property (nonatomic,retain) WebFrame * frameToPrint;              //@synthesize frameToPrint=_frameToPrint - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeFromPrintPageRenderer;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)_webDocumentView;
-(WebFrame *)frameToPrint;
-(void)setFrameToPrint:(WebFrame *)arg1 ;
@end

