/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@class NSLock;

@interface MFWeakSet : NSMutableSet {

	NSLock* _lock;
	unsigned long long _gen;
	CFDictionaryRef _objects;

}
+(id)set;
+(id)setWithSet:(id)arg1 ;
+(id)setWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)setWithCapacity:(unsigned long long)arg1 ;
+(id)setWithArray:(id)arg1 ;
+(id)setWithObject:(id)arg1 ;
+(id)setWithObjects:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)allObjects;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(BOOL)isEqualToSet:(id)arg1 ;
-(id)anyObject;
-(BOOL)intersectsSet:(id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)setByAddingObject:(id)arg1 ;
-(id)_copyAllItems;
@end

