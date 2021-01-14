/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFPrintControllerDelegate <NSObject>
@optional
-(id)URLStringForPrintController:(id)arg1;
-(id)pageTitleForPrintController:(id)arg1;
-(id)loadingDialogPageTitleForPrintController:(id)arg1;
-(void)printController:(id)arg1 didCreatePrintInfo:(id)arg2;

@required
-(BOOL)printControllerPageIsLoading:(id)arg1;
-(BOOL)printControllerShouldPrintReader:(id)arg1;
-(BOOL)printControllerCanPresentPrintUI:(id)arg1;
-(id)presentingViewControllerForPrintController:(id)arg1;

@end

