/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/swift/libswiftCore.dylib
*/

#import <libswiftCore.dylib/libswiftCore.dylib-Structs.h>
#import <libswiftCore.dylib/Swift._SwiftNativeNSMutableArray.h>

@interface Swift._SwiftNSMutableArray : Swift._SwiftNativeNSMutableArray {

	 contents;

}

@property (readonly,nonatomic) long long count; 
-(void)replaceObjectAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(void)removeLastObject;
-(void)replaceObjectsInRange:(SCD_Struct_Sw1)arg1 withObjects:(const id*)arg2 count:(long long)arg3 ;
-(long long)countByEnumeratingWithState:(SCD_Struct_Sw0*)arg1 objects:(id*)arg2 count:(long long)arg3 ;
-(id*)objectAtIndexedSubscript:(long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertObjects:(const id*)arg1 count:(long long)arg2 atIndex:(long long)arg3 ;
-(long long)count;
-(void)getObjects:(id*)arg1 range:(SCD_Struct_Sw1)arg2 ;
-(id*)objectAtIndex:(long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(long long)arg1 ;
-(void)removeObjectsInRange:(SCD_Struct_Sw1)arg1 ;
-(void)exchangeObjectAtIndex:(long long)arg1 withObjectAtIndex:(long long)arg2 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2 ;
-(id)copyWithZone:(void*)arg1 ;
@end

