/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol OS_dispatch_queue, TSPFileCoordinatorDelegate;
#import <TSPersistence/TSPersistence-Structs.h>
@class NSObject, TSPDocumentProperties, TSUZipFileArchive, NSError, NSHashTable, SFUCryptoKey, NSString, NSData;

@interface TSPPackage : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	TSPDocumentProperties* _documentProperties;
	TSUZipFileArchive* _zipArchive;
	unsigned long long _additionalZipArchiveOptions;
	NSError* _lastReloadError;
	NSHashTable* _packageDatas;
	id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
	struct {
		unsigned isLazyLoadingDocumentProperties : 1;
		unsigned isLazyLoadingZip : 1;
	}  _flags;
	unsigned char _packageIdentifier;
	BOOL _isClosed;
	SFUCryptoKey* _decryptionKey;
	unsigned long long _fileFormatVersion;
	unsigned long long _documentReadVersion;

}

@property (nonatomic,readonly) long long packageType; 
@property (nonatomic,readonly) unsigned char packageIdentifier;                                            //@synthesize packageIdentifier=_packageIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) id<TSPFileCoordinatorDelegate> fileCoordinatorDelegate;              //@synthesize fileCoordinatorDelegate=_fileCoordinatorDelegate - In the implementation block
@property (nonatomic,readonly) TSPDocumentProperties * documentProperties; 
@property (nonatomic,readonly) SFUCryptoKey * decryptionKey;                                               //@synthesize decryptionKey=_decryptionKey - In the implementation block
@property (nonatomic,readonly) BOOL isClosed;                                                              //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) unsigned long long fileFormatVersion;                                       //@synthesize fileFormatVersion=_fileFormatVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long documentReadVersion;                                     //@synthesize documentReadVersion=_documentReadVersion - In the implementation block
@property (retain) TSUZipFileArchive * zipArchive; 
@property (readonly) NSError * lastReloadError; 
@property (readonly) TSUZipFileArchive * componentZipArchive; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
@property (nonatomic,readonly) NSString * passwordHint; 
@property (nonatomic,readonly) NSData * passwordVerifier; 
+(BOOL)isZeroLengthFileOrEmptyDirectory:(id)arg1 isDirectory:(BOOL*)arg2 ;
+(BOOL)isValidPackageAtURL:(id)arg1 ;
+(id)newPackageWithURL:(id)arg1 options:(unsigned long long)arg2 packageIdentifier:(unsigned char)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 error:(id*)arg6 ;
+(id)dataEntryPathForFilename:(id)arg1 ;
+(id)zipArchiveURLFromPackageURL:(id)arg1 ;
+(unsigned long long)zipArchiveOptions;
+(BOOL)hasZipArchive;
+(id)newLazyPackageWithURL:(id)arg1 packageIdentifier:(unsigned char)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4 ;
+(id)objectArchiveEntryPathForPackageLocator:(id)arg1 ;
-(id)init;
-(BOOL)isClosed;
-(NSString *)passwordHint;
-(unsigned char)packageIdentifier;
-(BOOL)containsData:(id)arg1 ;
-(SFUCryptoKey *)decryptionKey;
-(BOOL)isPasswordProtected;
-(void)enumerateDatasUsingBlock:(/*^block*/id)arg1 ;
-(TSPDocumentProperties *)documentProperties;
-(void)didCloseDocument;
-(NSData *)passwordVerifier;
-(unsigned long long)fileFormatVersion;
-(id)dataAtRelativePath:(id)arg1 allowDecryption:(BOOL)arg2 error:(id*)arg3 ;
-(void)didRetrieveDecryptionKey:(id)arg1 ;
-(long long)packageType;
-(BOOL)checkPassword:(id)arg1 ;
-(id)keyFromPassword:(id)arg1 ;
-(unsigned long long)documentReadVersion;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3 ;
-(void)removeAllDataReferences;
-(id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id*)arg4 ;
-(void)didReferenceData:(id)arg1 ;
-(id<TSPFileCoordinatorDelegate>)fileCoordinatorDelegate;
-(id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 ;
-(id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 error:(id*)arg3 ;
-(void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 canLink:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(TSUZipFileArchive *)zipArchive;
-(id)packageEntryInfoAtRelativePath:(id)arg1 error:(id*)arg2 ;
-(id)newRawDataReadChannelAtRelativePath:(id)arg1 ;
-(BOOL)hasDataAtRelativePath:(id)arg1 ;
-(id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 isLazyLoading:(BOOL)arg6 ;
-(TSUZipFileArchive *)componentZipArchive;
-(NSError *)lastReloadError;
-(id)newReadChannelForComponentLocator:(id)arg1 compressionAlgorithm:(long long)arg2 isStoredOutsideObjectArchive:(BOOL)arg3 error:(id*)arg4 ;
-(void)didReadFileFormatVersion:(unsigned long long)arg1 ;
-(void)didReadDocumentReadVersion:(unsigned long long)arg1 ;
-(void)setZipArchive:(TSUZipFileArchive *)arg1 ;
-(BOOL)didReloadZipArchive:(id)arg1 packageURL:(id)arg2 error:(id*)arg3 ;
-(void)peformSynchronousAccessToZipArchive:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 zipArchiveOrNil:(id)arg2 zipArchiveOptions:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 decryptionKey:(id)arg6 fileCoordinatorDelegate:(id)arg7 error:(id*)arg8 ;
-(id)newZipArchiveFromPackageURL:(id)arg1 isLazyLoading:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)reloadZipArchiveIfNeededWithURLImpl:(id)arg1 isLazyLoading:(BOOL)arg2 error:(id*)arg3 ;
-(id)newCompressionReadChannelWithReadChannel:(id)arg1 compressionAlgorithm:(long long)arg2 ;
-(id)keyFromPassword:(id)arg1 passwordVerifier:(id)arg2 ;
@end

