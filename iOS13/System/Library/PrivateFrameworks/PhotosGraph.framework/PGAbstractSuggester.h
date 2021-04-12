/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGSuggester.h>

@class PGSuggestionSession, NSString;

@interface PGAbstractSuggester : NSObject <PGSuggester> {

	PGSuggestionSession* _session;

}

@property (assign,nonatomic,__weak) PGSuggestionSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggesterWithSession:(id)arg1 ;
+(id)suggestionTypes;
+(id)suggestionSubtypes;
+(id)sharingSuggestionResultsForMomentNodes:(id)arg1 ;
+(id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)arg1 forMomentNodes:(id)arg2 containsUnverifiedPersons:(BOOL*)arg3 ;
+(id)assetCollectionFilteringSharedAssetsForAssetCollection:(id)arg1 loggingConnection:(id)arg2 ;
-(PGSuggestionSession *)session;
-(void)setSession:(PGSuggestionSession *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
@end

