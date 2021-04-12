/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
-(unsigned long long)retainCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)description;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isFault;
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
-(BOOL)intersectsSet:(id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(NSManagedObject *)source;
-(id)valueForKey:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(Class)classForArchiver;
-(id)valueForKeyPath:(id)arg1 ;
-(NSPropertyDescription *)relationship;
-(id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4 ;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3 ;
-(void)willRead;
-(void)turnIntoFault;
-(void)willReadWithContents:(id)arg1 ;
-(BOOL)_shouldProcessKVOChange;
-(BOOL)_isIdenticalFault:(id)arg1 ;
@end

