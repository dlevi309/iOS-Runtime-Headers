/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphPortraitNamedEntity.h>

@class NSString, PPNamedEntity, NSSet;

@interface PGGraphBusinessNode : PGGraphNode <PGGraphPortraitNamedEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PPNamedEntity * pg_namedEntity; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (nonatomic,copy,readonly) NSSet * businessCategories; 
@property (nonatomic,readonly) NSSet * publicEventNodes; 
-(NSString *)name;
-(long long)venueCapacity;
-(NSSet *)businessCategories;
-(id)associatedNodesForRemoval;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)keywordDescription;
-(NSSet *)publicEventNodes;
-(PPNamedEntity *)pg_namedEntity;
-(void)enumerateBusinessCategoryNodesUsingBlock:(/*^block*/id)arg1 ;
@end

