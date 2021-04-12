/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSTIntegerKeyDict : NSObject {

	unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;

}
-(id)init;
-(void)dealloc;
-(long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(unsigned)arg1 ;
-(void)removeObjectForKey:(unsigned)arg1 ;
-(id)allValues;
-(void)removeFirstObject;
-(void)setObject:(id)arg1 forKey:(unsigned)arg2 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)transformWithFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 andState:(void*)arg3 ;
@end

