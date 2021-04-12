/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSOrderedSetChanges.h>

@interface NSConcreteOrderedSetChanges : NSOrderedSetChanges {

	SCD_Struct_NS54* _changes;

}
-(unsigned long long)changeCount;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)_enumerateChanges:(unsigned long long)arg1 stop:(BOOL*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)addChange:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

