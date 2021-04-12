/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SXResourceDataSource.h>
#import <libobjc.A.dylib/SXEmbedDataProvider.h>
#import <libobjc.A.dylib/NUFontRegistrator.h>
#import <libobjc.A.dylib/NUArticleDataProvider.h>

@protocol NUEmbedDataManager;
@class FCArticle, NSString;

@interface NUBundledArticleDataProvider : NSObject <SXResourceDataSource, SXEmbedDataProvider, NUFontRegistrator, NUArticleDataProvider> {

	FCArticle* _article;
	id<NUEmbedDataManager> _embedDataManager;

}

@property (nonatomic,readonly) id<NUEmbedDataManager> embedDataManager;              //@synthesize embedDataManager=_embedDataManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,readonly) FCArticle * article;                                  //@synthesize article=_article - In the implementation block
-(FCArticle *)article;
-(NSString *)articleID;
-(/*^block*/id)loadImagesForImageRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)embedForType:(id)arg1 ;
-(id)translateURL:(id)arg1 ;
-(void)fileURLForURL:(id)arg1 onCompletion:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(void)registerFontsWithCompletion:(/*^block*/id)arg1 ;
-(void)prefetchAssets;
-(void)cancelAssetPrefetch;
-(void)loadContextWithCompletionBlock:(/*^block*/id)arg1 ;
-(id<NUEmbedDataManager>)embedDataManager;
-(void)performBlockForFontsInBundle:(/*^block*/id)arg1 ;
-(id)fileURLForBundleURL:(id)arg1 ;
-(id)initWithArticle:(id)arg1 embedDataManager:(id)arg2 ;
@end

