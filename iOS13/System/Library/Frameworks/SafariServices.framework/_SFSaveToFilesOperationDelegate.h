/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFSaveToFilesOperationDelegate <NSObject>
@optional
-(BOOL)saveToFilesOperationSupportsDownloads:(id)arg1;
-(id)customizationControllerForSaveToFilesOperation:(id)arg1;

@required
-(void)saveToFilesOperation:(id)arg1 presentViewController:(id)arg2;
-(void)saveToFilesOperation:(id)arg1 didFinishWithSuccess:(BOOL)arg2;

@end

