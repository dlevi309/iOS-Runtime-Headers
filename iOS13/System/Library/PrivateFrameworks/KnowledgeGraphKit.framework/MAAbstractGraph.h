/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MAGraph.h>

@interface MAAbstractGraph : MAGraph
+(Class)nodeClass;
+(Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2 ;
+(Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2 ;
+(Class)edgeClass;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithDataURL:(id)arg1 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)initWithGraphMLURL:(id)arg1 ;
-(id)initWithPersistentStoreURL:(id)arg1 ;
@end

