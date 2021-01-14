/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)setWithObject:(id)arg1 ;
+(id)setWithObjects:(id)arg1 ;
+(id)setWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)setWithArray:(id)arg1 ;
+(id)setWithSet:(id)arg1 ;
+(id)setWithCapacity:(unsigned long long)arg1 ;
+(id)set;
-(void)intersectSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)objectEnumerator;
-(BOOL)isEqualToSet:(id)arg1 ;
-(id)anyObject;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)_copyAllItems;
-(void)encodeWithCoder:(id)arg1 ;
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
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(id)setByAddingObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(void)dealloc;
-(id)initWithArray:(id)arg1 ;
@end

