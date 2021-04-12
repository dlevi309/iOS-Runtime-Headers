/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MAConcreteEdge.h>

@class MAAbstractNode;

@interface MAAbstractEdge : MAConcreteEdge {

	MAAbstractNode* _sourceAbstractNode;
	MAAbstractNode* _targetAbstractNode;

}
-(id)sourceNode;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)targetNode;
-(id)oppositeNode:(id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
@end

