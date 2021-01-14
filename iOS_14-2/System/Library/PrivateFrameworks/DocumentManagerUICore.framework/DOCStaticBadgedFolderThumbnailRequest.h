/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

