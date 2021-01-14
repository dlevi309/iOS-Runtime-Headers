/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleDataProvider.h>

@protocol FCContentContext, NUFontRegistration, SXHost, NUEmbedDataManager;
@class NSString, FCArticle, NUANFFontLoader, NUANFContextLoader, NUANFAssetLoader, NFEventManager, NUANFLinkedContentLoader;

@interface NUANFArticleDataProvider : NSObject <NUArticleDataProvider> {

	FCArticle* _article;
	NSString* _articleID;
	id<FCContentContext> _contentContext;
	id<NUFontRegistration> _fontRegistration;
	id<SXHost> _host;
	NUANFFontLoader* _fontLoader;
	NUANFContextLoader* _contextLoader;
	NUANFAssetLoader* _assetLoader;
	id<NUEmbedDataManager> _embedDataManger;
	NFEventManager* _eventManager;
	NUANFLinkedContentLoader* _linkedContentLoader;

}

@property (nonatomic,copy) NSString * articleID;                                          //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;                       //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) id<NUFontRegistration> fontRegistration;                   //@synthesize fontRegistration=_fontRegistration - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                                           //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) FCArticle * article;                                         //@synthesize article=_article - In the implementation block
@property (nonatomic,retain) NUANFFontLoader * fontLoader;                                //@synthesize fontLoader=_fontLoader - In the implementation block
@property (nonatomic,retain) NUANFContextLoader * contextLoader;                          //@synthesize contextLoader=_contextLoader - In the implementation block
@property (nonatomic,retain) NUANFAssetLoader * assetLoader;                              //@synthesize assetLoader=_assetLoader - In the implementation block
@property (nonatomic,retain) id<NUEmbedDataManager> embedDataManger;                      //@synthesize embedDataManger=_embedDataManger - In the implementation block
@property (nonatomic,retain) NFEventManager * eventManager;                               //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,retain) NUANFLinkedContentLoader * linkedContentLoader;              //@synthesize linkedContentLoader=_linkedContentLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NFEventManager *)eventManager;
-(id<SXHost>)host;
-(void)setEventManager:(NFEventManager *)arg1 ;
-(FCArticle *)article;
-(id<FCContentContext>)contentContext;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(void)setArticle:(FCArticle *)arg1 ;
-(void)dealloc;
-(id)headlineForIdentifier:(id)arg1 ;
-(NUANFAssetLoader *)assetLoader;
-(void)setAssetLoader:(NUANFAssetLoader *)arg1 ;
-(id<NUFontRegistration>)fontRegistration;
-(void)prefetchAssets;
-(void)cancelAssetPrefetch;
-(void)loadContextWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setupAssetPrefetchRequestEventsWithEvents:(id)arg1 ;
-(NUANFFontLoader *)fontLoader;
-(NUANFContextLoader *)contextLoader;
-(id<NUEmbedDataManager>)embedDataManger;
-(NUANFLinkedContentLoader *)linkedContentLoader;
-(void)loadArticleWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadArticleIfNeeded;
-(void)setContextLoader:(NUANFContextLoader *)arg1 ;
-(void)setFontLoader:(NUANFFontLoader *)arg1 ;
-(void)setLinkedContentLoader:(NUANFLinkedContentLoader *)arg1 ;
-(void)setupAssetPrefetchCancellationWithOperation:(id)arg1 ;
-(id)initWithArticle:(id)arg1 contentContext:(id)arg2 fontRegistration:(id)arg3 host:(id)arg4 embedDataManager:(id)arg5 ;
-(void)setEmbedDataManger:(id<NUEmbedDataManager>)arg1 ;
@end

