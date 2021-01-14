/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSMutableDictionary, NSString;

@interface PGGraphConcreteNode : PGGraphNode {

	NSMutableDictionary* _properties;
	unsigned short _domain;
	float _weight;
	NSString* _label;

}

@property (assign,nonatomic) float weight;              //@synthesize weight=_weight - In the implementation block
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(id)UUID;
-(void)setWeight:(float)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(float)weight;
-(BOOL)hasProperties;
-(unsigned long long)propertiesCount;
-(unsigned short)domain;
-(id)name;
-(void)setLocalProperties:(id)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(void)removeAllProperties;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)propertyDictionary;
-(id)propertyKeys;
-(void)mergeProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(id)_stringValueForPropertyWithKey:(id)arg1 ;
@end

