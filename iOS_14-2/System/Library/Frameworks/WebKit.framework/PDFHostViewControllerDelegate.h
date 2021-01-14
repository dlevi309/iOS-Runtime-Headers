/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol PDFHostViewControllerDelegate <NSObject>
@optional
-(void)pdfHostViewController:(id)arg1 updateCurrentPageIndex:(long long)arg2;
-(void)pdfHostViewController:(id)arg1 updatePageCount:(long long)arg2;
-(void)pdfHostViewController:(id)arg1 documentDidUnlockWithPassword:(id)arg2;
-(void)pdfHostViewController:(id)arg1 findStringUpdate:(unsigned long long)arg2 done:(BOOL)arg3;
-(void)pdfHostViewController:(id)arg1 goToURL:(id)arg2;
-(void)pdfHostViewController:(id)arg1 goToURL:(id)arg2 atLocation:(CGPoint)arg3;
-(void)pdfHostViewController:(id)arg1 goToPageIndex:(long long)arg2;
-(void)pdfHostViewController:(id)arg1 goToPageIndex:(long long)arg2 withViewFrustum:(CGRect)arg3;
-(void)pdfHostViewController:(id)arg1 didLongPressURL:(id)arg2 atLocation:(CGPoint)arg3 withAnnotationRect:(CGRect)arg4;
-(void)pdfHostViewController:(id)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(CGPoint)arg3 withAnnotationRect:(CGRect)arg4;
-(void)pdfHostViewController:(id)arg1 didLongPressURL:(id)arg2 atLocation:(CGPoint)arg3;
-(void)pdfHostViewController:(id)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(CGPoint)arg3;
-(void)pdfHostViewControllerExtensionProcessDidCrash:(id)arg1;

@end

