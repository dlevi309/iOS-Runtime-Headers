/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)attachments;
-(id)init;
-(id)initWithContextID:(id)arg1 ;
-(NSString *)contextID;
-(MFAttachmentManager *)attachmentsManager;
-(NSURL *)attachmentsBaseURL;
-(void)setHostIdentifier:(id)arg1 forAttachment:(id)arg2 ;
-(id)attachmentForHostIdentifier:(id)arg1 ;
-(void)setAttachmentsBaseURL:(NSURL *)arg1 ;
-(void)setAttachmentsManager:(MFAttachmentManager *)arg1 ;
-(void)dealloc;
@end

