/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPFontHeightCache : NSObject {

	list<unsigned long, std::__1::allocator<unsigned long> >* _fontHashList;
	map<unsigned long, TSWPFontHeightCacheEntry, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSWPFontHeightCacheEntry> > >* _fontHashToInfoMap;
	unsigned _cacheSize;
	unsigned _maxCacheSize;
	opaque_pthread_rwlock_t _lock;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedCache;
+(id)_singletonAlloc;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)p_findEntryForFont:(CTFontRef)arg1 outHeightInfo:(SCD_Struct_TS109*)arg2 collision:(BOOL*)arg3 ;
-(void)p_addEntryForFont:(CTFontRef)arg1 heightInfo:(const SCD_Struct_TS109*)arg2 ;
-(SCD_Struct_TS109)fontHeightInfoForFont:(CTFontRef)arg1 ;
@end

