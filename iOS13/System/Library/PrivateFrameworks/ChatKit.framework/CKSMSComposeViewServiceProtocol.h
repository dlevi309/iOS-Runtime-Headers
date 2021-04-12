/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSMSComposeViewServiceProtocol <NSObject>
@required
-(void)setContentText:(id)arg1;
-(void)setContentURLs:(id)arg1;
-(void)setShareSheetSessionID:(id)arg1;
-(void)forceMMS;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
-(void)setCanEditRecipients:(BOOL)arg1;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
-(void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
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
-(void)insertRemoteItemForSending:(id)arg1;
-(void)insertRemoteItemForSendingAndCalculateEntryViewFrame:(id)arg1 completion:(/*^block*/id)arg2;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
-(void)showInsertedItemInEntryView;
-(void)forceCancelComposition;
-(void)setGameCenterModeWithPickerBlock:(/*^block*/id)arg1;

@end

