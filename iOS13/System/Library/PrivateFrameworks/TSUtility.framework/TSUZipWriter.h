/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol OS_dispatch_data, OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, TSUZipWriterEntry, NSObject, NSError;

@interface TSUZipWriter : NSObject {

	NSMutableArray* _entries;
	NSMutableSet* _entryNames;
	TSUZipWriterEntry* _currentEntry;
	BOOL _calculateSize;
	BOOL _calculateCRC;
	unsigned short _entryTime;
	unsigned short _entryDate;
	long long _currentOffset;
	NSObject*<OS_dispatch_data> _localFileHeaderData;
	NSMutableArray* _entryDatas;
	unsigned long long _entryDataSize;
	NSObject*<OS_dispatch_queue> _writeQueue;
	long long _writtenOffset;
	NSError* _error;

}

@property (nonatomic,readonly) id<TSURandomWriteChannel> writeChannel; 
@property (nonatomic,readonly) unsigned long long archiveLength; 
-(id)init;
-(void)writeData:(id)arg1 ;
-(void)addData:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(void)finishEntry;
-(unsigned long long)archiveLength;
-(void)writeEntryWithName:(id)arg1 fromReadChannel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)closeWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<TSURandomWriteChannel>)writeChannel;
-(void)initEntryTime;
-(void)beginEntryWithName:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned)arg3 ;
-(void)beginEntryWithNameImpl:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned)arg3 ;
-(id)localFileHeaderDataForEntry:(id)arg1 ;
-(void)addDataImpl:(id)arg1 ;
-(void)flushEntryData;
-(void)writeData:(id)arg1 offset:(long long)arg2 ;
-(void)handleWriteError:(id)arg1 ;
-(void)writeEntryWithName:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned)arg3 fromReadChannel:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)writeCentralDirectory;
-(id)centralFileHeaderDataForEntry:(id)arg1 ;
-(id)endOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 ;
-(void)beginEntryWithName:(id)arg1 ;
@end

