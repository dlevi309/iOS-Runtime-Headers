/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSDictionary, NSSet, NSString;

@interface PGGraphIngestPublicEventsProcessor : NSObject <PGGraphIngestProcessor> {

	NSDictionary* _publicEventCriteriaByCategory;
	NSSet* _largeFrequentLocationNodes;

}

@property (nonatomic,readonly) NSDictionary * publicEventCriteriaByCategory;              //@synthesize publicEventCriteriaByCategory=_publicEventCriteriaByCategory - In the implementation block
@property (nonatomic,retain) NSSet * largeFrequentLocationNodes;                          //@synthesize largeFrequentLocationNodes=_largeFrequentLocationNodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)publicEventCriteriaByCategory;
-(id)disambiguateEvents:(id)arg1 forTimeLocationTuple:(id)arg2 momentNode:(id)arg3 graph:(id)arg4 ;
-(id)publicEventCriteriaByCategoryInGraph:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)_insertPublicEventsFromMomentNodes:(id)arg1 graphUpdate:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)setLargeFrequentLocationNodes:(NSSet *)arg1 ;
-(id)_frequentLocationNodesByMomentIdentifierForMomentNodes:(id)arg1 graph:(id)arg2 ;
-(void)_collectConsolidatedAddressesForMomentNodes:(id)arg1 inGraph:(id)arg2 consolidatedAddresses:(id*)arg3 consolidatedAddressesByMomentIdentifier:(id*)arg4 momentNodesForConsolidatedAddresses:(id*)arg5 ;
-(NSSet *)largeFrequentLocationNodes;
@end

