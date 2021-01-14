/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_resetPaginationInfo;
-(void)removeFromPrintPageRenderer;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)_webDocumentView;
-(void)setFrameToPrint:(WebFrame *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WebFrame *)frameToPrint;
@end

