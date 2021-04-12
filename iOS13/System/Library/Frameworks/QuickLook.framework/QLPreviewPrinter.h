/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIPrintPageRenderer.h>

@protocol QLPrintingProtocol;
@interface QLPreviewPrinter : UIPrintPageRenderer {

	id<QLPrintingProtocol> _printer;

}

@property (readonly) id<QLPrintingProtocol> printer;              //@synthesize printer=_printer - In the implementation block
-(long long)numberOfPages;
-(id<QLPrintingProtocol>)printer;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)drawPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(id)initWithPreviewPrinter:(id)arg1 ;
@end

