/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSURL, PLJournal;

@interface PLJournalFile : NSObject {

	NSURL* _url;
	PLJournal* _journal;

}

@property (assign,nonatomic,__weak) PLJournal * journal;              //@synthesize journal=_journal - In the implementation block
@property (nonatomic,readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
+(BOOL)fileExistsAtURL:(id)arg1 ;
+(BOOL)copyURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)moveURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)createEmptyURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)removeURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)writeData:(id)arg1 toURL:(id)arg2 atomically:(BOOL)arg3 error:(id*)arg4 ;
-(PLJournal *)journal;
-(void)setJournal:(PLJournal *)arg1 ;
-(NSURL *)url;
-(BOOL)fileExists;
-(id)initWithURL:(id)arg1 journal:(id)arg2 ;
-(BOOL)openForReadingUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateEntriesUsingBlock:(/*^block*/id)arg1 decodePayload:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)openForWritingUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)appendEntries:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeFileWithError:(id*)arg1 ;
-(BOOL)createEmptyFileWithError:(id*)arg1 ;
-(BOOL)moveToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)fileSize:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)allocatedFileSize:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)_fileSize:(unsigned long long*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)copyToURL:(id)arg1 error:(id*)arg2 ;
@end

