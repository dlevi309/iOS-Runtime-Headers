/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OISFUZipEntry;

@interface TCBundleResourcePackageEntry : NSObject {

	OISFUZipEntry* mZipEntry;
	xmlDoc* mXmlDocument;

}
-(void)dealloc;
-(id)data;
-(xmlDoc*)xmlDocument;
-(id)initWithZipEntry:(id)arg1 ;
@end

