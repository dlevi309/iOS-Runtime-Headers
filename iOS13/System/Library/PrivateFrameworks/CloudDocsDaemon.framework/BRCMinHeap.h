/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMapTable;

@interface BRCMinHeap : NSObject <NSFastEnumeration> {

	id* _array;
	unsigned long long _size;
	/*^block*/id _comparator;
	unsigned long long _mutation;
	NSMapTable* _objects;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BR13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(id)firstObject;
-(void)removeFirstObject;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(BOOL)check;
-(void)_moveDown:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_moveUp:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_moveUpOrDown:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_shrink;
-(void)firstObjectWeightChanged;
-(void)objectWeightChanged:(id)arg1 ;
@end

