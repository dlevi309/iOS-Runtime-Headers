/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@protocol KGEdge <KGElement>
@property (nonatomic,readonly) id<KGNode> targetNode; 
@property (nonatomic,readonly) id<KGNode> sourceNode; 
@required
-(id<KGNode>)sourceNode;
-(id<KGNode>)targetNode;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6;
-(id)oppositeNodeFromNode:(id)arg1;

@end

