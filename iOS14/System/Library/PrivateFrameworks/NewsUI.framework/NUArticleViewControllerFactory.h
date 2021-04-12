/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleViewControllerFactory.h>

@protocol NUArticleViewControllerFactory <NSObject>
@property (readonly,nonatomic) id loadingListeners; 
@required
-(id)loadingListeners;
-(id)createArticleViewControllerWithArticle:(id)arg1 context:(id)arg2;
-(id)createArticleViewControllerWithArticle:(id)arg1 context:(id)arg2;
-(id)createArticleViewControllerWithArticle:(id)arg1 issue:(id)arg2 context:(id)arg3;
-(id)createArticleViewControllerWithArticle:(id)arg1 issue:(id)arg2 context:(id)arg3;

@end


@protocol NUArticleDataProviderFactory, NUArticleAdManagerFactory, SXAppStateMonitor, NUArticleKeyCommandManager, NFResolver, NUDocumentSectionBlueprintProvider, NUArticlePrefetcherType, NUArticleScrollPositionManagerType, NUSpotlightManager;
@class NSHashTable, NSString;

@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory> {

	NSHashTable* _loadingListeners;
	id<NUArticleDataProviderFactory> _articleDataProviderFactory;
	id<NUArticleAdManagerFactory> _articleAdManagerFactory;
	id<SXAppStateMonitor> _appStateMonitor;
	id<NUArticleKeyCommandManager> _keyCommandManager;
	id<NFResolver> _resolver;
	id<NUDocumentSectionBlueprintProvider> _headerBlueprintProvider;
	id<NUArticlePrefetcherType> _articlePrefetcher;
	id<NUArticleScrollPositionManagerType> _articleScrollPositionManager;
	id<NUSpotlightManager> _spotlightManager;

}

@property (nonatomic,readonly) id<NUArticleDataProviderFactory> articleDataProviderFactory;                      //@synthesize articleDataProviderFactory=_articleDataProviderFactory - In the implementation block
@property (nonatomic,readonly) id<NUArticleAdManagerFactory> articleAdManagerFactory;                            //@synthesize articleAdManagerFactory=_articleAdManagerFactory - In the implementation block
@property (nonatomic,readonly) id<SXAppStateMonitor> appStateMonitor;                                            //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (nonatomic,readonly) id<NUArticleKeyCommandManager> keyCommandManager;                                 //@synthesize keyCommandManager=_keyCommandManager - In the implementation block
@property (nonatomic,readonly) id<NFResolver> resolver;                                                          //@synthesize resolver=_resolver - In the implementation block
@property (nonatomic,readonly) id<NUDocumentSectionBlueprintProvider> headerBlueprintProvider;                   //@synthesize headerBlueprintProvider=_headerBlueprintProvider - In the implementation block
@property (nonatomic,readonly) id<NUArticlePrefetcherType> articlePrefetcher;                                    //@synthesize articlePrefetcher=_articlePrefetcher - In the implementation block
@property (nonatomic,readonly) id<NUArticleScrollPositionManagerType> articleScrollPositionManager;              //@synthesize articleScrollPositionManager=_articleScrollPositionManager - In the implementation block
@property (nonatomic,readonly) id<NUSpotlightManager> spotlightManager;                                          //@synthesize spotlightManager=_spotlightManager - In the implementation block
@property (nonatomic,readonly) NSHashTable * loadingListeners;                                                   //@synthesize loadingListeners=_loadingListeners - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFResolver>)resolver;
-(id<SXAppStateMonitor>)appStateMonitor;
-(NSHashTable *)loadingListeners;
-(id)createArticleViewControllerWithArticle:(id)arg1 context:(id)arg2 ;
-(id)createArticleViewControllerWithArticle:(id)arg1 issue:(id)arg2 context:(id)arg3 ;
-(id<NUArticlePrefetcherType>)articlePrefetcher;
-(id<NUArticleDataProviderFactory>)articleDataProviderFactory;
-(id<NUArticleAdManagerFactory>)articleAdManagerFactory;
-(id<NUArticleKeyCommandManager>)keyCommandManager;
-(id<NUDocumentSectionBlueprintProvider>)headerBlueprintProvider;
-(id<NUArticleScrollPositionManagerType>)articleScrollPositionManager;
-(id<NUSpotlightManager>)spotlightManager;
-(id)initWithArticleDataProviderFactory:(id)arg1 articleAdManagerFactory:(id)arg2 appStateMonitor:(id)arg3 keyCommandManager:(id)arg4 headerBlueprintProvider:(id)arg5 articlePrefetcher:(id)arg6 articleScrollPositionManager:(id)arg7 spotlightManager:(id)arg8 resolver:(id)arg9 ;
@end

