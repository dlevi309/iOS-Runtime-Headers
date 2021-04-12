/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, NSString;

@interface UIGestureGraphElement : NSObject {

	NSMutableDictionary* _properties;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(id)description;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removePropertyForKey:(id)arg1 ;
-(NSString *)label;
-(void)setProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeAllProperties;
@end

