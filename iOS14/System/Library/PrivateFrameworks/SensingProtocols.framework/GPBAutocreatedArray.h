/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
*/

#import <SensingProtocols/SensingProtocols-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class GPBMessage, NSMutableArray;

@interface GPBAutocreatedArray : NSMutableArray {

	GPBMessage* _autocreator;
	NSMutableArray* _array;

}
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GP1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

