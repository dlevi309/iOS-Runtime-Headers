/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDJournalChapter.h>

@class NSString, NSURL, NSFileHandle;

@interface HDDatabaseLegacyJournalFile : NSObject <HDJournalChapter> {

	NSURL* _URL;
	NSFileHandle* _fileHandle;
	unsigned _version;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * journalPath; 
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) long long size; 
@property (nonatomic,readonly) double modificationTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_fileHandleForFileName:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
+(unsigned)_processJournalFile:(id)arg1 profile:(id)arg2 fileHandle:(id)arg3 version:(unsigned)arg4 error:(id*)arg5 handler:(/*^block*/id)arg6 ;
+(id)_loadJournalEntry:(id)arg1 ;
+(unsigned)_processJournalFile:(id)arg1 profile:(id)arg2 fileHandle:(id)arg3 version:(unsigned)arg4 mapping:(void*)arg5 length:(unsigned long long)arg6 error:(id*)arg7 handler:(/*^block*/id)arg8 ;
+(unsigned)_processOkemoJournalWithVersion:(unsigned)arg1 fileHandle:(id)arg2 mapping:(void*)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 error:(id*)arg7 handler:(/*^block*/id)arg8 ;
+(unsigned)_processMonarchJournalWithVersion:(unsigned)arg1 fileHandle:(id)arg2 mapping:(void*)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 error:(id*)arg7 handler:(/*^block*/id)arg8 ;
+(BOOL)_loadJournalFromMapping:(void*)arg1 size:(unsigned long long)arg2 headerLength:(unsigned long long)arg3 journalEntries:(id*)arg4 error:(id*)arg5 ;
+(BOOL)_loadJournalWithFileHandle:(id)arg1 journalEntries:(id*)arg2 error:(id*)arg3 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isOpen;
-(void)close;
-(long long)size;
-(BOOL)openForReadingWithError:(id*)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(double)modificationTime;
-(id)_fullPath;
-(void)dealloc;
-(NSString *)journalPath;
-(unsigned)readVersionWithError:(id*)arg1 ;
-(BOOL)removeWithError:(id*)arg1 ;
-(BOOL)createAndOpenForWritingWithError:(id*)arg1 ;
-(BOOL)canAppendData:(id)arg1 ;
-(BOOL)appendData:(id)arg1 entryClass:(Class)arg2 error:(id*)arg3 ;
-(BOOL)flushDataToDisk:(id*)arg1 ;
-(unsigned)enumerateEntriesWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
@end

