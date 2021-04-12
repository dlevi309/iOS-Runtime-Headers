/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCPPackagePart.h>

@class OISFUZipEntry;

@interface OCPZipPackagePart : OCPPackagePart {

	OISFUZipEntry* mEntry;

}

@property (nonatomic,readonly) OISFUZipEntry * zipEntry; 
-(id)data;
-(xmlDoc*)xmlDocument;
-(xmlTextReaderRef)xmlReader;
-(void)copyToFile:(id)arg1 ;
-(OISFUZipEntry *)zipEntry;
-(id)initWithArchive:(id)arg1 location:(id)arg2 package:(id)arg3 ;
@end

