/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, NSString;

@interface UIGestureGraphElement : NSObject {

	NSMutableDictionary* _properties;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithLabel:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(id)description;
-(void)removePropertyForKey:(id)arg1 ;
-(void)removeAllProperties;
-(void)setProperties:(id)arg1 ;
-(NSString *)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

