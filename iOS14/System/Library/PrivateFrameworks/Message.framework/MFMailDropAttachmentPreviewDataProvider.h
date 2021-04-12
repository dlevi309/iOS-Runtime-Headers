/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

