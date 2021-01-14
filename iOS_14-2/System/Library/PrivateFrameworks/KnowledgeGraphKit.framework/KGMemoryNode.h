/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSArray, NSMutableArray, NSDictionary;

@interface KGMemoryNode : NSObject {

	float _weight;
	unsigned long long _identifier;
	NSArray* _labels;
	NSMutableArray* _edges;
	NSDictionary* _properties;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) float weight;                                 //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) NSArray * labels;                           //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableArray * edges;                       //@synthesize edges=_edges - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                    //@synthesize properties=_properties - In the implementation block
-(NSDictionary *)properties;
-(void)setWeight:(float)arg1 ;
-(NSArray *)labels;
-(void)removeEdge:(id)arg1 ;
-(float)weight;
-(NSMutableArray *)edges;
-(void)addEdge:(id)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(unsigned long long)identifier;
-(void)setEdges:(NSMutableArray *)arg1 ;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(void)removeAllEdges;
@end

