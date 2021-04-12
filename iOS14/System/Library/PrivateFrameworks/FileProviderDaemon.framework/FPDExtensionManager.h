/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)domainForActionOperationLocator:(id)arg1 ;
-(id)alternateContentsURLForItemID:(id)arg1 ;
-(id)extensionsByID:(id)arg1 ;
-(void)setServer:(FPDServer *)arg1 ;
-(void)migrateEnabledStateIfNecessary:(id)arg1 ;
-(void)setAlternateContentsURL:(id)arg1 forItemID:(id)arg2 ;
-(id)clouddocsExtensionIdentifier;
-(id)initWithServer:(id)arg1 ;
-(void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)arg1 ;
-(id)_domainForURL:(id)arg1 ;
-(void)_serializeAlternateContentsURLDictionary:(id)arg1 ;
-(FPDServer *)server;
-(id)uniquedExtensions:(id)arg1 ;
-(id)nonEvictableSizeByProviderDomain;
-(id)providerWithIdentifier:(id)arg1 ;
-(id)domainFromItemID:(id)arg1 ;
-(void)_updateProviderListForMatchingExtensions:(id)arg1 allExtensionStartedHandler:(/*^block*/id)arg2 ;
-(id)domainForURL:(id)arg1 ;
-(void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
-(id)providerWithTopLevelBundleIdentifier:(id)arg1 ;
-(void)loadProvidersAndMonitorWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)garbageCollectDomainOwnedDirectoriesAtURL:(id)arg1 isUserData:(BOOL)arg2 installedProviderIdentifiers:(id)arg3 ;
-(void)_loadAlternateContentsDictionary;
-(FPDPushConnection *)pushConnection;
-(id)_deserializedAlternateContentsDictionary;
-(id)alternateContentsDictionaryForProviderIdentifier:(id)arg1 ;
-(id)allProviders;
-(id)providerDomainsByID;
-(id)providerDomainsByIDFromExtensionsByID:(id)arg1 ;
-(void)afterFirstDiscovery;
-(id)xattrForName:(id)arg1 url:(id)arg2 ;
@end

