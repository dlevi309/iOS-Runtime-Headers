/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPDirectoryPackage.h>

@interface TSPExpandedDirectoryPackage : TSPDirectoryPackage
+(BOOL)isValidPackageAtURL:(id)arg1 ;
+(BOOL)hasZipArchive;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3 ;
-(id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 ;
-(id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 error:(id*)arg3 ;
@end

