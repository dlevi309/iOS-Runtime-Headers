/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isValid;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long)versionIdentifier;
-(id)urlForKey:(id)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(id)initWithURLBagContext:(id)arg1 ;
-(BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(NSDictionary *)URLBagDictionary;
-(BOOL)urlIsTrusted:(id)arg1 ;
-(id)URLForURL:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(long long)arg2 ;
-(id)networkConstraintsForDownloadKind:(id)arg1 ;
-(id)initWithRawDictionary:(id)arg1 ;
-(void)_setBagBackendWithDictionary:(id)arg1 ;
-(id)_copyGUIDPatternsFromBagBackend;
-(id)_copyGUIDSchemesFromBagBackend;
-(id)_copyHeaderPatternsFromBagBackend;
-(id)_networkConstraintsCachePath;
-(void)_writeNetworkConstraintsCacheFile;
-(void)_writeURLResolutionCacheFile;
-(void)_toggleStopSendingLocalCookies;
-(double)invalidationTime;
-(void)setInvalidationTime:(double)arg1 ;
-(id)copyExtraHeadersForURL:(id)arg1 ;
-(BOOL)shouldSendGUIDForURL:(id)arg1 ;
-(void)_preprocessURLResolutionCacheDictionary:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2 ;
-(NSSet *)availableStorefrontItemKinds;
-(void)setInvalidationTimeWithExprationInterval:(double)arg1 ;
-(id)sanitizedURLForURL:(id)arg1 ;
-(void)setURLBagContext:(SSURLBagContext *)arg1 ;
-(BOOL)loadedFromDiskCache;
-(void)setLoadedFromDiskCache:(BOOL)arg1 ;
@end

