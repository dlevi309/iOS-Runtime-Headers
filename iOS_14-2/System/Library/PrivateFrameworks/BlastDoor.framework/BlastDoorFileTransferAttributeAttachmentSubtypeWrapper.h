/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSString, BlastDoorGeneralAttachmentInfo, BlastDoorStickerAttachmentInfo, BlastDoorLivePhotoAttachmentInfo, BlastDoorAudioMessageAttachmentInfo;

@interface BlastDoorFileTransferAttributeAttachmentSubtypeWrapper : NSObject {

	 fileTransferAttribute_AttachmentSubtype;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) unsigned long long type; 
@property (readonly,nonatomic) BlastDoorGeneralAttachmentInfo * unspecified; 
@property (readonly,nonatomic) BlastDoorStickerAttachmentInfo * sticker; 
@property (readonly,nonatomic) BlastDoorLivePhotoAttachmentInfo * livePhoto; 
@property (readonly,nonatomic) BlastDoorAudioMessageAttachmentInfo * audioMessage; 
-(BlastDoorLivePhotoAttachmentInfo *)livePhoto;
-(id)init;
-(BlastDoorStickerAttachmentInfo *)sticker;
-(NSString *)description;
-(unsigned long long)type;
-(BlastDoorAudioMessageAttachmentInfo *)audioMessage;
-(BlastDoorGeneralAttachmentInfo *)unspecified;
@end

