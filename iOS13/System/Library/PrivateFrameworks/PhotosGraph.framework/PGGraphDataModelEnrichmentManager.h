/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGGraphDataModelEnrichmentManagerDelegate;
@class NSArray, PGManager;

@interface PGGraphDataModelEnrichmentManager : NSObject {

	NSArray* _enrichmentProcessors;
	PGManager* _manager;
	id<PGGraphDataModelEnrichmentManagerDelegate> _delegate;

}

@property (nonatomic,readonly) PGManager * manager;                                                      //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic,__weak) id<PGGraphDataModelEnrichmentManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * enrichmentProcessors;                                           //@synthesize enrichmentProcessors=_enrichmentProcessors - In the implementation block
+(id)enrichmentProcessorsForDataModelEnrichmentContext:(long long)arg1 ;
+(id)allEnrichmentProcessors;
-(id<PGGraphDataModelEnrichmentManagerDelegate>)delegate;
-(void)setDelegate:(id<PGGraphDataModelEnrichmentManagerDelegate>)arg1 ;
-(PGManager *)manager;
-(BOOL)enrichDataModelWithError:(id*)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)initWithManager:(id)arg1 enrichmentProcessors:(id)arg2 ;
-(NSArray *)enrichmentProcessors;
-(id)initWithManager:(id)arg1 enrichmentContext:(long long)arg2 ;
-(BOOL)enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(BOOL)_enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

