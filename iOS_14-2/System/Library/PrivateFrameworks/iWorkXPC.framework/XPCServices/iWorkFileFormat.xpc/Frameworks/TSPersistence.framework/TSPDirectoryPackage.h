/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPPackage.h>

@interface TSPDirectoryPackage : TSPPackage
+(BOOL)isValidPackageAtURL:(id)arg1 ;
+(id)objectArchiveURLForPackageURL:(id)arg1 ;
+(id)componentFileURLForPackageURL:(id)arg1 packageLocator:(id)arg2 ;
+(id)zipArchiveURLFromPackageURL:(id)arg1 ;
+(unsigned long long)zipArchiveOptions;
-(id)dataAtRelativePath:(id)arg1 allowDecryption:(BOOL)arg2 error:(id*)arg3 ;
-(long long)packageType;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3 ;
-(id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id*)arg4 ;
-(id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 ;
-(id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 error:(id*)arg3 ;
-(void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 canLink:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(id)packageEntryInfoAtRelativePath:(id)arg1 error:(id*)arg2 ;
-(id)newRawDataReadChannelAtRelativePath:(id)arg1 ;
-(BOOL)hasDataAtRelativePath:(id)arg1 ;
-(id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(/*^block*/id)arg2 error:(id*)arg3 ;
@end

