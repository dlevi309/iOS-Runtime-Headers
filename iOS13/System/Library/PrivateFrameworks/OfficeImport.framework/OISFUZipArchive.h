/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol SFUZipArchiveDataRepresentation;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, OISFUDataRepresentation, NSData, NSString, OISFUCryptoKey;

@interface OISFUZipArchive : NSObject {

	NSMutableDictionary* mEntries;
	OISFUDataRepresentation*<SFUZipArchiveDataRepresentation> mDataRepresentation;
	NSData* mPassphraseVerifier;
	NSString* mPassphraseHint;
	OISFUCryptoKey* mCryptoKey;
	NSData* mEncryptedDocumentUuid;

}
+(BOOL)isZipArchiveAtPath:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEncrypted;
-(id)passphraseHint;
-(id)entryWithName:(id)arg1 ;
-(void)readEntries;
-(void)setCryptoKey:(id)arg1 ;
-(id)allEntryNames;
-(id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ;
-(id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ;
-(id)entryWithName:(id)arg1 dataLength:(long long)arg2 ;
-(id)passphraseVerifier;
-(id)encryptedDocumentUuid;
-(BOOL)decompressAtPath:(id)arg1 ;
-(SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1 ;
-(id)readFilenameFromBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void)readExtraFieldFromBuffer:(const char*)arg1 size:(unsigned long long)arg2 entry:(id)arg3 ;
-(const char*)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2 ;
-(id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ignoreCase:(BOOL)arg3 ;
-(void)collapseCommonRootDirectoryIgnoreCase:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ignoreCase:(BOOL)arg3 ;
-(BOOL)decompressAtPath:(id)arg1 wasEmpty:(BOOL*)arg2 ;
-(id)commonRootDirectoryIgnoringCase:(BOOL)arg1 ;
@end

