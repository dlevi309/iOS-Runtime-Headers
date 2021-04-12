/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSDictionary, NSString;

@interface PGGraphIngestPublicEventsProcessor : NSObject <PGGraphIngestProcessor> {

	NSDictionary* _publicEventCriteriaByCategory;

}

@property (nonatomic,readonly) NSDictionary * publicEventCriteriaByCategory;              //@synthesize publicEventCriteriaByCategory=_publicEventCriteriaByCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)_insertPublicEventsFromMomentNodes:(id)arg1 graphUpdate:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)disambiguateEvents:(id)arg1 forTimeLocationTuple:(id)arg2 momentNode:(id)arg3 graph:(id)arg4 ;
-(void)_collectConsolidatedAddressesForMomentNodes:(id)arg1 inGraph:(id)arg2 consolidatedAddresses:(id*)arg3 consolidatedAddressesByMomentIdentifier:(id*)arg4 momentNodesForConsolidatedAddresses:(id*)arg5 ;
-(id)_frequentLocationNodesByMomentIdentifierForMomentNodes:(id)arg1 graph:(id)arg2 ;
-(id)publicEventCriteriaByCategoryInGraph:(id)arg1 ;
-(NSDictionary *)publicEventCriteriaByCategory;
@end

