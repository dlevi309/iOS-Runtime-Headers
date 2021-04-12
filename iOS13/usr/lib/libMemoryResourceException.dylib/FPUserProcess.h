/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libMemoryResourceException.dylib/FPProcess.h>

@class NSMutableArray, NSMutableDictionary, FPMemoryRegion;

@interface FPUserProcess : FPProcess {

	unsigned _task;
	unsigned long long _sharedRegionBase;
	unsigned long long _sharedRegionSize;
	unsigned _sharedRegionAlignmentSize;
	unsigned long long _phys_footprint;
	unsigned long long _phys_footprint_peak;
	unsigned long long _ledgers[1];
	NSMutableArray* _images;
	NSMutableDictionary* _ownedVmObjects;
	unsigned long long _cachedDispositionAddress;
	int _cachedDisposition;
	FPMemoryRegion* _pendingUnusedSharedRegion;

}
-(BOOL)_isAlive;
-(void)gatherData;
-(id)initWithBsdInfo:(proc_bsdinfo*)arg1 ;
-(void)_setIdleExitStatusFromDirtyFlags:(unsigned)arg1 ;
-(BOOL)_populateTask;
-(void)_gatherIdleExitStatus;
-(id)_gatherOwnedVmObjects;
-(id)auxData;
-(BOOL)_setSharedRegionFromPlatform:(long long)arg1 ;
-(void)_gatherPhysFootprint;
-(void)_gatherLedgers;
-(void)_gatherImageData;
-(void)_gatherMemoryData;
-(void)_addErrnoWarningWithDescription:(id)arg1 ;
-(BOOL)_enumerateDispositionChunksWithStartAddr:(unsigned long long)arg1 pagesToQuery:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)_populateMemoryRegionWithPageQueries:(id)arg1 regionInfo:(vm_region_submap_info_64*)arg2 ;
-(unsigned long long)_lastNonSharedCacheRegion;
-(void)_processMachVMError:(int)arg1 expectingErrorOnExit:(int)arg2 ;
-(BOOL)_addRegionsToArray:(id)arg1 forRegionInSharedRegionStartingAt:(unsigned long long)arg2 withSize:(unsigned long long)arg3 withRegionInfo:(vm_region_submap_info_64*)arg4 imageEnumerator:(id)arg5 ;
-(void)_addSubrangesForRegion:(id)arg1 purgeState:(int)arg2 ;
-(void)enumerateRegions:(/*^block*/id)arg1 ;
@end

