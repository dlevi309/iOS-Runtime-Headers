/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol SFUZipArchiveDataRepresentation, SFUZipArchiveDelegate;
#import <TSUtility/TSUtility-Structs.h>
@class NSMutableDictionary, SFUDataRepresentation, NSData, NSString, SFUCryptoKey;

@interface SFUZipArchive : NSObject {

	NSMutableDictionary* mEntries;
	SFUDataRepresentation*<SFUZipArchiveDataRepresentation> mDataRepresentation;
	NSData* mPassphraseVerifier;
	NSString* mPassphraseHint;
	SFUCryptoKey* mCryptoKey;
	NSData* mEncryptedDocumentUuid;
	id<SFUZipArchiveDelegate> _delegate;

}

@property (assign,nonatomic) id<SFUZipArchiveDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isZipArchiveAtPath:(id)arg1 ;
-(void)dealloc;
-(id<SFUZipArchiveDelegate>)delegate;
-(void)setDelegate:(id<SFUZipArchiveDelegate>)arg1 ;
-(BOOL)isEncrypted;
-(id)passphraseHint;
-(id)entryWithName:(id)arg1 ;
-(void)readEntries;
-(void)collapseCommonRootDirectory;
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
@end

