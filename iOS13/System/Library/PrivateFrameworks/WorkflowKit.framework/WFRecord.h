/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFRecordDescriptor, NSDictionary, NSMutableSet, NSMutableDictionary, NSSet;

@interface WFRecord : NSObject <NSCopying> {

	WFRecordDescriptor* _descriptor;
	NSDictionary* _allPropertiesByName;
	NSMutableSet* _fetchedPropertyNames;
	NSMutableSet* _modifiedPropertyNames;
	NSMutableDictionary* _lastFetchedValues;
	NSMutableSet* _modifiedPropertyNamesSinceLastSave;
	NSMutableDictionary* _lastSavedOrFetchedValues;

}

@property (nonatomic,readonly) NSDictionary * allPropertiesByName;                             //@synthesize allPropertiesByName=_allPropertiesByName - In the implementation block
@property (nonatomic,readonly) NSMutableSet * fetchedPropertyNames;                            //@synthesize fetchedPropertyNames=_fetchedPropertyNames - In the implementation block
@property (nonatomic,readonly) NSMutableSet * modifiedPropertyNames;                           //@synthesize modifiedPropertyNames=_modifiedPropertyNames - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastFetchedValues;                        //@synthesize lastFetchedValues=_lastFetchedValues - In the implementation block
@property (nonatomic,readonly) NSMutableSet * modifiedPropertyNamesSinceLastSave;              //@synthesize modifiedPropertyNamesSinceLastSave=_modifiedPropertyNamesSinceLastSave - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastSavedOrFetchedValues;                 //@synthesize lastSavedOrFetchedValues=_lastSavedOrFetchedValues - In the implementation block
@property (nonatomic,readonly) NSSet * allProperties; 
@property (nonatomic,readonly) NSSet * fetchedProperties; 
@property (nonatomic,readonly) NSSet * modifiedPropertiesSinceLastSave; 
@property (nonatomic,readonly) NSSet * modifiedProperties; 
@property (nonatomic,readonly) WFRecordDescriptor * descriptor;                                //@synthesize descriptor=_descriptor - In the implementation block
+(id)defaultPropertyValues;
+(id)propertiesForClass:(Class)arg1 walkingSuperclassesUntilReaching:(Class)arg2 ;
+(Class)allocateLeafClassForRecordClass:(Class)arg1 named:(id)arg2 ;
+(id)ignoredPropertyNames;
+(id)propertiesForClass:(Class)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(WFRecordDescriptor *)descriptor;
-(NSSet *)allProperties;
-(NSSet *)modifiedProperties;
-(NSDictionary *)allPropertiesByName;
-(void)loadFromStorage:(id)arg1 ;
-(BOOL)writeToStorage:(id)arg1 error:(id*)arg2 ;
-(id)initWithDescriptor:(id)arg1 storage:(id)arg2 error:(id*)arg3 ;
-(id)initWithDescriptor:(id)arg1 storage:(id)arg2 properties:(id)arg3 error:(id*)arg4 ;
-(NSSet *)fetchedProperties;
-(NSSet *)modifiedPropertiesSinceLastSave;
-(void)loadFromStorage:(id)arg1 properties:(id)arg2 ;
-(BOOL)saveChangesToStorage:(id)arg1 error:(id*)arg2 ;
-(id)descriptionWithValues:(BOOL)arg1 ;
-(void)markPropertyModifiedIfNecessary:(id)arg1 ;
-(void)resetModifications:(BOOL)arg1 ;
-(BOOL)saveProperties:(id)arg1 toStorage:(id)arg2 error:(id*)arg3 ;
-(NSMutableSet *)fetchedPropertyNames;
-(NSMutableSet *)modifiedPropertyNames;
-(NSMutableDictionary *)lastFetchedValues;
-(NSMutableSet *)modifiedPropertyNamesSinceLastSave;
-(NSMutableDictionary *)lastSavedOrFetchedValues;
@end

