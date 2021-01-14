/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libMemoryResourceException.dylib/FPProcess.h>

@class NSMutableDictionary;

@interface FPKernelProcess : FPProcess {

	NSMutableDictionary* _auxData;

}
+(id)_kextTagsWithKextInfo:(id)arg1 ;
+(CSTypeRef)_createSymbolicator;
+(id)kextTags;
+(id)_nameForWiredInfo:(mach_memory_info*)arg1 withKexts:(id)arg2 andSymbolicator:(CSTypeRef)arg3 zoneNames:(mach_zone_name*)arg4 zoneCount:(unsigned)arg5 ;
+(void)_setNameForRegion:(id)arg1 withWiredInfo:(mach_memory_info*)arg2 andKexts:(id)arg3 andSymbolicator:(CSTypeRef)arg4 zoneNames:(mach_zone_name*)arg5 zoneCount:(unsigned)arg6 ;
-(BOOL)_isAlive;
-(void)gatherData;
-(id)initWithBsdInfo:(proc_bsdinfo*)arg1 ;
-(BOOL)_populateTask;
-(void)_addWiredData:(mach_memory_info*)arg1 withCount:(unsigned)arg2 zoneNames:(mach_zone_name*)arg3 zoneCount:(unsigned)arg4 toArray:(id)arg5 ;
-(unsigned long long)_gatherPageSize;
-(id)auxData;
@end

