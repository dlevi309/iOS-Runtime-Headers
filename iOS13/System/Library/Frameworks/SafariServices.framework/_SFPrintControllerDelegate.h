/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

