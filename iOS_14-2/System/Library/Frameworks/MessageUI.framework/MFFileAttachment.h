/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSString, NSURL;

@interface MFFileAttachment : NSObject {

	int _attachmentType;
	NSString* _attachmentName;
	NSURL* _attachmentContentIDURL;

}

@property (nonatomic,copy) NSString * attachmentName;                     //@synthesize attachmentName=_attachmentName - In the implementation block
@property (nonatomic,retain) NSURL * attachmentContentIDURL;              //@synthesize attachmentContentIDURL=_attachmentContentIDURL - In the implementation block
@property (assign,nonatomic) int attachmentType;                          //@synthesize attachmentType=_attachmentType - In the implementation block
-(NSURL *)attachmentContentIDURL;
-(NSString *)attachmentName;
-(void)setAttachmentName:(NSString *)arg1 ;
-(void)setAttachmentContentIDURL:(NSURL *)arg1 ;
-(void)setAttachmentType:(int)arg1 ;
-(unsigned long long)hash;
-(int)attachmentType;
-(BOOL)isEqual:(id)arg1 ;
@end

