/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

