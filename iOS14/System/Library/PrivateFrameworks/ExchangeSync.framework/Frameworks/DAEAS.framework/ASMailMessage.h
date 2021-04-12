/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DataAccess/DAMailMessage.h>

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {

	ASEmailItem* _ASEmailItem;

}
+(BOOL)supportsSecureCoding;
-(id)to;
-(id)cc;
-(id)bcc;
-(id)from;
-(id)subject;
-(id)sender;
-(id)preview;
-(id)body;
-(id)attachments;
-(BOOL)flagged;
-(id)folderID;
-(BOOL)read;
-(id)longID;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isDraft;
-(id)messageClass;
-(id)replyTo;
-(id)description;
-(int)importance;
-(id)initWithCoder:(id)arg1 ;
-(id)rfc822Data;
-(id)conversationId;
-(id)meetingRequestUUID;
-(id)remoteID;
-(int)lastVerb;
-(int)bodySize;
-(id)displayTo;
-(int)bodyTruncated;
-(id)threadTopic;
-(id)conversationIndex;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(BOOL)verbIsSet;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(id)date;
-(id)initWithASEmailItem:(id)arg1 ;
@end

