/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PGGraphEdge *)edge;
-(void)setEdge:(PGGraphEdge *)arg1 ;
-(id)init;
-(PGGraphNode *)node;
-(void)setNode:(PGGraphNode *)arg1 ;
-(float)weight;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)personName;
-(unsigned long long)hash;
-(void)setPersonName:(NSString *)arg1 ;
-(NSSet *)addressNodes;
-(BOOL)isEqual:(id)arg1 ;
-(double)timestampStart;
-(void)addAddressNode:(id)arg1 ;
-(BOOL)canMergeWithTitleComponent:(id)arg1 ;
-(void)updateWithMomentNodes:(id)arg1 ;
-(void)setAddressNodes:(NSSet *)arg1 ;
@end

