/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSNumber, NSSet, NSArray, NSString;

@interface PGGraphSocialGroupNode : PGGraphOptimizedNode {

	NSNumber* _uuid;
	float _weight;

}

@property (readonly) long long socialGroupID; 
@property (nonatomic,readonly) unsigned long long rank; 
@property (readonly) unsigned long long numberOfMomentNodes; 
@property (readonly) unsigned long long numberOfPersonNodes; 
@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * personNodes; 
@property (nonatomic,readonly) NSArray * sortedPersonNodes; 
@property (nonatomic,readonly) NSString * socialGroupName; 
@property (nonatomic,readonly) BOOL isFrequentSocialGroup; 
+(id)weightSortDescriptors;
-(id)UUID;
-(void)setWeight:(float)arg1 ;
-(id)initWithWeight:(float)arg1 ;
-(float)weight;
-(unsigned short)domain;
-(unsigned long long)numberOfPersonNodes;
-(long long)socialGroupID;
-(id)description;
-(void)enumeratePersonNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)socialGroupName;
-(void)setLocalProperties:(id)arg1 ;
-(NSArray *)sortedPersonNodes;
-(unsigned long long)numberOfMomentNodes;
-(unsigned long long)rank;
-(id)propertyDictionary;
-(NSSet *)momentNodes;
-(NSSet *)personNodes;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)label;
-(BOOL)isFrequentSocialGroup;
-(BOOL)hasProperties:(id)arg1 ;
@end

