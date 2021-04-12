/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _WKDownloadDelegate <NSObject>
@optional
-(void)_downloadDidStart:(id)arg1;
-(void)_download:(id)arg1 didReceiveResponse:(id)arg2;
-(void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
-(id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(BOOL*)arg3;
-(void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_downloadDidFinish:(id)arg1;
-(void)_download:(id)arg1 didFailWithError:(id)arg2;
-(void)_downloadDidCancel:(id)arg1;
-(void)_download:(id)arg1 didReceiveServerRedirectToURL:(id)arg2;
-(void)_download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)_download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
-(void)_download:(id)arg1 didCreateDestination:(id)arg2;
-(void)_downloadProcessDidCrash:(id)arg1;

@end

