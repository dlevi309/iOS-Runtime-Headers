/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class SSURLBagContext, SSNetworkConstraints, ISURLBagBackend, NSString, NSArray, NSSet, NSDictionary;

@interface ISURLBag : NSObject {

	SSURLBagContext* _context;
	SSNetworkConstraints* _defaultConstraints;
	ISURLBagBackend* _bagBackend;
	NSString* _bagBackendKey;
	NSArray* _guidPatterns;
	NSSet* _guidSchemes;
	NSDictionary* _headerPatterns;
	double _invalidationTime;
	BOOL _loadedFromDiskCache;
	NSString* _storeFrontIdentifier;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,nonatomic) double invalidationTime;                        //@synthesize invalidationTime=_invalidationTime - In the implementation block
@property (assign,nonatomic) BOOL loadedFromDiskCache;                       //@synthesize loadedFromDiskCache=_loadedFromDiskCache - In the implementation block
@property (nonatomic,copy) NSString * storeFrontIdentifier;                  //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) SSURLBagContext * URLBagContext; 
@property (nonatomic,readonly) NSDictionary * URLBagDictionary; 
@property (nonatomic,readonly) long long versionIdentifier; 
@property (readonly) NSSet * availableStorefrontItemKinds; 
+(id)storeFrontURLBagKeyForItemKind:(id)arg1 ;
+(id)_sharedBagBackend;
+(void)_loadItemKindURLBagKeyMap;
+(id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2 ;
+(id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2 ;
+(BOOL)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2 ;
+(id)urlBagForContext:(id)arg1 ;
+(id)urlForKey:(id)arg1 inBagContext:(id)arg2 ;
+(BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2 ;
+(id)valueForKey:(id)arg1 inBagContext:(id)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(NSString *)storeFrontIdentifier;
-(id)initWithRawDictionary:(id)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(id)init;
-(void)setInvalidationTimeWithExprationInterval:(double)arg1 ;
-(NSDictionary *)URLBagDictionary;
-(void)setURLBagContext:(SSURLBagContext *)arg1 ;
-(id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(long long)arg2 ;
-(double)invalidationTime;
-(BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2 ;
-(id)_copyHeaderPatternsFromBagBackend;
-(id)valueForKey:(id)arg1 ;
-(void)_toggleStopSendingLocalCookies;
-(void)setInvalidationTime:(double)arg1 ;
-(void)_writeURLResolutionCacheFile;
-(BOOL)shouldSendGUIDForURL:(id)arg1 ;
-(id)copyExtraHeadersForURL:(id)arg1 ;
-(id)urlForKey:(id)arg1 ;
-(id)initWithURLBagContext:(id)arg1 ;
-(BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)arg1 ;
-(BOOL)isValid;
-(BOOL)loadedFromDiskCache;
-(id)URLForURL:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)sanitizedURLForURL:(id)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)_writeNetworkConstraintsCacheFile;
-(void)_setBagBackendWithDictionary:(id)arg1 ;
-(id)networkConstraintsForDownloadKind:(id)arg1 ;
-(BOOL)urlIsTrusted:(id)arg1 ;
-(id)_copyGUIDSchemesFromBagBackend;
-(void)_preprocessURLResolutionCacheDictionary:(id)arg1 ;
-(void)setLoadedFromDiskCache:(BOOL)arg1 ;
-(NSSet *)availableStorefrontItemKinds;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long)versionIdentifier;
-(id)_networkConstraintsCachePath;
-(id)_copyGUIDPatternsFromBagBackend;
@end

