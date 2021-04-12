/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString, NSSet;

@interface PGGraphPetNode : PGGraphOptimizedNode {

	NSString* _uuid;

}

@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * ownerNodes; 
-(id)init;
-(unsigned short)domain;
-(id)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(NSSet *)momentNodes;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(NSSet *)ownerNodes;
-(void)enumerateOwnerNodesUsingBlock:(/*^block*/id)arg1 ;
@end

