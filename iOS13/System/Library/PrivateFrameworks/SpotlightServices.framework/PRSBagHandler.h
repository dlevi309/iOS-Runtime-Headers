/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@protocol OS_dispatch_group, OS_dispatch_queue, PRSSessionController;
@class NSObject, NSMutableArray, PARBag, SSPlistDataReader, PRSRankingServerKnobs, NSSet, NSArray, NSString, GEOUserSessionEntity, NSMutableDictionary;

@interface PRSBagHandler : NSObject {

	BOOL _waitingForLocation;
	NSObject*<OS_dispatch_group> _locationGroup;
	id _lockObject;
	NSMutableArray* _tasks;
	PARBag* _bag;
	NSObject*<OS_dispatch_queue> _bagQueue;
	BOOL _active;
	BOOL _disableAsTypedSuggestion;
	BOOL _collectAnonymousData;
	BOOL _collectScores;
	BOOL _use2LayerRanking;
	BOOL _bagEnabled;
	BOOL _resourceMetadataNeedsWrite;
	id<PRSSessionController> _client;
	long long _status;
	double _searchRenderTimeout;
	double _suggestionsRenderTimeout;
	SSPlistDataReader* _cep_server_values;
	PRSRankingServerKnobs* _ranking_server_knobs;
	NSSet* _appBlacklist;
	NSArray* _enabledDomains;
	NSArray* _anonymousMetadataUndesiredBundleIDs;
	NSString* _fteLocString;
	NSString* _fteLearnMoreString;
	NSString* _fteContinueString;
	NSArray* _suggestionRankerModelParams;
	NSString* _lookupFirstUseDescription1;
	NSString* _lookupFirstUseDescription2;
	NSString* _lookupFirstUseLearnMore;
	GEOUserSessionEntity* _geoUserSessionEntity;
	NSMutableDictionary* _resourceMetadata;
	NSString* _resourceMetadataPath;
	NSObject*<OS_dispatch_queue> _resourceFetchQueue;

}

