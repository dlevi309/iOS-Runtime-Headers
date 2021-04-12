/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

