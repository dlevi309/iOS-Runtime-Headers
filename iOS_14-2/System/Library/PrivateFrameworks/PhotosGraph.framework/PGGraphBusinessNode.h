/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphPortraitNamedEntity.h>

@class NSString, PPNamedEntity, NSSet;

@interface PGGraphBusinessNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity> {

	NSString* _name;
	NSString* _uuid;
	long long _venueCapacity;
	double _latitude;
	double _longitude;
	double _radius;

}

@property (nonatomic,readonly) PPNamedEntity * pg_namedEntity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * UUID;                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) long long venueCapacity;                     //@synthesize venueCapacity=_venueCapacity - In the implementation block
@property (nonatomic,readonly) NSSet * businessCategories; 
@property (nonatomic,readonly) double latitude;                             //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                            //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double radius;                               //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSSet * publicEventNodes; 
@property (nonatomic,readonly) NSSet * momentNodes; 
+(id)categoryOfBusiness;
-(id)associatedNodesForRemoval;
-(double)latitude;
-(NSSet *)publicEventNodes;
-(NSString *)UUID;
-(id)init;
-(double)longitude;
-(unsigned short)domain;
-(NSString *)name;
-(double)radius;
-(NSString *)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(NSSet *)momentNodes;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)label;
-(long long)venueCapacity;
-(BOOL)hasProperties:(id)arg1 ;
-(id)keywordDescription;
-(NSSet *)businessCategories;
-(PPNamedEntity *)pg_namedEntity;
-(void)enumerateBusinessCategoryNodesUsingBlock:(/*^block*/id)arg1 ;
@end

