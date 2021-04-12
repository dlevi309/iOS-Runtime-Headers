/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray, NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableArray : NSMutableArray {

	int _cd_rc;
	NSMutableArray* _realArray;
	NSManagedObject* _source;
	NSPropertyDescription* _relationship;
	struct {
		unsigned _isFault : 1;
		unsigned _reserved : 31;
	}  _flags;

}

@property (nonatomic,readonly) NSManagedObject * source; 
@property (nonatomic,readonly) NSPropertyDescription * relationship; 
@property (getter=isFault,nonatomic,readonly) BOOL fault; 
+(id)alloc;
+(Class)classForKeyedUnarchiver;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(oneway void)release;
-(void)removeLastObject;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSPropertyDescription *)relationship;
-(BOOL)_tryRetain;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)objectEnumerator;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)retain;
-(id)descriptionWithLocale:(id)arg1 ;
-(BOOL)_isDeallocating;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)count;
-(void)turnIntoFault;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)willRead;
-(id)description;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 ;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3 ;
-(unsigned long long)retainCount;
-(BOOL)isFault;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSManagedObject *)source;
@end

