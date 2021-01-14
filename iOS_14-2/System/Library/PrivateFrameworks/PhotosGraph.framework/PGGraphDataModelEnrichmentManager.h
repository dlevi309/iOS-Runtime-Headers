/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGGraphDataModelEnrichmentManagerDelegate;
@class NSArray, PGManager;

@interface PGGraphDataModelEnrichmentManager : NSObject {

	NSArray* _enrichmentProcessors;
	long long _enrichmentContext;
	PGManager* _manager;
	id<PGGraphDataModelEnrichmentManagerDelegate> _delegate;

}

@property (nonatomic,readonly) PGManager * manager;                                                      //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic,__weak) id<PGGraphDataModelEnrichmentManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * enrichmentProcessors;                                           //@synthesize enrichmentProcessors=_enrichmentProcessors - In the implementation block
@property (nonatomic,readonly) long long enrichmentContext;                                              //@synthesize enrichmentContext=_enrichmentContext - In the implementation block
+(id)lightWeightEnrichmentProcessors;
+(id)backgroundEnrichmentProcessors;
+(id)enrichmentProcessorsForDataModelEnrichmentContext:(long long)arg1 ;
+(id)weeklyEnrichmentProcessors;
+(id)liveUpdateEnrichmentProcessors;
+(id)_allEnrichmentProcessorsWithTailorOptions:(unsigned long long)arg1 ;
-(BOOL)enrichDataModelForHighlightUUIDs:(id)arg1 withError:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id<PGGraphDataModelEnrichmentManagerDelegate>)delegate;
-(id)initWithManager:(id)arg1 enrichmentContext:(long long)arg2 ;
-(BOOL)_enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(long long)enrichmentContext;
-(BOOL)enrichDataModelWithError:(id*)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<PGGraphDataModelEnrichmentManagerDelegate>)arg1 ;
-(id)initWithManager:(id)arg1 enrichmentProcessors:(id)arg2 ;
-(PGManager *)manager;
-(NSArray *)enrichmentProcessors;
-(BOOL)enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

