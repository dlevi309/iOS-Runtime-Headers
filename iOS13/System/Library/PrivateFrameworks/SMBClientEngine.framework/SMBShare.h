/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
*/


#import <SMBClientEngine/SMBClientEngine-Structs.h>
@class NSString;

@interface SMBShare : NSObject {

	opaque_pthread_mutex_t statfs_lock;
	unsigned _tree_id;
	unsigned _share_type;
	unsigned _share_capabilities;
	unsigned _share_flags;
	unsigned _share_max_access;
	unsigned _sectors_per_alloc_unit;
	unsigned _bytes_per_sector;
	unsigned _fs_block_size;
	unsigned _file_system_attrs;
	unsigned _max_component_name_len;
	unsigned _fstype;
	unsigned _isEncrypted;
	NSString* _sharename;
	unsigned long long _total_alloc_units;
	unsigned long long _avail_alloc_units;
	unsigned long long _fs_iosize;
	unsigned long long _fs_blocks;
	unsigned long long _fs_blocks_free;
	unsigned long long _fs_blocks_avail;
	unsigned long long _fs_files;
	unsigned long long _fs_files_free;
	NSString* _file_system_name;

}

@property (assign) unsigned tree_id;                                  //@synthesize tree_id=_tree_id - In the implementation block
@property (assign) unsigned share_type;                               //@synthesize share_type=_share_type - In the implementation block
@property (assign) unsigned share_capabilities;                       //@synthesize share_capabilities=_share_capabilities - In the implementation block
@property (assign) unsigned share_flags;                              //@synthesize share_flags=_share_flags - In the implementation block
@property (assign) unsigned share_max_access;                         //@synthesize share_max_access=_share_max_access - In the implementation block
@property (retain) NSString * sharename;                              //@synthesize sharename=_sharename - In the implementation block
@property (assign) unsigned long long total_alloc_units;              //@synthesize total_alloc_units=_total_alloc_units - In the implementation block
@property (assign) unsigned long long avail_alloc_units;              //@synthesize avail_alloc_units=_avail_alloc_units - In the implementation block
@property (assign) unsigned sectors_per_alloc_unit;                   //@synthesize sectors_per_alloc_unit=_sectors_per_alloc_unit - In the implementation block
@property (assign) unsigned bytes_per_sector;                         //@synthesize bytes_per_sector=_bytes_per_sector - In the implementation block
@property (assign) unsigned fs_block_size;                            //@synthesize fs_block_size=_fs_block_size - In the implementation block
@property (assign) unsigned long long fs_iosize;                      //@synthesize fs_iosize=_fs_iosize - In the implementation block
@property (assign) unsigned long long fs_blocks;                      //@synthesize fs_blocks=_fs_blocks - In the implementation block
@property (assign) unsigned long long fs_blocks_free;                 //@synthesize fs_blocks_free=_fs_blocks_free - In the implementation block
@property (assign) unsigned long long fs_blocks_avail;                //@synthesize fs_blocks_avail=_fs_blocks_avail - In the implementation block
@property (assign) unsigned long long fs_files;                       //@synthesize fs_files=_fs_files - In the implementation block
@property (assign) unsigned long long fs_files_free;                  //@synthesize fs_files_free=_fs_files_free - In the implementation block
@property (assign) unsigned file_system_attrs;                        //@synthesize file_system_attrs=_file_system_attrs - In the implementation block
@property (assign) unsigned max_component_name_len;                   //@synthesize max_component_name_len=_max_component_name_len - In the implementation block
@property (retain) NSString * file_system_name;                       //@synthesize file_system_name=_file_system_name - In the implementation block
@property (assign) unsigned fstype;                                   //@synthesize fstype=_fstype - In the implementation block
@property (assign) unsigned isEncrypted;                              //@synthesize isEncrypted=_isEncrypted - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned)isEncrypted;
-(void)setIsEncrypted:(unsigned)arg1 ;
-(unsigned)fstype;
-(NSString *)file_system_name;
-(unsigned)file_system_attrs;
-(unsigned)max_component_name_len;
-(void)statfs_lock;
-(unsigned)fs_block_size;
-(unsigned long long)fs_iosize;
-(unsigned long long)fs_blocks;
-(unsigned long long)fs_blocks_free;
-(unsigned long long)fs_blocks_avail;
-(unsigned long long)fs_files;
-(unsigned long long)fs_files_free;
-(void)statfs_unlock;
-(void)setFstype:(unsigned)arg1 ;
-(void)setFile_system_attrs:(unsigned)arg1 ;
-(void)setMax_component_name_len:(unsigned)arg1 ;
-(void)setFile_system_name:(NSString *)arg1 ;
-(NSString *)sharename;
-(void)setTotal_alloc_units:(unsigned long long)arg1 ;
-(void)setAvail_alloc_units:(unsigned long long)arg1 ;
-(void)setSectors_per_alloc_unit:(unsigned)arg1 ;
-(void)setBytes_per_sector:(unsigned)arg1 ;
-(unsigned long long)total_alloc_units;
-(unsigned long long)avail_alloc_units;
-(unsigned)bytes_per_sector;
-(unsigned)sectors_per_alloc_unit;
-(void)setFs_block_size:(unsigned)arg1 ;
-(void)setFs_blocks:(unsigned long long)arg1 ;
-(void)setFs_blocks_free:(unsigned long long)arg1 ;
-(void)setFs_blocks_avail:(unsigned long long)arg1 ;
-(void)setFs_files:(unsigned long long)arg1 ;
-(void)setFs_files_free:(unsigned long long)arg1 ;
-(void)setFs_iosize:(unsigned long long)arg1 ;
-(void)setSharename:(NSString *)arg1 ;
-(void)setTree_id:(unsigned)arg1 ;
-(void)setShare_type:(unsigned)arg1 ;
-(void)setShare_flags:(unsigned)arg1 ;
-(unsigned)share_flags;
-(void)setShare_capabilities:(unsigned)arg1 ;
-(void)setShare_max_access:(unsigned)arg1 ;
-(unsigned)share_type;
-(unsigned)share_capabilities;
-(unsigned)share_max_access;
-(unsigned)tree_id;
@end
