/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableArray, NSMutableIndexSet;

@interface TSPReferenceOrderedSet : NSObject <NSCopying, NSMutableCopying> {

	unsigned long long _capacity;
	NSMutableArray* _items;
	NSMutableIndexSet* _objectsIndexSet;
	NSMutableIndexSet* _removedObjectsIndexSet;
	NSMutableIndexSet* _lazyReferencesIndexSet;
	NSMutableIndexSet* _removedLazyReferencesIndexSet;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(BOOL)removeItem:(id)arg1 ;
-(BOOL)addItem:(id)arg1 ;
-(id)init;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)allObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

