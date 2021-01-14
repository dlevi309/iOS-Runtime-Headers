/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol OS_dispatch_group;
@class NSObject, PGMoodGenerationContext, PGManager, NSArray, NSSet;

@interface PGHighlightTailor : NSObject {

	NSObject*<OS_dispatch_group> _enrichmentCommitGroup;
	PGMoodGenerationContext* _moodGenerationContext;
	PGManager* _manager;
	NSArray* _enrichmentProfiles;
	NSSet* _verifiedPersonLocalIdentifiers;

}

@property (nonatomic,retain) PGManager * manager;                         //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSArray * enrichmentProfiles;                //@synthesize enrichmentProfiles=_enrichmentProfiles - In the implementation block
@property (readonly) NSSet * verifiedPersonLocalIdentifiers;              //@synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers - In the implementation block
+(BOOL)itemScoreIsAutoplayable:(double)arg1 ;
-(id)initForTesting;
-(id)initWithManager:(id)arg1 ;
-(NSArray *)enrichmentProfiles;
-(id)keyAssetFromHighlight:(id)arg1 ;
-(double)highlightVisibilityWeightForItem:(id)arg1 ;
-(id)sortedCurationOfType:(unsigned short)arg1 fromHighlight:(id)arg2 ;
-(id)computeChangedVisibilityScoresForItems:(id)arg1 ;
-(void)setManager:(PGManager *)arg1 ;
-(BOOL)enrichDayHighlights:(id)arg1 dayGroupHighlights:(id)arg2 withOptions:(unsigned long long)arg3 progressBlock:(/*^block*/id)arg4 ;
-(NSSet *)verifiedPersonLocalIdentifiers;
-(BOOL)enrichAllHighlightsWithOptions:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)bestEnrichmentProfileForHighlight:(id)arg1 options:(unsigned long long)arg2 ;
-(id)enrichmentValuesForHighlight:(id)arg1 usingEnrichmentProfile:(id)arg2 options:(unsigned long long)arg3 reportChangedValuesOnly:(BOOL)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)enrichHighlights:(id)arg1 options:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)assetSortDescriptors;
-(PGManager *)manager;
-(void)setEnrichmentProfiles:(NSArray *)arg1 ;
-(void)writeHighlightEnrichmentValues:(id)arg1 toChangeRequest:(id)arg2 ;
@end

