/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSTTableDataObjectKeyDict : NSObject {

	unordered_map<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int, TSTTableDataObjectHasher, TSTTableDataObjectEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int> > >* mMap;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned)keyForObject:(id)arg1 ;
-(void)setKey:(unsigned)arg1 forObject:(id)arg2 ;
-(void)removeKeyForObject:(id)arg1 ;
-(void)removeAllKeys;
@end

