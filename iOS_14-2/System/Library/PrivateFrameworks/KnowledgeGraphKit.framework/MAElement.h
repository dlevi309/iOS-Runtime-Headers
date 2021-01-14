/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

@class MABaseGraph, NSString;


@protocol MAElement <NSObject>
@property (readonly,nonatomic) MABaseGraph * graph; 
@property (readonly,nonatomic) unsigned identifier; 
@property (readonly,nonatomic) NSString * label; 
@property (readonly,nonatomic) unsigned short domain; 
@property (readonly,nonatomic) float weight; 
@required
-(MABaseGraph *)graph;
-(id)objectForKeyedSubscript:(id)arg1;
-(id)objectForKeyedSubscript:(id)arg1;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
-(id)setObject:(id)arg1;
-(id)propertyForKey:(id)arg1;
-(id)propertyForKey:(id)arg1;
-(float)weight;
-(BOOL)hasProperties;
-(unsigned long long)propertiesCount;
-(unsigned short)domain;
-(BOOL)isIdentifiedByProperties:(id)arg1;
-(BOOL)isIdentifiedByProperties:(id)arg1;
-(void)removePropertyForKey:(id)arg1;
-(void)removePropertyForKey:(id)arg1;
-(void)removeAllProperties;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2;
-(id)propertyKeys;
-(void)setProperties:(id)arg1;
-(unsigned)identifier;
-(NSString *)label;
-(BOOL)hasProperties:(id)arg1;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
-(id)visualString;

@end

