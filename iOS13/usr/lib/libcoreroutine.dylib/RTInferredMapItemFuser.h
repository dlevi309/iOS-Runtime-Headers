/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTDistanceCalculator, RTInferredMapItemFuserParameters, RTInferredMapItemDeduper, NSUUID;

@interface RTInferredMapItemFuser : NSObject {

	RTDistanceCalculator* _distanceCalculator;
	RTInferredMapItemFuserParameters* _parameters;
	RTInferredMapItemDeduper* _deduper;
	NSUUID* _placeholderUUID;

}

@property (nonatomic,retain) RTInferredMapItemDeduper * deduper;                         //@synthesize deduper=_deduper - In the implementation block
@property (nonatomic,readonly) NSUUID * placeholderUUID;                                 //@synthesize placeholderUUID=_placeholderUUID - In the implementation block
@property (nonatomic,retain) RTDistanceCalculator * distanceCalculator;                  //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,retain) RTInferredMapItemFuserParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(id)init;
-(RTInferredMapItemFuserParameters *)parameters;
-(void)setParameters:(RTInferredMapItemFuserParameters *)arg1 ;
-(NSUUID *)placeholderUUID;
-(id)fusedInferredMapItemsUsingCandidates:(id)arg1 referenceLocation:(id)arg2 error:(id*)arg3 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 ;
-(RTDistanceCalculator *)distanceCalculator;
-(id)bestFromFusedInferredMapItems:(id)arg1 ;
-(id)initWithDistanceCalculator:(id)arg1 parameters:(id)arg2 ;
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(RTInferredMapItemDeduper *)deduper;
-(void)setDeduper:(RTInferredMapItemDeduper *)arg1 ;
-(id)filterCandidates:(id)arg1 referenceLocation:(id)arg2 error:(id*)arg3 ;
-(id)snapToBestKnownPlaceType:(id)arg1 error:(id*)arg2 ;
-(id)snapToBestAOICandidate:(id)arg1 error:(id*)arg2 ;
-(id)filterLearnedPlaceCandidates:(id)arg1 referenceLocation:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateNonAoiUUIDToLogProbMap:(id)arg1 bluePOIDedupedInferredMapItems:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateNonAoiUUIDToLogProbMap:(id)arg1 nonBluePOIDedupedInferredMapItems:(id)arg2 error:(id*)arg3 ;
-(id)subtractMaxLogarithmFromLogProbMap:(id)arg1 error:(id*)arg2 ;
-(double)logSumExpOfLogProbMap:(id)arg1 error:(id*)arg2 ;
-(id)preprocessCandidates:(id)arg1 referenceLocation:(id)arg2 error:(id*)arg3 ;
-(id)populateMapItemSourceEntriesForDedupedInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)partitionDedupedInferredMapItems:(id)arg1 intoNonAoiDedupedInferredMapItems:(id*)arg2 aoiDedupedInferredMapItems:(id*)arg3 error:(id*)arg4 ;
-(BOOL)initializeEntriesForNonAoiDedupedInferredMapItems:(id)arg1 aoiDedupedInferredMapItems:(id)arg2 nonAoiUUIDToLogProbMap:(id*)arg3 aoiUUIDToProbArrayMap:(id*)arg4 error:(id*)arg5 ;
-(BOOL)updateAoiUUIDToProbArrayMap:(id)arg1 aoiDedupedInferredMapItems:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateNonAoiUUIDToLogProbMap:(id)arg1 nonAoiDedupedInferredMapItems:(id)arg2 error:(id*)arg3 ;
-(id)normalizeNonAoiUUIDToLogProbMap:(id)arg1 aoiUUIDToProbArrayMap:(id)arg2 error:(id*)arg3 ;
-(id)fusedInferredMapItemsFromUUIDToProbMap:(id)arg1 inferredMapItemDeduperState:(id)arg2 uuidToFusedMapItemSourceMap:(id)arg3 referenceLocation:(id)arg4 error:(id*)arg5 ;
-(id)highestConfidenceAoiMapItemFromFusedInferredMapItems:(id)arg1 ;
@end

