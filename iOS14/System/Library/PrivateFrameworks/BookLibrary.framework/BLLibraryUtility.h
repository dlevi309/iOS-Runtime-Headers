/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


#import <BookLibrary/BookLibrary-Structs.h>
@interface BLLibraryUtility : NSObject
+(BOOL)_isMultiUser;
+(id)identifierFromBookPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(id)dcIdentifierFromBookPath:(id)arg1 ;
+(id)generateFileUniqueIdFromPath:(id)arg1 ;
+(id)p_opfPathFromContainerXmlDoc:(xmlDoc*)arg1 epubPath:(id)arg2 ;
+(id)opfPathFromEpubPath:(id)arg1 ;
+(id)p_opfPathFromContainerXmlPath:(id)arg1 epubPath:(id)arg2 ;
+(id)_dcIdentifierFromOpfPath:(id)arg1 isEPUB:(BOOL)arg2 ;
+(id)md5FromPath:(id)arg1 ;
+(id)uniqueIdFromEpubPath:(id)arg1 ;
+(id)uniqueIdFromPdfPath:(id)arg1 ;
+(id)_iTunesMetadataPathForEpubPath:(id)arg1 ;
+(id)_storeIdFromiTunesMetadataPath:(id)arg1 error:(id*)arg2 ;
+(id)identifierFromBookPath:(id)arg1 allowHash:(BOOL)arg2 allowStoreID:(BOOL)arg3 error:(id*)arg4 ;
+(id)identifierFromBookContainer:(id)arg1 allowHash:(BOOL)arg2 allowStoreID:(BOOL)arg3 error:(id*)arg4 ;
+(id)identifierFromBookZipArchive:(id)arg1 allowHash:(BOOL)arg2 allowStoreID:(BOOL)arg3 error:(id*)arg4 ;
+(id)opfPathFromFullOpfContainerPath:(id)arg1 ;
@end

