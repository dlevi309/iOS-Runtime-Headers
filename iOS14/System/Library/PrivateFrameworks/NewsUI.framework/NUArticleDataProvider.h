/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

@class NSString, FCArticle;


@protocol NUArticleDataProvider <NSObject,NULinkedArticleContentProvider>
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,readonly) FCArticle * article; 
@required
-(FCArticle *)article;
-(NSString *)articleID;
-(void)prefetchAssets;
-(void)cancelAssetPrefetch;
-(void)loadContextWithCompletionBlock:(/*^block*/id)arg1;

@end

