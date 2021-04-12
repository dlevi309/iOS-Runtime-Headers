/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSSet;


@protocol FCOfflineArticleManagerType
@property (nonatomic,readonly) NSSet * downloadedArticleIDs; 
@required
-(void)enableDownloading;
-(void)addContributor:(id)arg1;
-(NSSet *)downloadedArticleIDs;
-(void)expressInterestInArticlesWithCompletionHandler:(/*^block*/id)arg1;
-(void)notifyWhenFinishedDownloadingWithBlock:(/*^block*/id)arg1;

@end

