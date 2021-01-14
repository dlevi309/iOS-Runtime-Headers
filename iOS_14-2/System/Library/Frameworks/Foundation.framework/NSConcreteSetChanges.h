/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSetChanges.h>

@class NSSet, NSMutableArray;

@interface NSConcreteSetChanges : NSSetChanges {

	NSSet* _backing;
	NSMutableArray* _changes;
	BOOL _backingIsMutable;

}
-(unsigned long long)changeCount;
-(void)_fault;
-(void)intersectSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)objectEnumerator;
-(unsigned long long)count;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)member:(id)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)description;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)transformObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)filterObjectsWithTest:(/*^block*/id)arg1 ;
-(void)removeAllObjects;
-(void)addChange:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)_willChange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(void)dealloc;
@end

