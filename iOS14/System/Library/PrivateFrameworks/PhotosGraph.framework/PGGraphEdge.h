/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <KnowledgeGraphKit/MAEdge.h>
#import <libobjc.A.dylib/PGGraphElement.h>

@class PGGraph, NSString;

@interface PGGraphEdge : MAEdge <PGGraphElement>

@property (readonly) PGGraph * graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filter;
-(void)setWeight:(float)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(unsigned long long)propertiesCount;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)keywordDescription;
-(void)concreteEdgeSuperAccess_setPropertyValue:(id)arg1 forKey:(id)arg2 ;
@end

