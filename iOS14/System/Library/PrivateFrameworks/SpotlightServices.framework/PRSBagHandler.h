/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@protocol OS_dispatch_group, OS_dispatch_queue, PRSSessionController;
@class NSObject, NSMutableArray, PARBag, SSPlistDataReader, NSSet, NSArray, NSString, GEOUserSessionEntity, NSMutableDictionary;

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
	NSSet* _appBlocklist;
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
@property (nonatomic,retain) NSSet * appBlocklist;                                         //@synthesize appBlocklist=_appBlocklist - In the implementation block
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
-(id)userId;
-(NSString *)fteLocString;
-(BOOL)collectScores;
-(BOOL)searchSupported:(BOOL)arg1 ;
-(id<PRSSessionController>)client;
-(BOOL)active;
-(void)setClient:(id<PRSSessionController>)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)parseCEPFromData:(id)arg1 forClient:(id)arg2 ;
-(id)init;
-(void)setFteLocString:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceFetchQueue;
-(NSString *)resourceMetadataPath;
-(NSString *)fteContinueString;
-(void)fetchModifiedResourceFromSession:(id)arg1 resource:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)refreshGUID;
-(void)setSuggestionsRenderTimeout:(double)arg1 ;
-(double)suggestionsRenderTimeout;
-(void)triggerTaskWhenReady:(id)arg1 ;
-(NSArray *)enabledDomains;
-(BOOL)isBagEnabled;
-(NSMutableDictionary *)resourceMetadata;
-(NSString *)fteLearnMoreString;
-(void)deactivate;
-(id)_base64CEPDataNoCopyFromFeatureData:(id)arg1 ;
-(void)getFTEStringsWithReply:(/*^block*/id)arg1 ;
-(BOOL)resourceMetadataNeedsWrite;
-(GEOUserSessionEntity *)geoUserSessionEntity;
-(void)activate;
-(void)setFteContinueString:(NSString *)arg1 ;
-(BOOL)use2LayerRanking;
-(void)setEnabledDomains:(NSArray *)arg1 ;
-(BOOL)sessionReady;
-(void)setResourceFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)excludedDomainIdentifiers;
-(SSPlistDataReader *)cep_server_values;
-(BOOL)disableAsTypedSuggestion;
-(NSString *)lookupFirstUseLearnMore;
-(void)updateFromSession:(id)arg1 bag:(id)arg2 forClient:(id)arg3 error:(id)arg4 ;
-(NSArray *)suggestionRankerModelParams;
-(NSArray *)anonymousMetadataUndesiredBundleIDs;
-(NSSet *)appBlocklist;
-(NSString *)lookupFirstUseDescription1;
-(id)applicationNameForUserAgent;
-(void)setSearchRenderTimeout:(double)arg1 ;
-(void)_processQIFeatures:(id)arg1 forClient:(id)arg2 ;
-(void)setCollectScores:(BOOL)arg1 ;
-(void)setResourceMetadataPath:(NSString *)arg1 ;
-(void)setSuggestionRankerModelParams:(NSArray *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(BOOL)isEnabled;
-(void)removeTask:(id)arg1 ;
-(void)setCep_server_values:(SSPlistDataReader *)arg1 ;
-(void)setAnonymousMetadataUndesiredBundleIDs:(NSArray *)arg1 ;
-(void)updateWithBagDictionary:(id)arg1 error:(id)arg2 ;
-(void)setResourceMetadataNeedsWrite:(BOOL)arg1 ;
-(void)setCollectAnonymousData:(BOOL)arg1 ;
-(double)searchRenderTimeout;
-(BOOL)isLocaleSupported:(id)arg1 ;
-(void)setResourceMetadata:(NSMutableDictionary *)arg1 ;
-(BOOL)collectAnonymousData;
-(void)setFteLearnMoreString:(NSString *)arg1 ;
-(id)supportedServices;
-(void)setAppBlocklist:(NSSet *)arg1 ;
-(NSString *)lookupFirstUseDescription2;
-(long long)status;
-(void)setDisableAsTypedSuggestion:(BOOL)arg1 ;
-(void)setUse2LayerRanking:(BOOL)arg1 ;
@end

