/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)printer;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)drawPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)_didReceivePrinter:(id)arg1 ;
-(id<QLPrintingProtocol>)itemPrinter;
-(id)initWithItem:(id)arg1 ;
-(long long)numberOfPages;
-(void)_waitForPrinterSynchronously;
-(void)setItemPrinter:(id<QLPrintingProtocol>)arg1 ;
@end

