/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEffect:(id)arg1 ;
-(id)effect;
-(void)setSenderAddress:(id)arg1 ;
-(id)senderAddress;
-(id)init;
-(id)bodyText;
-(id)sendDate;
-(void)setGroupName:(id)arg1 ;
-(id)groupName;
-(void)setRecipientAddresses:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)recipientAddresses;
-(void)setChatIdentifier:(id)arg1 ;
-(void)setBodyText:(id)arg1 ;
-(id)_aceContextObjectValue;
-(BOOL)isOutbound;
-(id)attachmentURL;
-(void)setAttachmentURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)subjectText;
-(id)groupNameId;
-(void)setGroupNameId:(id)arg1 ;
-(void)setOutbound:(BOOL)arg1 ;
-(id)senderInternalGUID;
-(void)_setSenderInternalGUID:(id)arg1 ;
-(void)setSubjectText:(id)arg1 ;
-(void)setSendDate:(id)arg1 ;
-(id)chatIdentifier;
@end

