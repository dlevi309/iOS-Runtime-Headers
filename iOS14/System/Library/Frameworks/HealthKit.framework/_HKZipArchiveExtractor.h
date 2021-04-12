/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSString, NSData, NSFileHandle, NSError;

@interface _HKZipArchiveExtractor : NSObject {

	NSString* _pathname;
	NSData* _archiveData;
	NSFileHandle* _fileHandle;
	archiveRef _archive;
	archive_entryRef _entry;
	BOOL _dataRead;
	NSData* _data;
	NSError* _lastError;
	BOOL _hasCalculatedNumberOfEntries;
	unsigned long long _numberOfEntries;

}
-(id)lastError;
-(id)initWithURL:(id)arg1 ;
-(void)_clearState;
-(id)initWithData:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_logError:(id)arg1 ;
-(id)getDataForCurrentEntryWithMaxSizeBytes:(unsigned long long)arg1 ;
-(id)_getDataForCurrentEntryWithSize:(unsigned long long)arg1 ;
-(id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(unsigned long long)arg1 ;
-(BOOL)_enumerateLinesInCurrentEntryWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfEntries;
-(id)initWithPathname:(id)arg1 ;
-(id)initWithFileHandle:(id)arg1 pathname:(id)arg2 ;
-(id)getDataForCurrentEntry;
-(BOOL)enumerateLinesInCurrentEntryWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
@end

