/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DOCThumbnailRequest.h>

@class DOCThumbnailDescriptor;

@interface DOCStaticBadgedFolderThumbnailRequest : DOCThumbnailRequest {

	unsigned long long _folderType;
	DOCThumbnailDescriptor* _descriptor;

}
-(void)generateThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFolderType:(unsigned long long)arg1 descriptor:(id)arg2 ;
@end

