/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <libobjc.A.dylib/SFUSimpleOutputStream.h>

@protocol SFUOutputStream;
@class SFUMoveableFileOutputStream, SFUCryptoKey, NSData, NSMutableArray, SFUZipOutputEntry, SFUZipFreeSpaceEntry, NSString;

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {

	SFUMoveableFileOutputStream* mOutputStream;
	SFUCryptoKey* mCryptoKey;
	NSData* mPassphraseHint;
	NSData* mEncryptedDocumentUuid;
	NSMutableArray* mEntries;
	SFUZipOutputEntry* mCurrentEntry;
	SFUZipOutputEntry* mLastEntryInFile;
	id<SFUOutputStream> mEntryOutputStream;
	char* mBuffer;
	NSMutableArray* mFreeList;
	SFUZipFreeSpaceEntry* mCurrentFreeSpace;
	unsigned long long mFreeBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)approximateBytesForEntryHeaderWithName:(id)arg1 ;
-(void)flush;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)moveToPath:(id)arg1 ;
-(void)reset;
-(void)dealloc;
-(void)finishEntry;
-(void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1 ;
-(id)entryNames;
-(void)removeEntryWithName:(id)arg1 ;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3 ;
-(id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3 ;
-(void)beginEntryWithName:(id)arg1 isCompressed:(BOOL)arg2 uncompressedSize:(unsigned long long)arg3 ;
-(unsigned long long)writeLocalFileHeaderForEntry:(id)arg1 ;
-(void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(BOOL)arg2 ;
-(void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(BOOL)arg2 ;
-(void)writeEndOfCentralDirectoryWithOffset:(long long)arg1 ;
-(id)beginUncompressedUnknownSizeEntryWithName:(id)arg1 ;
-(void)setCrc32ForCurrentEntry:(unsigned)arg1 ;
-(BOOL)canRemoveEntryWithName:(id)arg1 ;
-(void)setEncryptedDocumentUuid:(id)arg1 ;
-(id)entriesAtPath:(id)arg1 ;
-(unsigned long long)freeBytes;
-(unsigned)crc32ForEntry:(id)arg1 ;
-(void)coalesceAndTruncateFreeSpace;
-(void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 ;
@end

