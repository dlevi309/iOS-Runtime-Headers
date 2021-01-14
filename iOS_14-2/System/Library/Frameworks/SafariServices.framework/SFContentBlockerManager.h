/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol OS_dispatch_queue;
@class WKUserContentController, NSSet, NSMutableSet, NSMutableDictionary, NSObject;

@interface SFContentBlockerManager : NSObject {

	id _extensionMatchingContext;
	WKUserContentController* _userContentController;
	NSSet* _extensions;
	NSMutableSet* _observers;
	BOOL _lastExtensionDiscoveryHadError;
	NSMutableDictionary* _extensionsRecompiledAfterBackup;
	NSObject*<OS_dispatch_queue> _recompilationInformationAccessQueue;

}

@property (nonatomic,readonly) NSSet * extensions; 
@property (nonatomic,readonly) WKUserContentController * userContentController; 
+(id)sharedManager;
+(id)_contentBlockerLoaderConnection;
+(void)getStateOfContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)contentBlockerStore;
+(void)_createContentExtensionsDirectoryWithURL:(id)arg1 ;
-(WKUserContentController *)userContentController;
-(void)addObserver:(id)arg1 ;
-(BOOL)extensionIsEnabled:(id)arg1 ;
-(id)init;
-(void)_recompileEnabledContentBlockersIfNeeded:(id)arg1 ;
-(void)reloadUserContentController;
-(void)_loadContentBlockerRecompilationInformationIfNeeded;
-(NSSet *)extensions;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_hasRecompilationBeenAttemptedForExtension:(id)arg1 ;
-(void)_beginContentBlockerDiscovery;
-(void)_noteRecompilationWasAttemptedForExtension:(id)arg1 ;
-(id)_findNewExtensionsAdded:(id)arg1 toExistingExtensions:(id)arg2 ;
-(void)_saveContentBlockerRecompilationInformation;
-(id)displayNameForExtension:(id)arg1 ;
-(void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setExtension:(id)arg1 isEnabled:(BOOL)arg2 ;
@end

