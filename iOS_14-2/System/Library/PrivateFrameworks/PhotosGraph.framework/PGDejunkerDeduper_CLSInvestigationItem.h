/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)verifiedPersonLocalIdentifiers;
-(id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)bestItemsInItems:(id)arg1 options:(id)arg2 ;
-(BOOL)isJunkForItem:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg1 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1 ;
-(id)featureWithItem:(id)arg1 ;
-(id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2 ;
-(id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(BOOL*)arg3 ;
-(void)setVerifiedPersonLocalIdentifiers:(NSSet *)arg1 ;
-(id)dejunkedDedupedItemIdentifiersWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 ;
-(void)_buildCachesWithItems:(id)arg1 options:(id)arg2 ;
-(id)bestItemInItems:(id)arg1 options:(id)arg2 ;
-(BOOL)item:(id)arg1 isStrongRequiredWithOptions:(id)arg2 ;
-(BOOL)item:(id)arg1 isWeaklyRequiredWithOptions:(id)arg2 ;
@end

