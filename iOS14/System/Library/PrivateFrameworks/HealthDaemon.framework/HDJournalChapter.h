/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class NSString;


@protocol HDJournalChapter <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * journalPath; 
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) long long size; 
@property (nonatomic,readonly) double modificationTime; 
@required
-(BOOL)isOpen;
-(void)close;
-(long long)size;
-(BOOL)openForReadingWithError:(id*)arg1;
-(NSString *)name;
-(double)modificationTime;
-(NSString *)journalPath;
-(unsigned)readVersionWithError:(id*)arg1;
-(BOOL)removeWithError:(id*)arg1;
-(BOOL)createAndOpenForWritingWithError:(id*)arg1;
-(BOOL)canAppendData:(id)arg1;
-(BOOL)appendData:(id)arg1 entryClass:(Class)arg2 error:(id*)arg3;
-(BOOL)flushDataToDisk:(id*)arg1;
-(unsigned)enumerateEntriesWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4;

@end

