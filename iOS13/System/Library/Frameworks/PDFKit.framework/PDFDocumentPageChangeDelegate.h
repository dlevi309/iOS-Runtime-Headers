/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFDocumentPageChangeDelegate <NSObject>
@optional
-(void)willInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)willRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)willSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
-(void)didSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;

@end

