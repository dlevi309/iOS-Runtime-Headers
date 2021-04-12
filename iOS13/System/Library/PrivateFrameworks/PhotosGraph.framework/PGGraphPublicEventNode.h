/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphPortraitNamedEntity.h>

@class NSString, PPNamedEntity, PGGraphBusinessNode, NSSet;

@interface PGGraphPublicEventNode : PGGraphNode <PGGraphPortraitNamedEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PPNamedEntity * pg_namedEntity; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) PGGraphBusinessNode * businessNode; 
@property (nonatomic,readonly) NSSet * categories; 
@property (nonatomic,readonly) NSSet * localizedCategories; 
@property (nonatomic,readonly) NSSet * preciseLocalizedCategoryNames; 
@property (nonatomic,copy,readonly) NSSet * performers; 
@property (nonatomic,readonly) long long expectedAttendance; 
+(id)momentNodesForPublicEventNodes:(id)arg1 ;
-(NSString *)name;
-(NSSet *)categories;
-(unsigned long long)muid;
-(NSSet *)localizedCategories;
-(NSSet *)performers;
-(long long)expectedAttendance;
-(id)associatedNodesForRemoval;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)keywordDescription;
-(PGGraphBusinessNode *)businessNode;
-(PPNamedEntity *)pg_namedEntity;
-(NSSet *)preciseLocalizedCategoryNames;
-(void)enumerateCategoryNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateLocalizedSubcategoryNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePerformerNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePublicEventCategoryNodesUsingBlock:(/*^block*/id)arg1 ;
@end

