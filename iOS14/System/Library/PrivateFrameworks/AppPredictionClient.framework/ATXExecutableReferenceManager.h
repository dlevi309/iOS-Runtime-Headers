/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSString, NSMapTable;

@interface ATXExecutableReferenceManager : NSObject {

	NSString* _path;
	double _minDurationForTrackedReferencesToStayAround;
	NSMapTable* __cachedExecutableToReferenceMapForBatchUpdates;
	BOOL __cachedExecutableToReferenceMapNeedsWrite;

}
-(id)jsonDict;
-(id)_readData;
-(id)init;
-(id)description;
-(BOOL)_writeData:(id)arg1 ;
-(id)initWithCacheDirectory:(id)arg1 minDurationForTrackedReferencesToStayAround:(double)arg2 ;
-(void)markReferencesAsPurgableFromClientModelIdIfPossible:(id)arg1 ;
-(void)purgeReferencesForSuggestions:(id)arg1 clientModelId:(id)arg2 ;
-(void)addReferencesForSuggestions:(id)arg1 clientModelId:(id)arg2 ;
-(void)updateReferencesForProactiveSuggestions:(id)arg1 clientModelId:(id)arg2 ;
-(void)performBatchUpdateOfReferencesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)canExecutableClearOnEngagement:(id)arg1 ;
-(void)purgeReferencesIfPossible;
-(unsigned long long)referenceCountForExecutable:(id)arg1 ;
-(BOOL)isExecutableHidden:(id)arg1 ;
-(void)updateDateOfReferenceForExecutable:(id)arg1 clientModelId:(id)arg2 ;
-(void)markReferenceAsHiddenForExecutable:(id)arg1 clientModelId:(id)arg2 untilDate:(id)arg3 ;
-(id)clientModelIdsForExecutable:(id)arg1 ;
-(id)_loadReferences;
-(void)_writeReferences:(id)arg1 ;
-(id)_pairsForClientModelId:(id)arg1 map:(id)arg2 ;
-(id)_executablePairsForSuggestions:(id)arg1 clientModelId:(id)arg2 ;
-(void)_addExecutablePairs:(id)arg1 toMap:(id)arg2 ;
-(void)_purgeReferencesIfPossibleInMap:(id)arg1 forceWrite:(BOOL)arg2 ;
-(void)recordExecutable:(id)arg1 clientModelId:(id)arg2 shouldClearEngagement:(BOOL)arg3 ;
-(id)referencesForClientModelId:(id)arg1 ;
@end

