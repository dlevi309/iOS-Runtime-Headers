/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphPortraitNamedEntity.h>

@class NSString, PPNamedEntity, PGGraphBusinessNode, NSSet;

@interface PGGraphPublicEventNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity> {

	unsigned long long _muid;
	NSString* _name;
	long long _expectedAttendance;

}

@property (nonatomic,readonly) PPNamedEntity * pg_namedEntity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid;                            //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) PGGraphBusinessNode * businessNode; 
@property (nonatomic,readonly) NSSet * categories; 
@property (nonatomic,readonly) NSSet * localizedCategories; 
@property (nonatomic,readonly) NSSet * preciseLocalizedCategoryNames; 
@property (nonatomic,copy,readonly) NSSet * performers; 
@property (nonatomic,readonly) long long expectedAttendance;                       //@synthesize expectedAttendance=_expectedAttendance - In the implementation block
+(id)momentNodesForPublicEventNodes:(id)arg1 ;
+(id)unsupportedCategoriesForTitles;
+(id)categoryOfPublicEvent;
-(id)associatedNodesForRemoval;
-(id)init;
-(NSSet *)categories;
-(unsigned short)domain;
-(NSString *)name;
-(long long)expectedAttendance;
-(NSString *)description;
-(void)setLocalProperties:(id)arg1 ;
-(NSSet *)localizedCategories;
-(id)propertyDictionary;
-(unsigned long long)muid;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(NSSet *)performers;
-(id)keywordDescription;
-(PGGraphBusinessNode *)businessNode;
-(PPNamedEntity *)pg_namedEntity;
-(NSSet *)preciseLocalizedCategoryNames;
-(void)enumerateCategoryNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateLocalizedSubcategoryNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePerformerNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePublicEventCategoryNodesUsingBlock:(/*^block*/id)arg1 ;
@end

