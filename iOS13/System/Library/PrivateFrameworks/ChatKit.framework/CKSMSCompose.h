/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSMSCompose <NSObject>
@required
+(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+(BOOL)acceptsMIMEType:(id)arg1;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
-(void)setContentText:(id)arg1;
-(void)setContentURLs:(id)arg1;
-(void)setShareSheetSessionID:(id)arg1;
-(void)forceMMS;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
-(void)setCanEditRecipients:(BOOL)arg1;
-(BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
-(BOOL)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 chatGUID:(id)arg4 groupName:(id)arg5;
-(void)setPendingAddresses:(id)arg1;
-(void)setShouldDisableEntryField:(BOOL)arg1;
-(void)disableCameraAttachments;
-(void)setTextEntryContentsVisible:(BOOL)arg1;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
-(void)setUICustomizationData:(id)arg1;
-(void)setUTIs:(id)arg1;
-(void)setPhotoIDs:(id)arg1;
-(void)setCloudPhotoIDs:(id)arg1;
-(BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
-(void)forceCancelComposition;
-(void)setGameCenterModeWithPickerBlock:(/*^block*/id)arg1;
-(BOOL)insertRichLinkWithURL:(id)arg1 andData:(id)arg2;
-(BOOL)insertMessage:(id)arg1;

@end

