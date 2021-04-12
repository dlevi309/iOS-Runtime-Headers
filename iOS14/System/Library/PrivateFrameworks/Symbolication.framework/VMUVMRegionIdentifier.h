/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@class VMUTaskThreadStates, NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject {

	unsigned _task;
	int _pid;
	VMUTaskThreadStates* _threadStates;
	NSMutableArray* _regions;
	NSMapTable* _mallocZoneStatisticsMap;
	BOOL _hasFractionalPageSizes;

}
+(id)descriptionForRange:(VMURange)arg1 inSortedRegions:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithTask:(unsigned)arg1 ;
-(id)init;
-(id)regions;
-(int)_recordRegionsAroundAddress:(unsigned long long)arg1 regionDescriptionOptions:(unsigned long long)arg2 ;
-(id)initWithTask:(unsigned)arg1 pid:(int)arg2 options:(unsigned long long)arg3 ;
-(id)initWithGraph:(id)arg1 options:(unsigned long long)arg2 ;
-(id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2 maximumLength:(unsigned long long)arg3 memorySizeDivisor:(unsigned)arg4 ;
-(id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned)arg2 ;
-(id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned)arg2 ;
-(id)nonSubmapRegionContainingAddress:(unsigned long long)arg1 ;
-(BOOL)hasFractionalPageSizes;
-(id)descriptionForRange:(VMURange)arg1 ;
-(id)descriptionForRange:(VMURange)arg1 options:(unsigned long long)arg2 ;
-(id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 ;
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(id)taskThreadStates;
@end

