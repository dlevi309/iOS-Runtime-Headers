/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSMutableDictionary, NSString, NSURL, MFAttachmentManager, NSArray;

@interface MFAttachmentCompositionContext : NSObject {

	NSMutableDictionary* _hostIdentifierToAttachmentContentIDMap;
	NSString* _contextID;
	NSURL* _attachmentsBaseURL;
	MFAttachmentManager* _attachmentsManager;

}

@property (nonatomic,readonly) NSString * contextID;                                //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,retain) NSURL * attachmentsBaseURL;                            //@synthesize attachmentsBaseURL=_attachmentsBaseURL - In the implementation block
@property (nonatomic,retain) MFAttachmentManager * attachmentsManager;              //@synthesize attachmentsManager=_attachmentsManager - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
-(id)init;
-(void)dealloc;
-(NSArray *)attachments;
-(NSString *)contextID;
-(id)initWithContextID:(id)arg1 ;
-(MFAttachmentManager *)attachmentsManager;
-(NSURL *)attachmentsBaseURL;
-(void)setHostIdentifier:(id)arg1 forAttachment:(id)arg2 ;
-(id)attachmentForHostIdentifier:(id)arg1 ;
-(void)setAttachmentsBaseURL:(NSURL *)arg1 ;
-(void)setAttachmentsManager:(MFAttachmentManager *)arg1 ;
@end

