/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLPrintingProtocol
@required
-(void)numberOfPagesWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prepareForDrawingPages:(NSRange)arg1 ofSize:(CGSize)arg2;
-(void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)provideCurrentPageAndVisibleRectWithCompletionHandler:(/*^block*/id)arg1;

@end

