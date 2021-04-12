/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/KGTraversal.h>

@class KGDatabase;

@interface KGDegasTraversal : NSObject <KGTraversal> {

	KGDatabase* _kgDatabase;
	Database* _database;
	Traversal* _traversal;
	BOOL _fixedStepMode;

}

@property (nonatomic,readonly) KGDatabase * kgDatabase;              //@synthesize kgDatabase=_kgDatabase - In the implementation block
-(id)distribution;
-(id)initWithDatabase:(id)arg1 ;
-(void)dealloc;
-(void)setStartingNodes:(id)arg1 ;
-(void)setStartingNodeFilter:(id)arg1 ;
-(void)setVariableStepMode;
-(void)setTerminatingCondition:(id)arg1 ;
-(void)setTargetNodesOnlyReportingMode;
-(void)setUncountedPathsReportingMode;
-(void)setCountedPathsReportingMode;
-(void)addStepForEdgeDirection:(unsigned long long)arg1 edgeFilter:(id)arg2 targetNodeFilter:(id)arg3 ;
-(BOOL)performTraversal:(id*)arg1 ;
-(id)targetNodes;
-(shared_ptr<degas::NodeFilter>*)makeNodeFilter:(id)arg1 ;
-(shared_ptr<degas::EdgeFilter>*)makeEdgeFilter:(id)arg1 ;
-(KGDatabase *)kgDatabase;
@end

