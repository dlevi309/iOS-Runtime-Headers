/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@class NSManagedObject, NSString, NSMutableSet;

@interface _NSNotifyingWrapperMutableSet : NSMutableSet {

	NSManagedObject* _container;
	NSString* _key;
	NSMutableSet* _mutableSet;

}
+(Class)classForKeyedUnarchiver;
-(void)intersectSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)objectEnumerator;
-(BOOL)isEqualToSet:(id)arg1 ;
-(id)anyObject;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(unsigned long long)count;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)allObjects;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(Class)classForCoder;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)getObjects:(id*)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3 ;
-(void)dealloc;
@end

