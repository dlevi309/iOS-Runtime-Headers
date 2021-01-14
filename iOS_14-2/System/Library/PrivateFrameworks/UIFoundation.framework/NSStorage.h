/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@interface NSStorage : NSObject {

	id _storage;
	long long _hintCapacity;
	unsigned long long _reserved[4];

}
+(void)initialize;
-(void)enumerateElementsUsingBlock:(/*^block*/id)arg1 ;
-(void)addElement:(void*)arg1 ;
-(id)init;
-(unsigned long long)capacity;
-(void)removeElementAtIndex:(unsigned long long)arg1 ;
-(void)replaceElementAtIndex:(unsigned long long)arg1 withElement:(void*)arg2 ;
-(unsigned long long)hintCapacity;
-(unsigned long long)count;
-(void*)elementAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementSize;
-(void)removeElementsInRange:(NSRange)arg1 ;
-(id)description;
-(void)setHintCapacity:(unsigned long long)arg1 ;
-(void*)pointerToElement:(unsigned long long)arg1 directlyAccessibleElements:(NSRange*)arg2 ;
-(void)insertElement:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)insertElements:(void*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dealloc;
@end

