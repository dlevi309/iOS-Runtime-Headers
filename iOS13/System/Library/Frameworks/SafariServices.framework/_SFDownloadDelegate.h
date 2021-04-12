/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFDownloadDelegate <NSObject>
@optional
-(BOOL)downloadShouldImportPlaceholderToDownloadsFolder:(id)arg1;
-(void)downloadDidImportFileToDownloadsFolder:(id)arg1;
-(void)downloadDidReceiveResponse:(id)arg1;
-(void)downloadDidResume:(id)arg1;
-(void)createDirectoryForDownload:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(/*^block*/id)arg2;
-(void)downloadContentsDidChange:(id)arg1;
-(void)downloadWillBeDeleted:(id)arg1;

@required
-(void)downloadDidFinish:(id)arg1;
-(void)downloadDidFail:(id)arg1;
-(void)downloadDidStart:(id)arg1;

@end

