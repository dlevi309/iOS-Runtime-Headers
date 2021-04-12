/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSString;

@interface PGGraphIngestBusinessProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_spatialMapCategoriesByMeaningIdentifier;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)_insertBusinessItemsForMomentNodesToResolvedBusinessItems:(id)arg1 graph:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_insertBusinessItemsFromMomentNodes:(id)arg1 graph:(id)arg2 withLocationOfInterestVisitsToResolveByMomentLocalIdentifier:(id)arg3 requiredCriteriaByPOIIdentifier:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(BOOL)_momentNode:(id)arg1 hasValidConstraintsForLocationOfInterestVisit:(id)arg2 requiredCriteriaByPOIIdentifier:(id)arg3 ;
-(id)_businessItemContainersToEnrichForLowConfidenceDisambiguation:(id)arg1 requiredCriteriaByPOIIdentifier:(id)arg2 ;
-(id)_predominantVisitForMomentNode:(id)arg1 publicEventBusinessItemMuid:(unsigned long long)arg2 ;
-(id)requiredCriteriaByPOIIdentifierForGraph:(id)arg1 ;
@end

