/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGDejunkerDeduper.h>

@class NSDictionary, NSSet;

@interface PGDejunkerDeduper_CLSInvestigationItem : PGDejunkerDeduper {

	NSDictionary* _personLocalIdentifiersByItemIdentifier;
	NSDictionary* _peopleScenesByItemIdentifier;
	NSDictionary* _averageFaceQualityByItemIdentifier;
	NSSet* _verifiedPersonLocalIdentifiers;

}

@property (nonatomic,retain) NSSet * verifiedPersonLocalIdentifiers;              //@synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers - In the implementation block
-(void)setVerifiedPersonLocalIdentifiers:(NSSet *)arg1 ;
-(id)dejunkedDedupedItemIdentifiersWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 ;
-(id)bestItemInItems:(id)arg1 options:(id)arg2 ;
-(BOOL)isJunkForItem:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg1 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1 ;
-(id)featureWithItem:(id)arg1 ;
-(id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2 ;
-(NSSet *)verifiedPersonLocalIdentifiers;
-(id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)_buildCachesWithItems:(id)arg1 options:(id)arg2 ;
-(id)bestItemsInItems:(id)arg1 options:(id)arg2 ;
-(BOOL)item:(id)arg1 isStrongRequiredWithOptions:(id)arg2 ;
-(BOOL)item:(id)arg1 isWeaklyRequiredWithOptions:(id)arg2 ;
-(id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(BOOL*)arg3 ;
@end

