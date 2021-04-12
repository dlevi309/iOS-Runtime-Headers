/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RTInferredMapItemFuserParameters *)parameters;
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(void)setParameters:(RTInferredMapItemFuserParameters *)arg1 ;
-(id)init;
-(RTDistanceCalculator *)distanceCalculator;
-(RTInferredMapItemDeduper *)deduper;
-(NSUUID *)placeholderUUID;
-(id)fusedInferredMapItemsUsingCandidates:(id)arg1 referenceLocation:(id)arg2 snapToBestKnownPlaceAndAoi:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 ;
-(id)bestFromFusedInferredMapItems:(id)arg1 ;
-(id)initWithDistanceCalculator:(id)arg1 parameters:(id)arg2 ;
-(void)setDeduper:(RTInferredMapItemDeduper *)arg1 ;
-(id)filterCandidates:(id)arg1 referenceLocation:(id)arg2 error:(id*)arg3 ;
-(id)snapToBestKnownPlaceType:(id)arg1 error:(id*)arg2 ;
-(id)snapToBestAOICandidate:(id)arg1 error:(id*)arg2 ;
-(id)filterLearnedPlaceCandidates:(id)arg1 referenceLocation:(id)arg2 error:(id*)arg3 ;
-(id)filterUnknownLearnedPlaceCandidates:(id)arg1 ;
-(BOOL)updateNonAoiUUIDToLogProbMap:(id)arg1 bluePOIDedupedInferredMapItems:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateNonAoiUUIDToLogProbMap:(id)arg1 nonBluePOIDedupedInferredMapItems:(id)arg2 error:(id*)arg3 ;
-(id)subtractMaxLogarithmFromLogProbMap:(id)arg1 error:(id*)arg2 ;
-(double)logSumExpOfLogProbMap:(id)arg1 error:(id*)arg2 ;
-(id)preprocessCandidates:(id)arg1 referenceLocation:(id)arg2 snapToBestKnownPlaceAndAoi:(BOOL)arg3 error:(id*)arg4 ;
-(id)populateMapItemSourceEntriesForDedupedInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)partitionDedupedInferredMapItems:(id)arg1 intoNonAoiDedupedInferredMapItems:(id*)arg2 aoiDedupedInferredMapItems:(id*)arg3 error:(id*)arg4 ;
-(BOOL)initializeEntriesForNonAoiDedupedInferredMapItems:(id)arg1 aoiDedupedInferredMapItems:(id)arg2 nonAoiUUIDToLogProbMap:(id*)arg3 aoiUUIDToProbArrayMap:(id*)arg4 error:(id*)arg5 ;
-(BOOL)updateAoiUUIDToProbArrayMap:(id)arg1 aoiDedupedInferredMapItems:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateNonAoiUUIDToLogProbMap:(id)arg1 nonAoiDedupedInferredMapItems:(id)arg2 error:(id*)arg3 ;
-(id)normalizeNonAoiUUIDToLogProbMap:(id)arg1 aoiUUIDToProbArrayMap:(id)arg2 error:(id*)arg3 ;
-(id)fusedInferredMapItemsFromUUIDToProbMap:(id)arg1 inferredMapItemDeduperState:(id)arg2 uuidToFusedMapItemSourceMap:(id)arg3 referenceLocation:(id)arg4 error:(id*)arg5 ;
-(id)highestConfidenceAoiMapItemFromFusedInferredMapItems:(id)arg1 ;
@end

