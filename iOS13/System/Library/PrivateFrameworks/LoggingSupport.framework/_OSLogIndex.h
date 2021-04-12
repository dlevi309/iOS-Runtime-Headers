/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(os_timesync_db_sRef)timesync;
-(id)initWithCollection:(id)arg1 buildLocalIndex:(BOOL)arg2 ;
-(id)initWithCollection:(id)arg1 timesync:(os_timesync_db_sRef)arg2 metadata:(id)arg3 ;
-(BOOL)_readArchiveMetadata:(id*)arg1 ;
-(BOOL)_openTimesyncDatabase;
-(BOOL)addReferenceToIndex:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addFileToIndex:(const char*)arg1 error:(id*)arg2 ;
-(void)_foreachIndexFile:(/*^block*/id)arg1 ;
-(void)insertChunkStore:(id)arg1 ;
-(void)insertIndexFile:(id)arg1 ;
-(BOOL)_buildFileIndex;
-(BOOL)_buildSingleFileIndex:(id*)arg1 ;
-(unsigned long long)persistStartWalltime;
-(unsigned long long)specialStartWalltime;
-(unsigned long long)endWalltime;
-(void)enumerateEntriesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateEntriesFromLastBootWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateEntriesInRange:(os_timesync_range_s*)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEntriesInRange:(os_timesync_range_s*)arg1 options:(unsigned)arg2 usingCatalogFilter:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateFilesUsingBlock:(/*^block*/id)arg1 ;
@end

