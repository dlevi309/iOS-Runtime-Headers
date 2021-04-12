/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeFirstObject;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BR13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(BOOL)check;
-(unsigned long long)count;
-(id)firstObject;
-(BOOL)containsObject:(id)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(void)_shrink;
-(void)dealloc;
-(void)_moveDown:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_moveUp:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_moveUpOrDown:(id)arg1 index:(unsigned long long)arg2 ;
-(void)firstObjectWeightChanged;
-(void)objectWeightChanged:(id)arg1 ;
@end

