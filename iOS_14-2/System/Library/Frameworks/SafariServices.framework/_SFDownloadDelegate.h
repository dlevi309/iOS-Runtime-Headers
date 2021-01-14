/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFDownloadDelegate <NSObject>
@optional
-(void)downloadDidImportFileToDownloadsFolder:(id)arg1;
-(void)createDirectoryForDownload:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)downloadDidReceiveResponse:(id)arg1;
-(void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(/*^block*/id)arg2;
-(void)downloadContentsDidChange:(id)arg1;
-(void)downloadWillBeDeleted:(id)arg1;
-(BOOL)downloadShouldImportPlaceholderToDownloadsFolder:(id)arg1;
-(void)downloadDidResume:(id)arg1;

@required
-(void)downloadDidStart:(id)arg1;
-(void)downloadDidFinish:(id)arg1;
-(void)downloadDidFail:(id)arg1;

@end

