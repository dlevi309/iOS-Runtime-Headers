/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSMutableDictionary, NSObject, NSMapTable, FPDPushConnection, FPDServer;

@interface FPDExtensionManager : NSObject {

	NSMutableDictionary* _providersByIdentifier;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_group> _providersLoadedGroup;
	id _matchingContext;
	NSMutableDictionary* _alternateContentsURLDictionary;
	NSMapTable* _sessionQueueForExtensionIdentifier;
	FPDPushConnection* _pushConnection;
	FPDServer* _server;

}

@property (assign,nonatomic,__weak) FPDServer * server;                         //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) FPDPushConnection * pushConnection;              //@synthesize pushConnection=_pushConnection - In the implementation block
-(void)setServer:(FPDServer *)arg1 ;
-(FPDServer *)server;
-(id)initWithServer:(id)arg1 ;
-(id)providerWithIdentifier:(id)arg1 ;
-(id)domainForURL:(id)arg1 ;
-(FPDPushConnection *)pushConnection;
-(id)allProviders;
-(void)loadProvidersAndMonitorWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
-(id)domainFromItemID:(id)arg1 ;
-(id)nonEvictableSizeByProviderDomain;
-(id)providerDomainsByID;
-(id)providerWithTopLevelBundleIdentifier:(id)arg1 ;
-(id)clouddocsExtensionIdentifier;
-(void)setAlternateContentsURL:(id)arg1 forItemID:(id)arg2 ;
-(id)alternateContentsURLForItemID:(id)arg1 ;
-(id)xattrForName:(id)arg1 url:(id)arg2 ;
-(void)garbageCollectDomainOwnedDirectoriesAtURL:(id)arg1 isUserData:(BOOL)arg2 installedProviderIdentifiers:(id)arg3 ;
-(void)_loadAlternateContentsDictionary;
-(void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)arg1 ;
-(void)migrateEnabledStateIfNecessary:(id)arg1 ;
-(void)_updateProviderListForMatchingExtensions:(id)arg1 allExtensionStartedHandler:(/*^block*/id)arg2 ;
-(void)afterFirstDiscovery;
-(id)uniquedExtensions:(id)arg1 ;
-(id)providerDomainsByIDFromExtensionsByID:(id)arg1 ;
-(id)_domainForURL:(id)arg1 ;
-(void)_serializeAlternateContentsURLDictionary:(id)arg1 ;
-(id)_deserializedAlternateContentsDictionary;
-(id)extensionsByID:(id)arg1 ;
-(id)domainForActionOperationLocator:(id)arg1 ;
-(id)alternateContentsDictionaryForProviderIdentifier:(id)arg1 ;
@end

