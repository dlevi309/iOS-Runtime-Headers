/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MAEdge.h>

@class NSMutableDictionary, NSString;

@interface MAConcreteEdge : MAEdge {

	NSMutableDictionary* _properties;
	unsigned short _domain;
	float _weight;
	NSString* _label;

}
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)setWeight:(float)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(float)weight;
-(BOOL)hasProperties;
-(unsigned long long)propertiesCount;
-(unsigned short)domain;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(void)setLocalProperties:(id)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(void)removeAllProperties;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)propertyDictionary;
-(id)propertyKeys;
-(void)mergeProperties:(id)arg1 ;
-(id)label;
-(unsigned long long)memoryFootprint:(id)arg1 ;
@end

