/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)attachmentType;
-(NSURL *)attachmentContentIDURL;
-(NSString *)attachmentName;
-(void)setAttachmentName:(NSString *)arg1 ;
-(void)setAttachmentContentIDURL:(NSURL *)arg1 ;
-(void)setAttachmentType:(int)arg1 ;
@end

