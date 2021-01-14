/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


#import <NotesUI/NotesUI-Structs.h>
@interface ICGalleryAttachmentUtilities : NSObject
+(id)createSubAttachmentFromDocument:(id)arg1 imageCache:(id)arg2 galleryAttachment:(id)arg3 ;
+(id)imageForSubAttachment:(id)arg1 allowCached:(BOOL)arg2 ;
+(id)imageForSubAttachment:(id)arg1 rotateForMacImageGallery:(BOOL)arg2 allowCached:(BOOL)arg3 ;
+(double)requiredWidthForAttachment:(id)arg1 viewHeight:(double)arg2 maxWidth:(double)arg3 ;
+(CGSize)sizeOfSubAttachment:(id)arg1 forHeight:(double)arg2 ;
+(id)createAndAddSubAttachmentsToGalleryAttachment:(id)arg1 fromDocuments:(id)arg2 imageCache:(id)arg3 ;
+(id)imageForSubAttachment:(id)arg1 ;
+(CGSize)sizeOfViewForAttachment:(id)arg1 textViewContentWidth:(double)arg2 ;
@end

