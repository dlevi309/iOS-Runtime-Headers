/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIPrintPageRenderer.h>

@protocol QLPrintingProtocol;
@interface QLPreviewPrinter : UIPrintPageRenderer {

	id<QLPrintingProtocol> _printer;

}

@property (readonly) id<QLPrintingProtocol> printer;              //@synthesize printer=_printer - In the implementation block
-(id<QLPrintingProtocol>)printer;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)drawPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(long long)numberOfPages;
-(id)initWithPreviewPrinter:(id)arg1 ;
@end

