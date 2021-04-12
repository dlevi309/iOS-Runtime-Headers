/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSString, NSData, NSError;

@interface _HKZipArchiveExtractor : NSObject {

	NSString* _pathname;
	NSData* _archiveData;
	archiveRef _archive;
	archive_entryRef _entry;
	BOOL _dataRead;
	NSData* _data;
	NSError* _lastError;
	BOOL _hasCalculatedNumberOfEntries;
	unsigned long long _numberOfEntries;

}
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)lastError;
-(void)_clearState;
-(unsigned long long)numberOfEntries;
-(void)_logError:(id)arg1 ;
-(id)getDataForCurrentEntryWithMaxSizeBytes:(unsigned long long)arg1 ;
-(id)_getDataForCurrentEntryWithSize:(unsigned long long)arg1 ;
-(id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(unsigned long long)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_enumerateLinesInCurrentEntryWithBlock:(/*^block*/id)arg1 ;
-(id)initWithPathname:(id)arg1 ;
-(id)getDataForCurrentEntry;
-(BOOL)enumerateLinesInCurrentEntryWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
@end

