/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSQuickWebsiteSearchProviderDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary, WBSCoalescedAsynchronousWriter, NSArray, NSString;

@interface WBSQuickWebsiteSearchController : NSObject <WBSQuickWebsiteSearchProviderDelegate> {

	NSURL* _searchDescriptionsURL;
	BOOL _hasBegunLoadingFromDisk;
	NSObject*<OS_dispatch_queue> _quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
	NSMutableDictionary* _quickWebsiteSearchProvidersByHost;
	NSMutableDictionary* _openSearchDescriptionsByDescriptionDocumentURLString;
	NSMutableDictionary* _hostSetsByOpenSearchDescriptionDocumentURLString;
	WBSCoalescedAsynchronousWriter* _writer;
	BOOL _quickWebsiteSearchProvidersLoadedFromDisk;

}

@property (assign) BOOL quickWebsiteSearchProvidersLoadedFromDisk;              //@synthesize quickWebsiteSearchProvidersLoadedFromDisk=_quickWebsiteSearchProvidersLoadedFromDisk - In the implementation block
@property (nonatomic,readonly) NSArray * quickWebsiteSearchHosts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)clear;
-(id)_dictionaryRepresentation;
-(void)_loadFromDisk;
-(void)savePendingChangesBeforeTermination;
-(id)_initWithSearchDescriptionsURL:(id)arg1 ;
-(void)beginLoadingFromDiskIfNeeded;
-(void)_didCollectOpenSearchDescription:(id)arg1 ;
-(void)_didFinishLoadingFromDisk;
-(void)_resetCachedDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_saveToDiskSoon;
-(BOOL)quickWebsiteSearchProvidersLoadedFromDisk;
-(BOOL)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg1 ;
-(void)_sendNotification:(id)arg1 forQuickWebsiteSearchProvider:(id)arg2 ;
-(void)_addHost:(id)arg1 toOpenSearchDescriptionWithDocumentURL:(id)arg2 ;
-(void)_removeHost:(id)arg1 fromOpenSearchDescriptionWithDocumentURL:(id)arg2 ;
-(void)removeProvidersWithHosts:(id)arg1 ;
-(id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1 ;
-(BOOL)_shouldRemoveQuickWebsiteSearchProvider:(id)arg1 ;
-(void)_pruneUnusedQuickWebsiteSearchProviders;
-(void)setQuickWebsiteSearchProvidersLoadedFromDisk:(BOOL)arg1 ;
-(id)quickWebsiteSearchProvider:(id)arg1 openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg2 ;
-(void)noteProvidersAreStale;
-(void)removeProvidersAddedAfterDate:(id)arg1 beforeDate:(id)arg2 ;
-(NSArray *)quickWebsiteSearchHosts;
-(id)providersMatchingQueryString:(id)arg1 ;
-(void)didPerformSearchWithProvider:(id)arg1 ;
-(void)setSearchURLTemplateFromForm:(id)arg1 forSourcePageURLString:(id)arg2 ;
-(void)setOpenSearchDescriptionURLString:(id)arg1 forSourcePageURLString:(id)arg2 ;
-(id)providerForSourcePageURLString:(id)arg1 ;
-(void)removeProviderWithHost:(id)arg1 ;
@end

