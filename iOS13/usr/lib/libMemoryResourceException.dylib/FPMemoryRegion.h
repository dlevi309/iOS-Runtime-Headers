/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@class FPMemoryObject, NSString, FPRangeList;

@interface FPMemoryRegion : NSObject {

	unsigned _wired : 1;
	unsigned _inSharedCache : 1;
	unsigned _unusedSharedCacheRegion : 1;
	unsigned _ownedExclusivelyByParentProcess : 1;
	unsigned char _segment;
	unsigned char _share_mode;
	unsigned _user_tag;
	FPMemoryObject* _memoryObject;
	NSString* _name;
	NSString* _detailedName;
	unsigned long long _offset;
	unsigned long long _start;
	unsigned long long _size;
	unsigned long long _dirtySize;
	unsigned long long _reclaimableSize;
	unsigned long long _swappedSize;
	unsigned long long _cleanNonSpecSize;
	unsigned long long _object_id;
	FPRangeList* _subrangeList;

}

@property (nonatomic,retain) FPRangeList * subrangeList;                        //@synthesize subrangeList=_subrangeList - In the implementation block
@property (assign,nonatomic) FPMemoryObject * memoryObject;                     //@synthesize memoryObject=_memoryObject - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * detailedName;                             //@synthesize detailedName=_detailedName - In the implementation block
@property (nonatomic,readonly) NSString * fullName; 
@property (assign,nonatomic) unsigned long long offset;                         //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long start;                          //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) unsigned long long size;                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long end; 
@property (assign,nonatomic) unsigned char segment;                             //@synthesize segment=_segment - In the implementation block
@property (assign,nonatomic) unsigned long long dirtySize;                      //@synthesize dirtySize=_dirtySize - In the implementation block
@property (assign,nonatomic) unsigned long long reclaimableSize;                //@synthesize reclaimableSize=_reclaimableSize - In the implementation block
@property (assign,nonatomic) unsigned long long swappedSize;                    //@synthesize swappedSize=_swappedSize - In the implementation block
@property (assign,nonatomic) unsigned long long cleanNonSpecSize;               //@synthesize cleanNonSpecSize=_cleanNonSpecSize - In the implementation block
@property (nonatomic,readonly) unsigned long long wiredSize; 
@property (assign,nonatomic) BOOL wired; 
@property (assign,nonatomic) unsigned user_tag;                                 //@synthesize user_tag=_user_tag - In the implementation block
@property (assign,nonatomic) unsigned long long object_id;                      //@synthesize object_id=_object_id - In the implementation block
@property (assign,nonatomic) unsigned char share_mode;                          //@synthesize share_mode=_share_mode - In the implementation block
@property (assign,nonatomic) BOOL inSharedCache; 
@property (assign,nonatomic) BOOL unusedSharedCacheRegion; 
@property (getter=isFake,nonatomic,readonly) BOOL fake; 
@property (nonatomic,readonly) BOOL eligibleForProcessView; 
@property (assign,nonatomic) BOOL ownedExclusivelyByParentProcess; 
+(id)categoryNameForTag:(unsigned)arg1 ;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)size;
-(unsigned long long)start;
-(unsigned long long)end;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(NSString *)fullName;
-(void)setSegment:(unsigned char)arg1 ;
-(unsigned char)segment;
-(void)setStart:(unsigned long long)arg1 ;
-(void)setEnd:(unsigned long long)arg1 ;
-(unsigned long long)dirtySize;
-(unsigned char)share_mode;
-(unsigned)user_tag;
-(unsigned long long)object_id;
-(unsigned long long)wiredSize;
-(BOOL)isFake;
-(FPRangeList *)subrangeList;
-(unsigned long long)swappedSize;
-(unsigned long long)cleanNonSpecSize;
-(unsigned long long)reclaimableSize;
-(void)setDirtySize:(unsigned long long)arg1 ;
-(void)setReclaimableSize:(unsigned long long)arg1 ;
-(void)setDetailedName:(NSString *)arg1 ;
-(void)setObject_id:(unsigned long long)arg1 ;
-(void)setCleanNonSpecSize:(unsigned long long)arg1 ;
-(void)setWired:(BOOL)arg1 ;
-(void)setSwappedSize:(unsigned long long)arg1 ;
-(void)setUser_tag:(unsigned)arg1 ;
-(BOOL)unusedSharedCacheRegion;
-(void)setShare_mode:(unsigned char)arg1 ;
-(void)setInSharedCache:(BOOL)arg1 ;
-(void)setUnusedSharedCacheRegion:(BOOL)arg1 ;
-(BOOL)wired;
-(BOOL)ownedExclusivelyByParentProcess;
-(void)addSubrange:(NSRange)arg1 memoryTotal:(SCD_Struct_FP0*)arg2 pageSize:(unsigned long long)arg3 ;
-(void)setOwnedExclusivelyByParentProcess:(BOOL)arg1 ;
-(BOOL)eligibleForSubrangesUsingPageSize:(unsigned long long)arg1 ;
-(NSString *)detailedName;
-(BOOL)eligibleForProcessView;
-(void)freeSubrangeList;
-(BOOL)inSharedCache;
-(FPMemoryObject *)memoryObject;
-(void)setMemoryObject:(FPMemoryObject *)arg1 ;
-(void)setSubrangeList:(FPRangeList *)arg1 ;
@end

