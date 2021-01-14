/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGSuggester.h>

@class PGSuggestionSession, NSString;

@interface PGAbstractSuggester : NSObject <PGSuggester> {

	BOOL _lastSuggestionWasColliding;
	PGSuggestionSession* _session;

}

@property (assign,nonatomic,__weak) PGSuggestionSession * session;              //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL lastSuggestionWasColliding;                   //@synthesize lastSuggestionWasColliding=_lastSuggestionWasColliding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggesterWithSession:(id)arg1 ;
+(id)suggestionTypes;
+(id)suggestionSubtypes;
+(BOOL)lastSuggestionWasColliding;
+(void)setLastSuggestionWasColliding:(BOOL)arg1 ;
+(id)noVideoPredicate;
+(BOOL)assetIsValidForSuggesting:(id)arg1 ;
+(BOOL)processedAssetIsValidForSuggesting:(id)arg1 ;
+(id)internalPredicateForProcessedAssetsWithMinimumSceneAnalysisVersion:(unsigned long long)arg1 ;
+(id)sharingSuggestionResultsForMomentNodes:(id)arg1 ;
+(id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)arg1 forMomentNodes:(id)arg2 containsUnverifiedPersons:(BOOL*)arg3 ;
-(id)initWithSession:(id)arg1 ;
-(PGSuggestionSession *)session;
-(void)setSession:(PGSuggestionSession *)arg1 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2 ;
-(BOOL)lastSuggestionWasColliding;
-(void)setLastSuggestionWasColliding:(BOOL)arg1 ;
@end

