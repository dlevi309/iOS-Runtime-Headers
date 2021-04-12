/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/STSiriModelObject.h>

@class STContactAddress, NSString, NSArray, NSURL, NSDate;

@interface STSiriMessage : STSiriModelObject {

	BOOL _outbound;
	STContactAddress* _senderAddress;
	NSString* _senderInternalGUID;
	NSArray* _recipientAddresses;
	NSString* _groupName;
	NSString* _groupNameId;
	NSString* _subjectText;
	NSString* _bodyText;
	NSString* _effect;
	NSURL* _attachmentURL;
	NSDate* _sendDate;
	NSString* _chatIdentifier;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)groupName;
-(void)setGroupName:(id)arg1 ;
-(id)recipientAddresses;
-(void)setOutbound:(BOOL)arg1 ;
-(void)setEffect:(id)arg1 ;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(id)effect;
-(id)attachmentURL;
-(void)setAttachmentURL:(id)arg1 ;
-(void)setRecipientAddresses:(id)arg1 ;
-(id)_aceContextObjectValue;
-(id)sendDate;
-(BOOL)isOutbound;
-(id)subjectText;
-(id)chatIdentifier;
-(void)setChatIdentifier:(id)arg1 ;
-(id)groupNameId;
-(void)setGroupNameId:(id)arg1 ;
-(id)senderAddress;
-(void)setSenderAddress:(id)arg1 ;
-(id)senderInternalGUID;
-(void)_setSenderInternalGUID:(id)arg1 ;
-(void)setSubjectText:(id)arg1 ;
-(void)setSendDate:(id)arg1 ;
@end

