/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <KnowledgeGraphKit/MANode.h>
#import <libobjc.A.dylib/PGGraphElement.h>

@class PGGraph, NSString;

@interface PGGraphNode : MANode <PGGraphElement>

@property (readonly) PGGraph * graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filter;
-(id)UUID;
-(void)setWeight:(float)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(unsigned long long)propertiesCount;
-(id)name;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)keywordDescription;
-(id)firstDeepNeighborWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3 ;
-(unsigned long long)countOfDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3 ;
-(id)deepNeighborsWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3 ;
-(void)enumerateDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3 andBlock:(/*^block*/id)arg4 ;
-(void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(BOOL*)arg5 block:(/*^block*/id)arg6 ;
-(void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 shouldStop:(BOOL*)arg4 block:(/*^block*/id)arg5 ;
-(void)concreteNodeSuperAccess_setPropertyValue:(id)arg1 forKey:(id)arg2 ;
@end

