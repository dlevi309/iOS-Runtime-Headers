/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)description;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isFault;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeLastObject;
-(Class)classForCoder;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSManagedObject *)source;
-(id)valueForKey:(id)arg1 ;
-(Class)classForArchiver;
-(id)valueForKeyPath:(id)arg1 ;
-(NSPropertyDescription *)relationship;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3 ;
-(void)willRead;
-(void)turnIntoFault;
@end

