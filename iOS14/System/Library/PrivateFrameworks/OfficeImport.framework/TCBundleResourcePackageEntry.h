/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OISFUZipEntry;

@interface TCBundleResourcePackageEntry : NSObject {

	OISFUZipEntry* mZipEntry;
	xmlDoc* mXmlDocument;

}
-(id)data;
-(void)dealloc;
-(xmlDoc*)xmlDocument;
-(id)initWithZipEntry:(id)arg1 ;
@end

