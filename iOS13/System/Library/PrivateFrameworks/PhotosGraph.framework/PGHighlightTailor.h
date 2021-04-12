/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol OS_dispatch_group;
@class NSObject, PGManager, NSArray, NSSet;

@interface PGHighlightTailor : NSObject {

	NSObject*<OS_dispatch_group> _enrichmentCommitGroup;
	PGManager* _manager;
	NSArray* _enrichmentProfiles;
	NSSet* _verifiedPersonLocalIdentifiers;

}

@property (nonatomic,retain) PGManager * manager;                         //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSArray * enrichmentProfiles;                //@synthesize enrichmentProfiles=_enrichmentProfiles - In the implementation block
@property (readonly) NSSet * verifiedPersonLocalIdentifiers;              //@synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers - In the implementation block
+(BOOL)itemScoreIsAutoplayable:(double)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(PGManager *)manager;
-(void)setManager:(PGManager *)arg1 ;
-(id)initForTesting;
-(id)assetSortDescriptors;
-(NSSet *)verifiedPersonLocalIdentifiers;
-(double)highlightVisibilityWeightForItem:(id)arg1 ;
-(id)computeChangedVisibilityScoresForItems:(id)arg1 ;
-(id)enrichmentValuesForHighlight:(id)arg1 usingEnrichmentProfile:(id)arg2 options:(unsigned long long)arg3 reportChangedValuesOnly:(BOOL)arg4 progressBlock:(/*^block*/id)arg5 ;
-(void)writeHighlightEnrichmentValues:(id)arg1 toChangeRequest:(id)arg2 ;
-(id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)enrichHighlights:(id)arg1 options:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(BOOL)enrichAllHighlightsWithOptions:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)bestEnrichmentProfileForHighlight:(id)arg1 options:(unsigned long long)arg2 ;
-(id)keyAssetFromHighlight:(id)arg1 ;
-(id)sortedCurationOfType:(unsigned short)arg1 fromHighlight:(id)arg2 ;
-(NSArray *)enrichmentProfiles;
-(void)setEnrichmentProfiles:(NSArray *)arg1 ;
@end

