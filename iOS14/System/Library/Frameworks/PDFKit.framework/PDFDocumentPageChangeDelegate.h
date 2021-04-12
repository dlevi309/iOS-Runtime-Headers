/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

