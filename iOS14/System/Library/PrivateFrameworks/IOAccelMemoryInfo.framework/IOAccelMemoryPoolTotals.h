/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
*/


@class NSString;

@interface IOAccelMemoryPoolTotals : NSObject {

	NSString* device_name;
	NSString* pool;
	unsigned long long allocatedSize;
	unsigned long long residentSize;
	unsigned long long wiredSize;
	unsigned long long dirtySize;
	unsigned long long purgeableSize;
	unsigned long long nonpurgeableSize;
	unsigned long long orphanedSize;

}

@property (retain) NSString * device_name; 
@property (retain) NSString * pool; 
@property (assign) unsigned long long allocatedSize; 
@property (assign) unsigned long long residentSize; 
@property (assign) unsigned long long wiredSize; 
@property (assign) unsigned long long dirtySize; 
@property (assign) unsigned long long purgeableSize; 
@property (assign) unsigned long long nonpurgeableSize; 
@property (assign) unsigned long long orphanedSize; 
-(NSString *)pool;
-(unsigned long long)residentSize;
-(unsigned long long)dirtySize;
-(unsigned long long)allocatedSize;
-(unsigned long long)purgeableSize;
-(void)setPool:(NSString *)arg1 ;
-(void)dealloc;
-(unsigned long long)wiredSize;
-(NSString *)device_name;
-(void)setDevice_name:(NSString *)arg1 ;
-(void)setAllocatedSize:(unsigned long long)arg1 ;
-(void)setResidentSize:(unsigned long long)arg1 ;
-(void)setWiredSize:(unsigned long long)arg1 ;
-(void)setDirtySize:(unsigned long long)arg1 ;
-(void)setPurgeableSize:(unsigned long long)arg1 ;
-(unsigned long long)nonpurgeableSize;
-(void)setNonpurgeableSize:(unsigned long long)arg1 ;
-(unsigned long long)orphanedSize;
-(void)setOrphanedSize:(unsigned long long)arg1 ;
@end

