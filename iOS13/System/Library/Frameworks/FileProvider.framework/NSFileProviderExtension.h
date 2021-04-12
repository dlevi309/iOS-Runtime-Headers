/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@protocol OS_dispatch_queue;
@class NSObject, FPXExtensionContext, NSFileProviderRequest, NSURL, NSString, NSFileProviderDomain;

@interface NSFileProviderExtension : NSObject <NSExtensionRequestHandling> {

	NSObject*<OS_dispatch_queue> _extensionDispatchQueue;
	FPXExtensionContext* _extensionContext;
	NSFileProviderRequest* _currentRequest;
	NSObject*<OS_dispatch_queue> _memberQueue;
	NSURL* _memberQueueDocumentStorageURL;
	NSString* _memberQueueProviderIdentifier;
	NSFileProviderDomain* _domain;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;              //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueDocumentStorageURL;                 //@synthesize memberQueueDocumentStorageURL=_memberQueueDocumentStorageURL - In the implementation block
@property (nonatomic,copy) NSString * memberQueueProviderIdentifier;                //@synthesize memberQueueProviderIdentifier=_memberQueueProviderIdentifier - In the implementation block
@property (nonatomic,retain) NSFileProviderDomain * domain;                         //@synthesize domain=_domain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_initializedByViewServices;
+(id)placeholderURLForURL:(id)arg1 ;
+(id)_resourceIDOfURL:(id)arg1 outError:(id*)arg2 ;
+(id)_relativeComponentsOfURL:(id)arg1 fromBaseURL:(id)arg2 ;
+(BOOL)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(NSFileProviderDomain *)domain;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(id)providerIdentifier;
-(void)setDomain:(NSFileProviderDomain *)arg1 ;
-(id)currentRequest;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)documentStorageURL;
-(void)startProvidingItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)persistentIdentifierForItemAtURL:(id)arg1 ;
-(void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)evictItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProvidingItemAtURL:(id)arg1 ;
-(void)itemChangedAtURL:(id)arg1 ;
-(id)fetchContentsForItemWithIdentifier:(id)arg1 version:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_withRequest:(id)arg1 execute:(/*^block*/id)arg2 ;
-(id)fetchContentsForItemWithIdentifier:(id)arg1 version:(id)arg2 usingExistingContentsAtURL:(id)arg3 existingVersion:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)changeItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)setLastUsedDate:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)providePlaceholderAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)itemForIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)URLForItemWithPersistentIdentifier:(id)arg1 ;
-(id)fetchThumbnailsForItemIdentifiers:(id)arg1 requestedSize:(CGSize)arg2 perThumbnailCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)enumeratorForSearchQuery:(id)arg1 error:(id*)arg2 ;
-(id)enumeratorForContainerItemIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)supportedServiceSourcesForItemIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)reparentItemWithIdentifier:(id)arg1 toParentItemWithIdentifier:(id)arg2 newName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteItemWithIdentifier:(id)arg1 baseVersion:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 contents:(id)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)fetchPublishingURLForItemIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)disconnectWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)performActionWithIdentifier:(id)arg1 onItemsWithIdentifiers:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)materializedItemsDidChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)importDidFinishWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)renameItemWithIdentifier:(id)arg1 toName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setTagData:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setFavoriteRank:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)trashItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)untrashItemWithIdentifier:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)importDocumentAtURL:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createDirectoryWithName:(id)arg1 inParentItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)itemChanged:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)registerUpdateHandlerForPersistentIdentifier:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)unregisterUpdateHandlerForPersistentIdentifier:(id)arg1 ;
-(NSURL *)memberQueueDocumentStorageURL;
-(void)setMemberQueueDocumentStorageURL:(NSURL *)arg1 ;
-(NSString *)memberQueueProviderIdentifier;
-(void)setMemberQueueProviderIdentifier:(NSString *)arg1 ;
@end

