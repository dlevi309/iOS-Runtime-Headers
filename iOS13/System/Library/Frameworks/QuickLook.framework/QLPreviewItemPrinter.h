/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLPreviewPrinter.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, QLPrintingProtocol;
@class NSObject;

@interface QLPreviewItemPrinter : QLPreviewPrinter {

	NSObject*<OS_dispatch_queue> _accessPrinterQueue;
	NSObject*<OS_dispatch_semaphore> _waitForPrinterSemaphore;
	BOOL _didReceivePrinter;
	id<QLPrintingProtocol> _itemPrinter;

}

@property (nonatomic,retain) id<QLPrintingProtocol> itemPrinter;              //@synthesize itemPrinter=_itemPrinter - In the implementation block
-(id)initWithItem:(id)arg1 ;
-(long long)numberOfPages;
-(id)printer;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)drawPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)_didReceivePrinter:(id)arg1 ;
-(void)_waitForPrinterSynchronously;
-(id<QLPrintingProtocol>)itemPrinter;
-(void)setItemPrinter:(id<QLPrintingProtocol>)arg1 ;
@end

