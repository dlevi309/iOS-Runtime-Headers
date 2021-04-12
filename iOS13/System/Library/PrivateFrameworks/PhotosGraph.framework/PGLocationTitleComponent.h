/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableSet, PGGraphNode, PGGraphEdge, NSString, NSSet;

@interface PGLocationTitleComponent : NSObject {

	NSMutableSet* _addressNodes;
	float _weight;
	PGGraphNode* _node;
	PGGraphEdge* _edge;
	double _timestampStart;
	unsigned long long _type;
	NSString* _personName;

}

@property (nonatomic,retain) PGGraphNode * node;                   //@synthesize node=_node - In the implementation block
@property (nonatomic,retain) PGGraphEdge * edge;                   //@synthesize edge=_edge - In the implementation block
@property (nonatomic,retain) NSSet * addressNodes;                 //@synthesize addressNodes=_addressNodes - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) NSString * personName;                //@synthesize personName=_personName - In the implementation block
@property (nonatomic,readonly) double timestampStart;              //@synthesize timestampStart=_timestampStart - In the implementation block
@property (nonatomic,readonly) float weight;                       //@synthesize weight=_weight - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(PGGraphNode *)node;
-(float)weight;
-(void)setNode:(PGGraphNode *)arg1 ;
-(void)setEdge:(PGGraphEdge *)arg1 ;
-(PGGraphEdge *)edge;
-(NSString *)personName;
-(void)setPersonName:(NSString *)arg1 ;
-(double)timestampStart;
-(void)addAddressNode:(id)arg1 ;
-(BOOL)canMergeWithTitleComponent:(id)arg1 ;
-(void)updateWithMomentNodes:(id)arg1 ;
-(NSSet *)addressNodes;
-(void)setAddressNodes:(NSSet *)arg1 ;
@end

