/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

@class NSString, FCArticle;


@protocol NUArticleDataProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,readonly) FCArticle * article; 
@required
-(NSString *)articleID;
-(FCArticle *)article;
-(void)prefetchAssets;
-(void)cancelAssetPrefetch;
-(void)loadContextWithCompletionBlock:(/*^block*/id)arg1;

@end

