/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOTileKeyList, GEOResourceManifestConfiguration, NSLocale, GEOTileKeyMap, NSString, GEOApplicationAuditToken;

@interface GEOTileRequest : NSObject {

	GEOTileKeyList* _keyList;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	GEOTileKeyMap* _cachedEtags;
	GEOTileKeyMap* _cachedData;
	GEOTileKeyMap* _priorities;
	GEOTileKeyMap* _signpostIDs;
	GEOTileKeyMap* _createTimes;
	GEOTileKeyMap* _additionalInfos;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	GEOApplicationAuditToken* _auditToken;
	unsigned long long _constraints;
	NSString* _backgroundSessionIdentifier;
	BOOL _shouldParticipateInBalancer;
	unsigned char _loadReason;

}

@property (nonatomic,readonly) GEOTileKeyList * keyList;                                              //@synthesize keyList=_keyList - In the implementation block
@property (nonatomic,readonly) GEOResourceManifestConfiguration * manifestConfiguration;              //@synthesize manifestConfiguration=_manifestConfiguration - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * cachedEtags;                                           //@synthesize cachedEtags=_cachedEtags - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * cachedData;                                            //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * priorities;                                            //@synthesize priorities=_priorities - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * signpostIDs;                                           //@synthesize signpostIDs=_signpostIDs - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * createTimes;                                           //@synthesize createTimes=_createTimes - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * additionalInfos;                                       //@synthesize additionalInfos=_additionalInfos - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion;                                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;                                 //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) unsigned char loadReason;                                              //@synthesize loadReason=_loadReason - In the implementation block
@property (nonatomic,readonly) unsigned long long constraints;                                        //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,readonly) NSString * backgroundSessionIdentifier;                                //@synthesize backgroundSessionIdentifier=_backgroundSessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldParticipateInBalancer;                                      //@synthesize shouldParticipateInBalancer=_shouldParticipateInBalancer - In the implementation block
-(id)init;
-(id)description;
-(NSLocale *)locale;
-(unsigned long long)constraints;
-(GEOTileKeyMap *)priorities;
-(GEOApplicationAuditToken *)auditToken;
-(NSString *)bundleIdentifier;
-(NSString *)bundleVersion;
-(GEOTileKeyMap *)signpostIDs;
-(GEOTileKeyMap *)createTimes;
-(GEOTileKeyList *)keyList;
-(GEOTileKeyMap *)cachedData;
-(GEOTileKeyMap *)cachedEtags;
-(unsigned char)loadReason;
-(NSString *)backgroundSessionIdentifier;
-(BOOL)shouldParticipateInBalancer;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6 signpostIDs:(id)arg7 createTimes:(id)arg8 additionalInfos:(id)arg9 bundleIdentifier:(id)arg10 bundleVersion:(id)arg11 auditToken:(id)arg12 constraints:(unsigned long long)arg13 backgroundSessionIdentifier:(id)arg14 shouldParticipateInBalancer:(BOOL)arg15 reason:(unsigned char)arg16 ;
-(id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 ;
-(GEOTileKeyMap *)additionalInfos;
@end

