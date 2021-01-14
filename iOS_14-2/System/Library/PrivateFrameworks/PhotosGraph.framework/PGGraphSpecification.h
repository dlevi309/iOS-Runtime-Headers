/*
* Generated on Thursday, January 14, 2021 at 2:25:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <KnowledgeGraphKit/MAGraphSpecification.h>

@interface PGGraphSpecification : MAGraphSpecification
-(id)init;
-(void)enumerateNodeClassesUsingBlock:(/*^block*/id)arg1 ;
-(id)nodeClassByDomain;
-(Class)nodeClassWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)nodeClassByDomainAndLabel;
-(Class)edgeClassWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateEdgeClassesUsingBlock:(/*^block*/id)arg1 ;
-(id)edgeClassByDomain;
-(id)edgeClassByDomainAndLabel;
@end

