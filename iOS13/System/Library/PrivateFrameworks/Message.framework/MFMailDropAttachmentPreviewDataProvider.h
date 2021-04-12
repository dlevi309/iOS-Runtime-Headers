/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFAttachmentLibraryDataProvider.h>

@interface MFMailDropAttachmentPreviewDataProvider : MFAttachmentLibraryDataProvider
+(id)fullResolutionStorageLocationForAttachmentWithMimePart:(id)arg1 withMessage:(id)arg2 ;
+(id)fullResolutionAttachmentURLForAttachmentURL:(id)arg1 ;
+(id)fullResolutionAttachmentForAttachment:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2 ;
@end

