/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)attachments;
-(id)_attachmentManager;
-(id)ckDatabase;
-(long long)_processAttachments;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
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

