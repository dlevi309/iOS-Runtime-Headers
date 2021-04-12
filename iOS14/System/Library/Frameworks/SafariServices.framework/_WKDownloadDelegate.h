/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _WKDownloadDelegate <NSObject>
@optional
-(void)_download:(id)arg1 didReceiveServerRedirectToURL:(id)arg2;
-(void)_download:(id)arg1 didCreateDestination:(id)arg2;
-(BOOL)_download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
-(void)_downloadDidStart:(id)arg1;
-(void)_download:(id)arg1 didWriteData:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;
-(id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(BOOL*)arg3;
-(void)_download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_downloadDidCancel:(id)arg1;
-(void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
-(void)_downloadProcessDidCrash:(id)arg1;
-(void)_downloadDidFinish:(id)arg1;
-(void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_download:(id)arg1 didFailWithError:(id)arg2;
-(void)_download:(id)arg1 didReceiveResponse:(id)arg2;

@end

