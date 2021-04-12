/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, FPDProviderDescriptor, NSSet, NSURL, FPDServer, FPDExtensionManager, NSMutableDictionary, NSArray, NSString, FPDExtension, NSDictionary;

@interface FPDProvider : NSObject {

	NSObject*<OS_dispatch_queue> _domainQueue;
	BOOL _invalidated;
	FPDProviderDescriptor* _descriptor;
	NSSet* _blacklistedProcessNames;
	NSURL* _supportURL;
	NSURL* _domainsPlistURL;
	NSURL* _providerPlistURL;
	FPDServer* _server;
	FPDExtensionManager* _manager;
	NSMutableDictionary* _domainsByID;
	NSArray* _requestedExtendedAttributes;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSArray * requestedExtendedAttributes;                                      //@synthesize requestedExtendedAttributes=_requestedExtendedAttributes - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) FPDProviderDescriptor * descriptor;                                       //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * purposeIdentifier; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSArray * extensionStorageURLs; 
@property (nonatomic,readonly) BOOL supportsEnumeration; 
@property (nonatomic,readonly) BOOL invalidated;                                                         //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,readonly) BOOL supportsFPFS; 
@property (getter=isDisabledByFPFSSettings,nonatomic,readonly) BOOL disabledByFPFSSettings; 
@property (nonatomic,readonly) BOOL isAppExtensionReachable; 
@property (nonatomic,readonly) FPDExtension * asAppExtensionBackedProvider; 
@property (nonatomic,retain) NSSet * blacklistedProcessNames;                                            //@synthesize blacklistedProcessNames=_blacklistedProcessNames - In the implementation block
@property (nonatomic,readonly) NSURL * supportURL;                                                       //@synthesize supportURL=_supportURL - In the implementation block
@property (nonatomic,readonly) NSURL * domainsPlistURL;                                                  //@synthesize domainsPlistURL=_domainsPlistURL - In the implementation block
@property (nonatomic,readonly) NSURL * providerPlistURL;                                                 //@synthesize providerPlistURL=_providerPlistURL - In the implementation block
@property (nonatomic,readonly) FPDServer * server;                                                       //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) FPDExtensionManager * manager;                                            //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) FPDProvider * providerIfNotDisabledByFPFSSettings; 
@property (nonatomic,readonly) NSDictionary * relevantDomainsByID; 
@property (nonatomic,readonly) NSDictionary * nsDomainsByID; 
@property (nonatomic,readonly) NSMutableDictionary * domainsByID;                                        //@synthesize domainsByID=_domainsByID - In the implementation block
@property (nonatomic,readonly) NSArray * providedItemsURLs; 
-(id)description;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)identifier;
-(NSString *)purposeIdentifier;
-(FPDExtensionManager *)manager;
-(NSString *)bundleVersion;
-(FPDServer *)server;
-(FPDProviderDescriptor *)descriptor;
-(BOOL)invalidated;
-(id)domainForIdentifier:(id)arg1 ;
-(BOOL)supportsEnumeration;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)supportURL;
-(id)domainForURL:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 server:(id)arg2 ;
-(NSArray *)extensionStorageURLs;
-(BOOL)supportsFPFS;
-(void)importDomainsFromDisk;
-(NSDictionary *)relevantDomainsByID;
-(NSMutableDictionary *)domainsByID;
-(BOOL)isAppExtensionReachable;
-(FPDExtension *)asAppExtensionBackedProvider;
-(void)setEjectable:(BOOL)arg1 forDomainIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 ;
-(void)setRequestedExtendedAttributes:(NSArray *)arg1 ;
-(NSArray *)requestedExtendedAttributes;
-(BOOL)isDisabledByFPFSSettings;
-(id)providerDomainForNSDomain:(id)arg1 ;
-(void)reloadDomain:(id)arg1 unableToStartup:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)writeDomainProperties;
-(NSSet *)blacklistedProcessNames;
-(NSArray *)providedItemsURLs;
-(void)_startOrClearDomain:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_supportsFPFS;
-(void)_writeDomainProperties;
-(void)_writeDomainPropertiesIfChangedFrom:(id)arg1 ;
-(NSURL *)domainsPlistURL;
-(id)defaultNSDomain;
-(id)newDomainFromNSDomain:(id)arg1 ;
-(void)_markDomainIfIndexShouldBeDropped:(id)arg1 ;
-(id)_recreateDefaultDomainIfNeeded;
-(void)addDomain:(id)arg1 byImportingDirectoryAtURL:(id)arg2 unableToStartup:(BOOL)arg3 reloadDomain:(BOOL)arg4 request:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_createSymlinkForDomain:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDomainIdentifier:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dumpValue:(id)arg1 forKey:(id)arg2 to:(id)arg3 ;
-(FPDProvider *)providerIfNotDisabledByFPFSSettings;
-(void)addDomain:(id)arg1 byImportingDirectoryAtURL:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeAllDomainsForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDomain:(id)arg1 options:(unsigned long long)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)nsDomainsByID;
-(void)enableAllDomainsIfNoUserElection;
-(void)setBlacklistedProcessNames:(NSSet *)arg1 ;
-(NSURL *)providerPlistURL;
@end

