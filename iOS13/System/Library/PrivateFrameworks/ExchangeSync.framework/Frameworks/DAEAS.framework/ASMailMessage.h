/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DataAccess/DAMailMessage.h>

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {

	ASEmailItem* _ASEmailItem;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)date;
-(id)attachments;
-(id)to;
-(id)from;
-(id)sender;
-(id)subject;
-(id)preview;
-(id)body;
-(id)folderID;
-(int)importance;
-(BOOL)read;
-(id)longID;
-(id)remoteID;
-(id)cc;
-(id)bcc;
-(BOOL)flagged;
-(id)conversationId;
-(id)rfc822Data;
-(int)lastVerb;
-(id)meetingRequestUUID;
-(int)bodySize;
-(BOOL)isDraft;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(BOOL)verbIsSet;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(id)replyTo;
-(id)messageClass;
-(id)displayTo;
-(int)bodyTruncated;
-(id)threadTopic;
-(id)conversationIndex;
-(id)initWithASEmailItem:(id)arg1 ;
@end

