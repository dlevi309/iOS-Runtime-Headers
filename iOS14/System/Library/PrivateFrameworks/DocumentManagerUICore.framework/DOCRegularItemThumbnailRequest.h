/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

