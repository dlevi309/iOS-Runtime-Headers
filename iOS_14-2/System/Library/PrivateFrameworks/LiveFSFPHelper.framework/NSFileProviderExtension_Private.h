/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/


@protocol NSFileProviderExtension_Private <NSObject>
@optional
-(void)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)evictItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_removeTrashedItemsOlderThanDate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_dumpInternalStateToTermDumper:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)acknowledgeUserVisibleRootLocationDidChangeToURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)changeItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6;
-(void)preflightTrashItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)fetchThumbnailsForItemIdentifiers:(id)arg1 requestedSize:(CGSize)arg2 perThumbnailCompletionHandlerWithType:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)reparentItemWithIdentifier:(id)arg1 toParentItemWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)preflightReparentItemWithIdentifier:(id)arg1 toParentItemWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)_defaultApplicationContainerForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)fetchPublishingURLForItemIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)disconnectWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(id)performActionWithIdentifier:(id)arg1 onItemsWithIdentifiers:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)_propertiesForItemAtURL:(id)arg1 error:(id*)arg2;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_additionalDumpInfoWithCompletionHandler:(/*^block*/id)arg1;
-(void)materializedItemsDidChange;
-(void)fetchTrashIdentifiersWithCompletionHandler:(/*^block*/id)arg1;
-(id)customPushTopics;

@end

