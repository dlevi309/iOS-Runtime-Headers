/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleViewControllerFactory.h>
@class NSHashTable;


@protocol NUArticleViewControllerFactory <NSObject>
@property (nonatomic,readonly) NSHashTable * loadingListeners; 
@required
-(id)createArticleViewControllerWithArticle:(id)arg1 issue:(id)arg2;
-(NSHashTable *)loadingListeners;
-(id)createArticleViewControllerWithArticle:(id)arg1;
-(id)createArticleWebViewControllerWithArticle:(id)arg1;
-(id)createArticleExcerptViewControllerWithArticle:(id)arg1 traits:(id)arg2;

@end


@protocol NUArticleDataProviderFactory, NUArticleAdManagerFactory, SXAppStateMonitor, SXURLHandling, NUArticleKeyCommandManager, NFResolver, NUDocumentSectionBlueprintProvider, NUArticlePrefetcherType;
@class NSHashTable, NSString;

@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory> {

	NSHashTable* _loadingListeners;
	id<NUArticleDataProviderFactory> _articleDataProviderFactory;
	id<NUArticleAdManagerFactory> _articleAdManagerFactory;
	id<SXAppStateMonitor> _appStateMonitor;
	id<SXURLHandling> _URLHandler;
	id<NUArticleKeyCommandManager> _keyCommandManager;
	id<NFResolver> _resolver;
	id<NUDocumentSectionBlueprintProvider> _headerBlueprintProvider;
	id<NUArticlePrefetcherType> _articlePrefetcher;

}

@property (nonatomic,readonly) id<NUArticleDataProviderFactory> articleDataProviderFactory;                 //@synthesize articleDataProviderFactory=_articleDataProviderFactory - In the implementation block
@property (nonatomic,readonly) id<NUArticleAdManagerFactory> articleAdManagerFactory;                       //@synthesize articleAdManagerFactory=_articleAdManagerFactory - In the implementation block
@property (nonatomic,readonly) id<SXAppStateMonitor> appStateMonitor;                                       //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (nonatomic,readonly) id<SXURLHandling> URLHandler;                                                //@synthesize URLHandler=_URLHandler - In the implementation block
@property (nonatomic,readonly) id<NUArticleKeyCommandManager> keyCommandManager;                            //@synthesize keyCommandManager=_keyCommandManager - In the implementation block
@property (nonatomic,readonly) id<NFResolver> resolver;                                                     //@synthesize resolver=_resolver - In the implementation block
@property (nonatomic,readonly) id<NUDocumentSectionBlueprintProvider> headerBlueprintProvider;              //@synthesize headerBlueprintProvider=_headerBlueprintProvider - In the implementation block
@property (nonatomic,readonly) id<NUArticlePrefetcherType> articlePrefetcher;                               //@synthesize articlePrefetcher=_articlePrefetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSHashTable * loadingListeners;                                              //@synthesize loadingListeners=_loadingListeners - In the implementation block
-(id<NFResolver>)resolver;
-(id<SXAppStateMonitor>)appStateMonitor;
-(id)initWithArticleDataProviderFactory:(id)arg1 articleAdManagerFactory:(id)arg2 appStateMonitor:(id)arg3 URLHandler:(id)arg4 keyCommandManager:(id)arg5 headerBlueprintProvider:(id)arg6 articlePrefetcher:(id)arg7 resolver:(id)arg8 ;
-(id)createArticleViewControllerWithArticle:(id)arg1 issue:(id)arg2 ;
-(id<NUArticlePrefetcherType>)articlePrefetcher;
-(id<NUArticleDataProviderFactory>)articleDataProviderFactory;
-(id<NUArticleAdManagerFactory>)articleAdManagerFactory;
-(id<SXURLHandling>)URLHandler;
-(id<NUArticleKeyCommandManager>)keyCommandManager;
-(NSHashTable *)loadingListeners;
-(id<NUDocumentSectionBlueprintProvider>)headerBlueprintProvider;
-(id)createArticleViewControllerWithArticle:(id)arg1 ;
-(id)createArticleWebViewControllerWithArticle:(id)arg1 ;
-(id)createArticleExcerptViewControllerWithArticle:(id)arg1 traits:(id)arg2 ;
-(id)initWithArticleDataProviderFactory:(id)arg1 articleAdManagerFactory:(id)arg2 appStateMonitor:(id)arg3 keyCommandManager:(id)arg4 headerBlueprintProvider:(id)arg5 articlePrefetcher:(id)arg6 resolver:(id)arg7 ;
@end

