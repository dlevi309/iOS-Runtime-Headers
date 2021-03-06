/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DOCThumbnailRequest.h>

@class QLThumbnailGenerator, QLThumbnailGenerationRequest, DOCThumbnailFolderIcon;

@interface DOCRegularItemThumbnailRequest : DOCThumbnailRequest {

	QLThumbnailGenerator* _thumbnailGenerator;
	QLThumbnailGenerationRequest* _thumbnailRequest;
	DOCThumbnailFolderIcon* _folderIcon;
	unsigned long long _style;

}
-(void)cancel;
-(void)generateThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3 ;
@end

