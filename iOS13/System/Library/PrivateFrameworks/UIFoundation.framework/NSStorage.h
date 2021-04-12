/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@interface NSStorage : NSObject {

	id _storage;
	long long _hintCapacity;
	unsigned long long _reserved[4];

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(unsigned long long)capacity;
-(void*)elementAtIndex:(unsigned long long)arg1 ;
-(id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)insertElements:(void*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)removeElementAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementSize;
-(void)setHintCapacity:(unsigned long long)arg1 ;
-(unsigned long long)hintCapacity;
-(void)replaceElementAtIndex:(unsigned long long)arg1 withElement:(void*)arg2 ;
-(void)removeElementsInRange:(NSRange)arg1 ;
-(void*)pointerToElement:(unsigned long long)arg1 directlyAccessibleElements:(NSRange*)arg2 ;
-(void)insertElement:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addElement:(void*)arg1 ;
-(void)enumerateElementsUsingBlock:(/*^block*/id)arg1 ;
@end

