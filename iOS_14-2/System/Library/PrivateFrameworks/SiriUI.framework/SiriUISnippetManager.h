/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol OS_dispatch_queue;
@class AFClientPluginManager, NSDictionary, NSObject;

@interface SiriUISnippetManager : NSObject {

	AFClientPluginManager* _pluginManager;
	NSDictionary* _snippetExtensionsCache;
	NSObject*<OS_dispatch_queue> _snippetExtensionsQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)snippetViewControllerForSnippet:(id)arg1 ;
-(void)_prewarmSnippetExtensionsCacheSynchronously;
-(id)_snippetExtensionsCache;
-(BOOL)_compareObject:(id)arg1 toObject:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)transcriptItemForObject:(id)arg1 sizeClass:(long long)arg2 ;
-(id)_createDebugViewControllerForAceObject:(id)arg1 ;
-(id)filteredDisambiguationListItems:(id)arg1 ;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2 ;
-(BOOL)_listItem:(id)arg1 isEqualToListItem:(id)arg2 ;
-(BOOL)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2 ;
-(void)preloadPluginBundles;
-(void)prewarmSnippetExtensionsCache;
-(id)extensionForSnippet:(id)arg1 ;
-(id)transcriptItemForObject:(id)arg1 ;
-(id)listItemToPickInAutodisambiguationForListItems:(id)arg1 ;
-(id)speakableProviderForObject:(id)arg1 ;
@end

