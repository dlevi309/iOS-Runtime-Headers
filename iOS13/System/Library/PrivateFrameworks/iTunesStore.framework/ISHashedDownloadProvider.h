/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, ISHashError, NSString;

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying> {

	int _fileDescriptor;
	NSArray* _hashes;
	ISHashError* _lastHashError;
	NSString* _localFilePath;
	CC_MD5state_st _md5Context;
	long long _numberOfBytesToHash;
	BOOL _shouldResumeFromLocalBytes;
	long long _totalBytesWritten;
	long long _validatedBytes;

}

@property (copy) ISHashError * lastHashError;                    //@synthesize lastHashError=_lastHashError - In the implementation block
@property (assign) long long streamedBytes;                      //@synthesize totalBytesWritten=_totalBytesWritten - In the implementation block
@property (assign) long long validatedBytes;                     //@synthesize validatedBytes=_validatedBytes - In the implementation block
@property (retain) NSString * localFilePath;                     //@synthesize localFilePath=_localFilePath - In the implementation block
@property (assign) BOOL shouldResumeFromLocalBytes;              //@synthesize shouldResumeFromLocalBytes=_shouldResumeFromLocalBytes - In the implementation block
@property (retain) NSArray * hashes;                             //@synthesize hashes=_hashes - In the implementation block
@property (assign) long long numberOfBytesToHash;                //@synthesize numberOfBytesToHash=_numberOfBytesToHash - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)closeStream;
-(void)setup;
-(NSArray *)hashes;
-(void)setHashes:(NSArray *)arg1 ;
-(NSString *)localFilePath;
-(void)setLocalFilePath:(NSString *)arg1 ;
-(long long)numberOfBytesToHash;
-(void)setNumberOfBytesToHash:(long long)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)isStream;
-(long long)streamedBytes;
-(void)resetStream;
-(BOOL)canStreamContentLength:(long long)arg1 error:(id*)arg2 ;
-(void)_closeFile;
-(BOOL)_writeDataWithoutHashing:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)_writeDataWithHashing:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)_openFile;
-(BOOL)_truncateToSize:(long long)arg1 ;
-(BOOL)shouldResumeFromLocalBytes;
-(long long)validatedBytes;
-(long long)_verifiedBytesByInitializingHashForFileSize:(long long)arg1 ;
-(void)setValidatedBytes:(long long)arg1 ;
-(void)setLastHashError:(ISHashError *)arg1 ;
-(void)setStreamedBytes:(long long)arg1 ;
-(BOOL)_checkHashForByteCount:(long long)arg1 ;
-(ISHashError *)lastHashError;
-(void)setShouldResumeFromLocalBytes:(BOOL)arg1 ;
@end

