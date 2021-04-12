/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, RLMProperty, NSDictionary;

@interface RLMObjectSchema : NSObject <NSCopying> {

	BOOL _isSwiftClass;
	NSArray* _swiftGenericProperties;
	NSArray* _properties;
	NSString* _className;
	RLMProperty* _primaryKeyProperty;
	NSDictionary* _allPropertiesByName;
	Class _objectClass;
	Class _accessorClass;
	Class _unmanagedClass;
	NSArray* _computedProperties;

}

@property (nonatomic,retain) NSDictionary * allPropertiesByName;              //@synthesize allPropertiesByName=_allPropertiesByName - In the implementation block
@property (nonatomic,retain) NSString * className;                            //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) NSString * objectName; 
@property (nonatomic,copy) NSArray * properties;                              //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL isSwiftClass;                               //@synthesize isSwiftClass=_isSwiftClass - In the implementation block
@property (assign,nonatomic) Class objectClass;                               //@synthesize objectClass=_objectClass - In the implementation block
@property (assign,nonatomic) Class accessorClass;                             //@synthesize accessorClass=_accessorClass - In the implementation block
@property (assign,nonatomic) Class unmanagedClass;                            //@synthesize unmanagedClass=_unmanagedClass - In the implementation block
@property (nonatomic,retain) RLMProperty * primaryKeyProperty;                //@synthesize primaryKeyProperty=_primaryKeyProperty - In the implementation block
@property (nonatomic,copy) NSArray * computedProperties;                      //@synthesize computedProperties=_computedProperties - In the implementation block
@property (nonatomic,readonly) NSArray * swiftGenericProperties; 
+(void)addSwiftProperties:(id)arg1 objectUtil:(Class)arg2 instance:(id)arg3 indexed:(id)arg4 nameMap:(id)arg5 ;
+(id)objectSchemaForObjectStoreSchema:(const ObjectSchema*)arg1 ;
+(id)schemaForObjectClass:(Class)arg1 ;
+(id)propertiesForClass:(Class)arg1 isSwift:(BOOL)arg2 ;
-(void)setIsSwiftClass:(BOOL)arg1 ;
-(NSArray *)properties;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(Class)unmanagedClass;
-(void)setComputedProperties:(NSArray *)arg1 ;
-(void)setUnmanagedClass:(Class)arg1 ;
-(NSString *)className;
-(NSArray *)swiftGenericProperties;
-(RLMProperty *)primaryKeyProperty;
-(id)description;
-(NSArray *)computedProperties;
-(void)setClassName:(NSString *)arg1 ;
-(BOOL)isSwiftClass;
-(id)initWithClassName:(id)arg1 objectClass:(Class)arg2 properties:(id)arg3 ;
-(void)setAllPropertiesByName:(NSDictionary *)arg1 ;
-(void)setPrimaryKeyProperty:(RLMProperty *)arg1 ;
-(NSString *)objectName;
-(Class)objectClass;
-(void)_propertiesDidChange;
-(void)setProperties:(NSArray *)arg1 ;
-(ObjectSchema*)objectStoreCopy:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccessorClass:(Class)arg1 ;
-(void)setObjectClass:(Class)arg1 ;
-(BOOL)isEqualToObjectSchema:(id)arg1 ;
-(Class)accessorClass;
-(NSDictionary *)allPropertiesByName;
@end

