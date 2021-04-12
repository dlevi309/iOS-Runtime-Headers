/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
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

