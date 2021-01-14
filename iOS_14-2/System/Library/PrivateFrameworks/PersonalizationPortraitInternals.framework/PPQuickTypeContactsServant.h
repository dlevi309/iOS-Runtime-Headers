/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPQuickTypeServantProtocol.h>

@class PPLocalContactStore, NSCache;

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol> {

	PPLocalContactStore* _localContactStore;
	NSCache* _meQuickTypeItemCache;
	NSCache* _cachedNameLookups;

}
+(id)_supportedPeopleSemanticTypes;
-(void)clearCaches;
-(id)initWithOptions:(unsigned char)arg1 ;
-(id)_applySmartLimitingToCandidates:(id)arg1 clientLimit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(void)_registerForNotifications;
-(void)_warmUpFormatters;
-(id)init;
-(id)_lookupPeopleWithNamePrefix:(id)arg1 explanationSet:(id)arg2 justPreloadCache:(BOOL)arg3 timeoutSeconds:(id)arg4 ;
-(id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 fromSemanticTextField:(BOOL)arg3 explanationSet:(id)arg4 ;
-(void)_preloadMeCardAndItemCacheWithMeContact:(id)arg1 ;
-(BOOL)_isMeCardQuery:(id)arg1 ;
-(id)_mePredictionCacheKeyForQuery:(id)arg1 ;
-(id)_predictionForPeopleQuery:(id)arg1 fromEligibleSemanticTextField:(BOOL)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 ;
-(void)setCachedNameLookup:(id)arg1 ;
-(id)_selfContactQueryqueryFromSemanticTagquery:(id)arg1 ;
-(id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(id)_lookupScoredPeopleWithNamePrefix:(id)arg1 subtype:(unsigned char)arg2 explanationSet:(id)arg3 justPreloadCache:(BOOL)arg4 timeoutSeconds:(id)arg5 ;
-(id)_scoredMeContactWithMeContact:(id)arg1 ;
-(BOOL)_isSemanticTagEligible:(unsigned char)arg1 ;
@end

