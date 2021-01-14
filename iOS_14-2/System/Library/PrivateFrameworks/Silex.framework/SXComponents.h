/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface SXComponents : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {

	NSMutableArray* _components;
	NSMutableDictionary* _componentsByIdentifier;
	NSMutableDictionary* _childComponentsByParentIdentifier;

}

@property (nonatomic,readonly) NSMutableArray * components;                                          //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * componentsByIdentifier;                         //@synthesize componentsByIdentifier=_componentsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * childComponentsByParentIdentifier;              //@synthesize childComponentsByParentIdentifier=_childComponentsByParentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allComponents; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SX16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)componentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)addComponent:(id)arg1 ;
-(NSMutableArray *)components;
-(NSArray *)allComponents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)componentsForContainerComponentWithIdentifier:(id)arg1 ;
-(void)insertComponent:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)enumerateComponentsWithBlock:(/*^block*/id)arg1 ;
-(void)addComponentsFromArray:(id)arg1 ;
-(unsigned long long)indexOfComponent:(id)arg1 ;
-(id)componentForIdentifier:(id)arg1 ;
-(id)componentsForContainerComponentWithPath:(id)arg1 ;
-(NSMutableDictionary *)componentsByIdentifier;
-(NSMutableDictionary *)childComponentsByParentIdentifier;
@end

