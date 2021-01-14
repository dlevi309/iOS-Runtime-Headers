/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSArray, KGMemoryNode, NSDictionary;

@interface KGMemoryEdge : NSObject {

	float _weight;
	unsigned long long _identifier;
	NSArray* _labels;
	KGMemoryNode* _targetNode;
	KGMemoryNode* _sourceNode;
	NSDictionary* _properties;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) float weight;                                 //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) NSArray * labels;                           //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) KGMemoryNode * targetNode;                  //@synthesize targetNode=_targetNode - In the implementation block
@property (nonatomic,readonly) KGMemoryNode * sourceNode;                  //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                    //@synthesize properties=_properties - In the implementation block
-(NSDictionary *)properties;
-(void)setWeight:(float)arg1 ;
-(NSArray *)labels;
-(KGMemoryNode *)sourceNode;
-(float)weight;
-(KGMemoryNode *)targetNode;
-(void)setProperties:(NSDictionary *)arg1 ;
-(unsigned long long)identifier;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6 ;
-(id)oppositeNodeFromNode:(id)arg1 ;
@end

