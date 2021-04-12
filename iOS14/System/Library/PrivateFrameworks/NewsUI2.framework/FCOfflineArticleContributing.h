/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

@class FCObservable;


@protocol FCOfflineArticleContributing
@property (nonatomic,readonly) FCObservable * articleIDsToDownload; 
@property (nonatomic,readonly) long long articleDownloadOptions; 
@required
-(FCObservable *)articleIDsToDownload;
-(long long)articleDownloadOptions;
-(void)prepareToContributeWithCompletionHandler:(/*^block*/id)arg1;

@end

