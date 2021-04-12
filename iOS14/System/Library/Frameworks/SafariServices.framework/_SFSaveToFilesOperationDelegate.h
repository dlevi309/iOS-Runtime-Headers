/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFSaveToFilesOperationDelegate <NSObject>
@optional
-(BOOL)saveToFilesOperationSupportsDownloads:(id)arg1;
-(id)customizationControllerForSaveToFilesOperation:(id)arg1;
-(BOOL)saveToFilesOperationShouldDismissViewControllerAfterCompletion:(id)arg1;

@required
-(void)saveToFilesOperation:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
-(void)saveToFilesOperation:(id)arg1 presentViewController:(id)arg2;

@end

