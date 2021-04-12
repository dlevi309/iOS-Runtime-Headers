/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLPrintingProtocol
@required
-(void)numberOfPagesWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prepareForDrawingPages:(NSRange)arg1 ofSize:(CGSize)arg2;
-(void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)provideCurrentPageAndVisibleRectWithCompletionHandler:(/*^block*/id)arg1;

@end

