/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray;

@interface PLOPTICSClusteringObject : NSObject {

	BOOL _processed;
	id _object;
	unsigned long long _index;
	unsigned long long _order;
	NSMutableArray* _neighbors;
	double _coreDistance;
	double _reachabilityDistance;

}

@property (nonatomic,readonly) id object;                               //@synthesize object=_object - In the implementation block
@property (assign) unsigned long long index;                            //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) unsigned long long order;                  //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) NSMutableArray * neighbors;              //@synthesize neighbors=_neighbors - In the implementation block
@property (assign,nonatomic) double coreDistance;                       //@synthesize coreDistance=_coreDistance - In the implementation block
@property (assign,nonatomic) double reachabilityDistance;               //@synthesize reachabilityDistance=_reachabilityDistance - In the implementation block
@property (assign,nonatomic) BOOL processed;                            //@synthesize processed=_processed - In the implementation block
+(id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3 ;
-(id)object;
-(unsigned long long)index;
-(unsigned long long)order;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(id)initWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3 ;
-(void)registerNeighbors:(id)arg1 deleteExisting:(BOOL)arg2 ;
-(void)sortNeighborsByDistance;
-(id)neighborAtIndex:(unsigned long long)arg1 ;
-(void)updateCoreDistanceForNeighbor:(unsigned long long)arg1 ;
-(NSMutableArray *)neighbors;
-(double)coreDistance;
-(void)setCoreDistance:(double)arg1 ;
-(double)reachabilityDistance;
-(void)setReachabilityDistance:(double)arg1 ;
-(BOOL)processed;
-(void)setProcessed:(BOOL)arg1 ;
@end

