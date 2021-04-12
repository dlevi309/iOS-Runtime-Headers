/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@class NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableSet : NSMutableSet {

	int _cd_rc;
	struct {
		unsigned _isFault : 1;
		unsigned _mustPropagateDelete : 1;
		unsigned _reserved : 14;
		unsigned _relationship : 16;
	}  _flags;
	id _realSet;
	NSManagedObject* _source;

}

@property (nonatomic,readonly) NSManagedObject * source; 
@property (nonatomic,readonly) NSPropertyDescription * relationship; 
@property (getter=isFault,nonatomic,readonly) BOOL fault; 
+(id)alloc;
+(Class)classForKeyedUnarchiver;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
-(void)intersectSet:(id)arg1 ;
-(oneway void)release;
-(void)setSet:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSPropertyDescription *)relationship;
-(BOOL)_tryRetain;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)objectEnumerator;
-(BOOL)isEqualToSet:(id)arg1 ;
-(id)anyObject;
-(id)retain;
-(id)descriptionWithLocale:(id)arg1 ;
-(BOOL)_isDeallocating;
-(id)valueForKey:(id)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(unsigned long long)count;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)turnIntoFault;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)allObjects;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(BOOL)_isIdenticalFault:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)willRead;
-(id)description;
-(void)addObject:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(Class)classForCoder;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)getObjects:(id*)arg1 ;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3 ;
-(unsigned long long)retainCount;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4 ;
-(BOOL)isFault;
-(void)willReadWithContents:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSManagedObject *)source;
@end

