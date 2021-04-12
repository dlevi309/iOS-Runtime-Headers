/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SXResourceDataSource.h>
#import <libobjc.A.dylib/SXEmbedDataProvider.h>
#import <libobjc.A.dylib/NUFontRegistrator.h>
#import <libobjc.A.dylib/NUArticleDataProvider.h>

@class FCArticle, NSString;

@interface NUBundledArticleDataProvider : NSObject <SXResourceDataSource, SXEmbedDataProvider, NUFontRegistrator, NUArticleDataProvider> {

	FCArticle* _article;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,readonly) FCArticle * article;                    //@synthesize article=_article - In the implementation block
-(NSString *)articleID;
-(FCArticle *)article;
-(/*^block*/id)loadImagesForImageRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)fileURLForURL:(id)arg1 onCompletion:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(id)translateURL:(id)arg1 ;
-(id)initWithArticle:(id)arg1 ;
-(id)embedForType:(id)arg1 ;
-(void)registerFontsWithCompletion:(/*^block*/id)arg1 ;
-(void)prefetchAssets;
-(void)cancelAssetPrefetch;
-(void)loadContextWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)performBlockForFontsInBundle:(/*^block*/id)arg1 ;
-(id)fileURLForBundleURL:(id)arg1 ;
@end