@property (assign,nonatomic) long long status;                                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resourceMetadata;                       //@synthesize resourceMetadata=_resourceMetadata - In the implementation block
@property (assign,nonatomic) BOOL resourceMetadataNeedsWrite;                              //@synthesize resourceMetadataNeedsWrite=_resourceMetadataNeedsWrite - In the implementation block
@property (nonatomic,retain) NSString * resourceMetadataPath;                              //@synthesize resourceMetadataPath=_resourceMetadataPath - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceFetchQueue;              //@synthesize resourceFetchQueue=_resourceFetchQueue - In the implementation block
@property (__weak) id<PRSSessionController> client;                                        //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign) double searchRenderTimeout;                                             //@synthesize searchRenderTimeout=_searchRenderTimeout - In the implementation block
@property (assign) double suggestionsRenderTimeout;                                        //@synthesize suggestionsRenderTimeout=_suggestionsRenderTimeout - In the implementation block
@property (retain) SSPlistDataReader * cep_server_values;                                  //@synthesize cep_server_values=_cep_server_values - In the implementation block
@property (retain) PRSRankingServerKnobs * ranking_server_knobs;                           //@synthesize ranking_server_knobs=_ranking_server_knobs - In the implementation block
@property (nonatomic,retain) NSSet * appBlacklist;                                         //@synthesize appBlacklist=_appBlacklist - In the implementation block
@property (nonatomic,retain) NSArray * enabledDomains;                                     //@synthesize enabledDomains=_enabledDomains - In the implementation block
@property (assign,nonatomic) BOOL disableAsTypedSuggestion;                                //@synthesize disableAsTypedSuggestion=_disableAsTypedSuggestion - In the implementation block
@property (assign,nonatomic) BOOL collectAnonymousData;                                    //@synthesize collectAnonymousData=_collectAnonymousData - In the implementation block
@property (assign,nonatomic) BOOL collectScores;                                           //@synthesize collectScores=_collectScores - In the implementation block
@property (nonatomic,retain) NSArray * anonymousMetadataUndesiredBundleIDs;                //@synthesize anonymousMetadataUndesiredBundleIDs=_anonymousMetadataUndesiredBundleIDs - In the implementation block
@property (assign,nonatomic) BOOL use2LayerRanking;                                        //@synthesize use2LayerRanking=_use2LayerRanking - In the implementation block
@property (nonatomic,retain) NSString * fteLocString;                                      //@synthesize fteLocString=_fteLocString - In the implementation block
@property (nonatomic,retain) NSString * fteLearnMoreString;                                //@synthesize fteLearnMoreString=_fteLearnMoreString - In the implementation block
@property (nonatomic,retain) NSString * fteContinueString;                                 //@synthesize fteContinueString=_fteContinueString - In the implementation block
@property (nonatomic,retain) NSArray * suggestionRankerModelParams;                        //@synthesize suggestionRankerModelParams=_suggestionRankerModelParams - In the implementation block
@property (nonatomic,readonly) NSString * lookupFirstUseDescription1;                      //@synthesize lookupFirstUseDescription1=_lookupFirstUseDescription1 - In the implementation block
@property (nonatomic,readonly) NSString * lookupFirstUseDescription2;                      //@synthesize lookupFirstUseDescription2=_lookupFirstUseDescription2 - In the implementation block
@property (nonatomic,readonly) NSString * lookupFirstUseLearnMore;                         //@synthesize lookupFirstUseLearnMore=_lookupFirstUseLearnMore - In the implementation block
@property (getter=isBagEnabled,nonatomic,readonly) BOOL bagEnabled;                        //@synthesize bagEnabled=_bagEnabled - In the implementation block
@property (readonly) GEOUserSessionEntity * geoUserSessionEntity;                          //@synthesize geoUserSessionEntity=_geoUserSessionEntity - In the implementation block
+(void)initialize;
+(id)sharedHandler;
-(id)init;
-(long long)status;
-(void)setActive:(BOOL)arg1 ;
-(id<PRSSessionController>)client;
-(void)setClient:(id<PRSSessionController>)arg1 ;
-(BOOL)isEnabled;
-(void)setStatus:(long long)arg1 ;
-(void)removeTask:(id)arg1 ;
-(BOOL)active;
-(void)activate;
-(void)deactivate;
-(void)setResourceMetadata:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)resourceMetadata;
-(id)applicationNameForUserAgent;
-(void)updateWithDictionary:(id)arg1 ;
-(id)supportedServices;
-(id)userId;
-(double)searchRenderTimeout;
-(NSArray *)enabledDomains;
-(BOOL)collectScores;
-(BOOL)use2LayerRanking;
-(BOOL)disableAsTypedSuggestion;
-(GEOUserSessionEntity *)geoUserSessionEntity;
-(NSSet *)appBlacklist;
-(void)updateFromSession:(id)arg1 bag:(id)arg2 forClient:(id)arg3 error:(id)arg4 ;
-(void)getFTEStringsWithReply:(/*^block*/id)arg1 ;
-(double)suggestionsRenderTimeout;
-(SSPlistDataReader *)cep_server_values;
-(PRSRankingServerKnobs *)ranking_server_knobs;
-(NSArray *)anonymousMetadataUndesiredBundleIDs;
-(NSString *)fteLocString;
-(NSString *)fteLearnMoreString;
-(NSString *)fteContinueString;
-(void)setCep_server_values:(SSPlistDataReader *)arg1 ;
-(id)_base64CEPDataNoCopyFromFeatureData:(id)arg1 ;
-(void)_processQIFeatures:(id)arg1 forClient:(id)arg2 ;
-(void)setResourceMetadataNeedsWrite:(BOOL)arg1 ;
-(void)setResourceFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setResourceMetadataPath:(NSString *)arg1 ;
-(id)excludedDomainIdentifiers;
-(BOOL)isBagEnabled;
-(void)setEnabledDomains:(NSArray *)arg1 ;
-(void)setFteLocString:(NSString *)arg1 ;
-(void)setFteLearnMoreString:(NSString *)arg1 ;
-(void)setCollectAnonymousData:(BOOL)arg1 ;
-(void)setDisableAsTypedSuggestion:(BOOL)arg1 ;
-(void)setSearchRenderTimeout:(double)arg1 ;
-(void)setSuggestionsRenderTimeout:(double)arg1 ;
-(void)setCollectScores:(BOOL)arg1 ;
-(void)setAnonymousMetadataUndesiredBundleIDs:(NSArray *)arg1 ;
-(void)setUse2LayerRanking:(BOOL)arg1 ;
-(void)setSuggestionRankerModelParams:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceFetchQueue;
-(void)parseCEPFromData:(id)arg1 forClient:(id)arg2 ;
-(void)fetchModifiedResourceFromSession:(id)arg1 resource:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)resourceMetadataNeedsWrite;
-(NSString *)resourceMetadataPath;
-(NSArray *)suggestionRankerModelParams;
-(void)triggerTaskWhenReady:(id)arg1 ;
-(BOOL)searchSupported:(BOOL)arg1 ;
-(BOOL)sessionReady;
-(BOOL)isLocaleSupported:(id)arg1 ;
-(void)updateWithBagDictionary:(id)arg1 error:(id)arg2 ;
-(void)refreshGUID;
-(void)setRanking_server_knobs:(PRSRankingServerKnobs *)arg1 ;
-(void)setAppBlacklist:(NSSet *)arg1 ;
-(BOOL)collectAnonymousData;
-(void)setFteContinueString:(NSString *)arg1 ;
-(NSString *)lookupFirstUseDescription1;
-(NSString *)lookupFirstUseDescription2;
-(NSString *)lookupFirstUseLearnMore;
@end

