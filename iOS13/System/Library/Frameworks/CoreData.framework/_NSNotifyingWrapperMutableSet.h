/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(Class)classForCoder;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)allObjects;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(BOOL)isEqualToSet:(id)arg1 ;
-(id)anyObject;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(Class)classForArchiver;
-(id)valueForKeyPath:(id)arg1 ;
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3 ;
@end

