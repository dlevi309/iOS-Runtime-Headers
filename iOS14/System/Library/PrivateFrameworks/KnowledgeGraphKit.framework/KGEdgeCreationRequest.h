/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KGEdgeChangeRequest.h>

@protocol KGNode;
@class NSArray, NSNumber, NSDictionary, KGEdgePlaceholder;

@interface KGEdgeCreationRequest : KGEdgeChangeRequest {

	NSArray* _labels;
	NSNumber* _weight;
	NSDictionary* _properties;
	id<KGNode> _targetNode;
	id<KGNode> _sourceNode;
	KGEdgePlaceholder* _placeholderForEdge;

}

@property (retain,readonly) NSArray * labels;                                       //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) id<KGNode> targetNode;                               //@synthesize targetNode=_targetNode - In the implementation block
@property (nonatomic,readonly) id<KGNode> sourceNode;                               //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) KGEdgePlaceholder * placeholderForEdge;              //@synthesize placeholderForEdge=_placeholderForEdge - In the implementation block
+(id)creationRequestWithLabels:(id)arg1 weight:(id)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5 ;
+(id)changeRequestForEdge:(id)arg1 ;
-(id)properties;
-(void)setWeight:(id)arg1 ;
-(NSArray *)labels;
-(id<KGNode>)sourceNode;
-(id)weight;
-(id<KGNode>)targetNode;
-(void)setProperties:(id)arg1 ;
-(KGEdgePlaceholder *)placeholderForEdge;
@end

