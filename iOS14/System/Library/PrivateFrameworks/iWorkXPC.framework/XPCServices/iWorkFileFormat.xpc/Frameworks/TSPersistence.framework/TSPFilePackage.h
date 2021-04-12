/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPPackage.h>

@class TSUZipArchive, TSUTemporaryDirectory;

@interface TSPFilePackage : TSPPackage {

	TSUZipArchive* _componentZipArchive;
	TSUTemporaryDirectory* _componentZipArchiveTemporaryDirectory;

}
+(BOOL)isValidOrEmptyPackageOrTangierEditingFormatAtURL:(id)arg1 hasNativeUTI:(BOOL)arg2 ;
+(BOOL)isValidPackageAtURL:(id)arg1 ;
+(BOOL)isValidTangierEditingFormatAtURL:(id)arg1 ;
+(id)zipArchiveURLFromPackageURL:(id)arg1 ;
+(unsigned long long)zipArchiveOptions;
+(BOOL)isValidPackageAtZipArchive:(id)arg1 ;
+(BOOL)isValidTangierEditingFormatAtZipArchive:(id)arg1 ;
-(long long)packageType;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3 ;
-(id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id*)arg4 ;
-(id)packageEntryInfoAtRelativePath:(id)arg1 error:(id*)arg2 ;
-(id)newRawDataReadChannelAtRelativePath:(id)arg1 ;
-(BOOL)hasDataAtRelativePath:(id)arg1 ;
-(id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)componentZipArchive;
-(BOOL)didReloadZipArchive:(id)arg1 packageURL:(id)arg2 error:(id*)arg3 ;
@end

