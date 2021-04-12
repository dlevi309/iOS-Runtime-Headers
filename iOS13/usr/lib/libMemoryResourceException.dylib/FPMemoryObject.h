/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSMutableDictionary, FPRangeList, NSString;

@interface FPMemoryObject : NSObject <NSCopying> {

	unsigned long long _totalDirtySize;
	unsigned long long _totalCleanSize;
	unsigned long long _totalSwappedSize;
	unsigned long long _totalReclaimableSize;
	BOOL _accurateSizes;
	int _ownerPid;
	unsigned long long _totalWiredSize;
	NSMutableSet* _memoryRegions;
	NSMutableDictionary* _processMemoryRegions;
	FPRangeList* _rangeList;

}

@property (nonatomic,retain) NSMutableSet * memoryRegions;                            //@synthesize memoryRegions=_memoryRegions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * processMemoryRegions;              //@synthesize processMemoryRegions=_processMemoryRegions - In the implementation block
@property (nonatomic,retain) FPRangeList * rangeList;                                 //@synthesize rangeList=_rangeList - In the implementation block
@property (nonatomic,readonly) unsigned long long totalDirtySize;                     //@synthesize totalDirtySize=_totalDirtySize - In the implementation block
@property (nonatomic,readonly) unsigned long long totalCleanSize;                     //@synthesize totalCleanSize=_totalCleanSize - In the implementation block
@property (nonatomic,readonly) unsigned long long totalReclaimableSize;               //@synthesize totalReclaimableSize=_totalReclaimableSize - In the implementation block
@property (nonatomic,readonly) unsigned long long totalSwappedSize;                   //@synthesize totalSwappedSize=_totalSwappedSize - In the implementation block
@property (nonatomic,readonly) unsigned long long totalWiredSize;                     //@synthesize totalWiredSize=_totalWiredSize - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * detailedName; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) BOOL containsFakeRegion; 
@property (assign,nonatomic) int ownerPid;                                            //@synthesize ownerPid=_ownerPid - In the implementation block
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(NSString *)fullName;
-(void)addRegion:(id)arg1 pageSize:(unsigned long long)arg2 ;
-(void)setMemoryRegions:(NSMutableSet *)arg1 ;
-(NSMutableSet *)memoryRegions;
-(NSString *)detailedName;
-(unsigned long long)totalDirtySize;
-(unsigned long long)totalSwappedSize;
-(unsigned long long)totalCleanSize;
-(unsigned long long)totalReclaimableSize;
-(unsigned long long)totalWiredSize;
-(void)_addRegion:(id)arg1 pageSize:(unsigned long long)arg2 forProcess:(id)arg3 ;
-(void)finalizeUsingRegionDirtySize:(BOOL)arg1 ;
-(BOOL)containsFakeRegion;
-(id)_canonicalRegion;
-(int)ownerPid;
-(void)addRegion:(id)arg1 forProcess:(id)arg2 ;
-(id)viewForProcess:(id)arg1 ;
-(void)setOwnerPid:(int)arg1 ;
-(NSMutableDictionary *)processMemoryRegions;
-(void)setProcessMemoryRegions:(NSMutableDictionary *)arg1 ;
-(FPRangeList *)rangeList;
-(void)setRangeList:(FPRangeList *)arg1 ;
@end

