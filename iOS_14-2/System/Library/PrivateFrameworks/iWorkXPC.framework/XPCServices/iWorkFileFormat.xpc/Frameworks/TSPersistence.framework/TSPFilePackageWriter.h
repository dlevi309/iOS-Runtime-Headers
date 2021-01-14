/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPPackageWriter.h>

@class TSUZipFileWriter, TSUSafeSaveAssistant;

@interface TSPFilePackageWriter : TSPPackageWriter {

	TSUZipFileWriter* _delayedZipArchiveWriter;
	TSUSafeSaveAssistant* _safeSaveAssistant;
	BOOL _onlyWriteToDelayedZipArchive;

}
-(void)closeWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(long long)arg7 cloneMode:(BOOL)arg8 encryptionKey:(id)arg9 originalDocumentPackage:(id)arg10 originalSuppportPackage:(id)arg11 fileCoordinatorDelegate:(id)arg12 progress:(id)arg13 error:(id*)arg14 ;
-(id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 ;
-(id)newRawDataWriteChannelForRelativePath:(id)arg1 originalLastModificationDate:(id)arg2 originalSize:(unsigned long long)arg3 originalCRC:(unsigned)arg4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg5 ;
-(id)zipArchiveWriter;
-(void)finalizeComponentAndDataSectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willWriteData:(id)arg1 ;
-(id)componentZipArchiveWriter;
-(void)truncateZipAtFirstDeletedData:(id)arg1 ;
@end

