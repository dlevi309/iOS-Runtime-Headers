/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUVMRegion : NSObject {

	VMURange range;
	unsigned prot;
	unsigned maxProt;
	NSString* type;
	NSString* path;
	BOOL summarized;
	unsigned char external_pager;
	unsigned char share_mode;
	int purgeable;
	unsigned long long virtual_pages;
	unsigned long long pages_resident;
	unsigned long long pages_shared_now_private;
	unsigned long long pages_swapped_out;
	unsigned long long pages_dirtied;
	unsigned long long ref_count;
	unsigned user_tag;
	unsigned long long object_id;
	unsigned long long offset;
	unsigned nesting_depth;
	unsigned is_submap : 1;
	unsigned is_macho_region : 1;
	unsigned is_unused_data_region : 1;
	unsigned is_unused_data_page_shared_with_active_content : 1;
	unsigned is_wired : 1;
	unsigned reserved_flags : 27;
	unsigned long long mallocBlockCount;
	unsigned mallocTypeFlag;
	unsigned zone_index;
	unsigned coalesced_region_count;
	unsigned long long resident_size;
	unsigned long long shared_now_private_size;
	unsigned long long swapped_out_size;
	unsigned long long dirty_size;
	unsigned long long purgable_vol_size;
	unsigned long long purgable_non_vol_size;
	unsigned long long purgable_empty_size;
	unsigned long long reusable_size;

}
+(void)initialize;
+(id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 memorySizeDivisor:(unsigned)arg3 hasFractionalPageSizes:(BOOL)arg4 ;
+(id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)type;
-(id)path;
-(unsigned long long)address;
-(VMURange)range;
-(unsigned)protection;
-(BOOL)isSubmap;
-(id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 ;
-(id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 memorySizeDivisor:(unsigned)arg3 hasFractionalPageSizes:(BOOL)arg4 ;
-(BOOL)hasSameInfoAsRegion:(id)arg1 ;
-(void)addInfoFromRegion:(id)arg1 ;
-(id)breakAtLength:(unsigned long long)arg1 ;
-(id)initWithVMRegionData:(VMUVMRegionData*)arg1 encodedVersion:(long long)arg2 simpleSerializer:(id)arg3 ;
-(void)setVMRegionDataExtra:(VMUVMRegionDataExtra*)arg1 ;
-(void)getVMRegionData:(VMUVMRegionData*)arg1 withSimpleSerializer:(id)arg2 ;
-(void)getVMRegionDataExtra:(VMUVMRegionDataExtra*)arg1 ;
-(unsigned)maxProtection;
-(BOOL)isWired;
@end

