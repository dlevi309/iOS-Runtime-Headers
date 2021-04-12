/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


@class NSMutableSet, NSString, NSSet;

@interface FPMemoryCategory : NSObject {

	BOOL _isSummary;
	NSMutableSet* _memoryObjects;
	unsigned char _segment;
	unsigned long long _totalDirtySize;
	unsigned long long _totalSwappedSize;
	unsigned long long _totalCleanSize;
	unsigned long long _totalReclaimableSize;
	unsigned long long _totalWiredSize;
	NSMutableSet* _memoryRegions;

}

@property (nonatomic,retain) NSMutableSet * memoryRegions;                         //@synthesize memoryRegions=_memoryRegions - In the implementation block
@property (assign,nonatomic) unsigned long long totalDirtySize;                    //@synthesize totalDirtySize=_totalDirtySize - In the implementation block
@property (assign,nonatomic) unsigned long long totalSwappedSize;                  //@synthesize totalSwappedSize=_totalSwappedSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalCleanSize;                    //@synthesize totalCleanSize=_totalCleanSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalReclaimableSize;              //@synthesize totalReclaimableSize=_totalReclaimableSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalWiredSize;                    //@synthesize totalWiredSize=_totalWiredSize - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * detailedName; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSSet * memoryObjects;                              //@synthesize memoryObjects=_memoryObjects - In the implementation block
@property (nonatomic,readonly) int totalRegions; 
@property (nonatomic,readonly) unsigned char segment;                              //@synthesize segment=_segment - In the implementation block
-(NSString *)name;
-(NSString *)fullName;
-(unsigned char)segment;
-(id)initWithSegment:(unsigned char)arg1 ;
-(void)setMemoryRegions:(NSMutableSet *)arg1 ;
-(NSMutableSet *)memoryRegions;
-(id)initWithSegment:(unsigned char)arg1 summary:(BOOL)arg2 ;
-(NSSet *)memoryObjects;
-(NSString *)detailedName;
-(unsigned long long)totalDirtySize;
-(unsigned long long)totalSwappedSize;
-(unsigned long long)totalCleanSize;
-(unsigned long long)totalReclaimableSize;
-(unsigned long long)totalWiredSize;
-(void)addMemoryObject:(id)arg1 ;
-(int)totalRegions;
-(void)setTotalDirtySize:(unsigned long long)arg1 ;
-(void)setTotalSwappedSize:(unsigned long long)arg1 ;
-(void)setTotalCleanSize:(unsigned long long)arg1 ;
-(void)setTotalReclaimableSize:(unsigned long long)arg1 ;
-(void)setTotalWiredSize:(unsigned long long)arg1 ;
@end

