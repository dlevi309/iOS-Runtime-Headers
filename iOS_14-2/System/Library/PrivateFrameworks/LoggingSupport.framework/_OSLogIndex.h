/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSMutableArray, _OSLogCollectionReference, NSString, _OSLogEventStoreMetadata;

@interface _OSLogIndex : NSObject {

	NSMutableArray* _fileq;
	_OSLogCollectionReference* _lcr;
	NSString* _file;
	SCD_Struct_OS26* _metadata;
	BOOL _metadataValid;
	_OSLogEventStoreMetadata* _metadata2;
	os_timesync_db_sRef _tsdb;

}

@property (nonatomic,readonly) os_timesync_db_sRef timesync;                         //@synthesize tsdb=_tsdb - In the implementation block
@property (nonatomic,readonly) unsigned long long persistStartWalltime; 
@property (nonatomic,readonly) unsigned long long specialStartWalltime; 
@property (nonatomic,readonly) unsigned long long endWalltime; 
-(void)_enumerateEntriesInRange:(os_timesync_range_s*)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)init;
-(BOOL)_buildSingleFileIndex:(id*)arg1 ;
-(void)enumerateEntriesInRange:(os_timesync_range_s*)arg1 options:(unsigned)arg2 usingCatalogFilter:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)insertChunkStore:(id)arg1 ;
-(void)enumerateEntriesFromLastBootWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_addFileToIndex:(const char*)arg1 error:(id*)arg2 ;
-(unsigned long long)specialStartWalltime;
-(id)initWithCollection:(id)arg1 timesync:(os_timesync_db_sRef)arg2 metadata:(id)arg3 ;
-(BOOL)addReferenceToIndex:(id)arg1 error:(id*)arg2 ;
-(void)enumerateEntriesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(unsigned long long)persistStartWalltime;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_buildFileIndex;
-(void)_foreachIndexFile:(/*^block*/id)arg1 ;
-(id)initWithCollection:(id)arg1 buildLocalIndex:(BOOL)arg2 ;
-(BOOL)_openTimesyncDatabase;
-(BOOL)_readArchiveMetadata:(id*)arg1 ;
-(void)insertIndexFile:(id)arg1 ;
-(os_timesync_db_sRef)timesync;
-(void)enumerateFilesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)endWalltime;
-(void)dealloc;
@end

