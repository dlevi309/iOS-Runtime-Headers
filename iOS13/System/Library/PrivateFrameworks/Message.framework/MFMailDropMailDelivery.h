/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFOutgoingMessageDelivery.h>

@class NSArray, EMMailDropMetadata;

@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery {

	NSArray* _attachments;
	EMMailDropMetadata* _imageArchiveMetadata;
	long long _mailDropState;

}

@property (nonatomic,retain) NSArray * attachments;                                  //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) EMMailDropMetadata * imageArchiveMetadata;              //@synthesize imageArchiveMetadata=_imageArchiveMetadata - In the implementation block
@property (assign,nonatomic) long long mailDropState;                                //@synthesize mailDropState=_mailDropState - In the implementation block
+(id)_mailDropZone;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(id)_attachmentManager;
-(long long)_processAttachments;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)ckDatabase;
-(BOOL)_uploadAttachmentsViaCloudKit:(id)arg1 zone:(id)arg2 records:(id)arg3 zippedPhotos:(id)arg4 attachmentRecords:(id)arg5 images:(id)arg6 ;
-(id)scaledImages:(id)arg1 ;
-(void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)updateMessageWithAttachmentsSynchronously;
-(EMMailDropMetadata *)imageArchiveMetadata;
-(void)setImageArchiveMetadata:(EMMailDropMetadata *)arg1 ;
-(id)publishRecord:(id)arg1 database:(id)arg2 attachmentRecords:(id)arg3 images:(id)arg4 allowsCellularAccess:(BOOL)arg5 ;
-(long long)mailDropState;
-(void)setMailDropState:(long long)arg1 ;
@end

