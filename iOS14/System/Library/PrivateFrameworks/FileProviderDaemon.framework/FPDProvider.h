/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)invalidated;
-(void)setRequestedExtendedAttributes:(NSArray *)arg1 ;
-(BOOL)supportsEnumeration;
-(NSArray *)requestedExtendedAttributes;
-(id)domainForIdentifier:(id)arg1 ;
-(NSArray *)extensionStorageURLs;
-(NSString *)bundleVersion;
-(FPDExtension *)asAppExtensionBackedProvider;
-(FPDProviderDescriptor *)descriptor;
-(id)description;
-(FPDServer *)server;
-(id)domainForURL:(id)arg1 ;
-(FPDExtensionManager *)manager;
-(void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 ;
-(BOOL)isAppExtensionReachable;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)purposeIdentifier;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)identifier;
-(NSURL *)supportURL;
-(BOOL)supportsFPFS;
-(id)initWithDescriptor:(id)arg1 server:(id)arg2 ;
-(void)importDomainsFromDisk;
-(NSDictionary *)relevantDomainsByID;
-(NSMutableDictionary *)domainsByID;
-(void)setEjectable:(BOOL)arg1 forDomainIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
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

