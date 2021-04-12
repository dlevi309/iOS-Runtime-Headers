/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSPhishingClassifier <WBSPhishingURLClassifier>
@required
-(void)classifyURL:(id)arg1 image:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)classifyURL:(id)arg1 webView:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)takeSnapshotForWebView:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setClassification:(unsigned long long)arg1 forURL:(id)arg2;

@end

