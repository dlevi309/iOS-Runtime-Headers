/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPQuickTypeServantProtocol.h>

@protocol OS_dispatch_semaphore;
@class PPLocalContactStore, _PASLock, NSCache, NSObject;

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol> {

	PPLocalContactStore* _localContactStore;
	_PASLock* _meCardCacheLock;
	_PASLock* _meContactDataLock;
	NSCache* _meQuickTypeItemCache;
	NSCache* _cachedNameLookups;
	NSObject*<OS_dispatch_semaphore> _initializationComplete;

}
+(id)_supportedPeopleSemanticTypes;
-(id)init;
-(id)initWithOptions:(unsigned char)arg1 ;
-(void)clearCaches;
-(void)_registerForNotifications;
-(id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(void)_warmUpFormatters;
-(void)setCachedNameLookup:(id)arg1 ;
-(id)_scoredMeContactWithMeContact:(id)arg1 ;
-(void)_preloadMeCardAndItemCacheWithMeContact:(id)arg1 ;
-(id)_applySmartLimitingToCandidates:(id)arg1 clientLimit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(id)_predictionForPeopleQuery:(id)arg1 fromEligibleSemanticTextField:(BOOL)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 ;
-(BOOL)_isMeCardQuery:(id)arg1 ;
-(id)_mePredictionCacheKeyForQuery:(id)arg1 ;
-(id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 fromSemanticTextField:(BOOL)arg3 explanationSet:(id)arg4 ;
-(id)_lookupScoredPeopleWithNamePrefix:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3 justPreloadCache:(BOOL)arg4 ;
-(id)_lookupPeopleWithNamePrefix:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3 justPreloadCache:(BOOL)arg4 ;
-(BOOL)_isSemanticTagEligible:(unsigned char)arg1 ;
-(id)_selfContactQueryqueryFromSemanticTagquery:(id)arg1 ;
-(id)_loadMeCard;
-(id)_updateMeCardFromSource;
@end

