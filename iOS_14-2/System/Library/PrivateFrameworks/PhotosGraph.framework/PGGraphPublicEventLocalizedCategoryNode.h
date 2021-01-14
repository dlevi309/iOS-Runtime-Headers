/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString;

@interface PGGraphPublicEventLocalizedCategoryNode : PGGraphOptimizedNode {

	unsigned _level : 8;
	NSString* _label;

}

@property (readonly) unsigned long long level;              //@synthesize level=_level - In the implementation block
-(id)initWithLabel:(id)arg1 ;
-(unsigned short)domain;
-(id)description;
-(unsigned long long)level;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

