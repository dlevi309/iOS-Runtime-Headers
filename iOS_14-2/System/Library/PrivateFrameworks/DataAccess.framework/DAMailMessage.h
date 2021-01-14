/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface DAMailMessage : NSObject <NSCoding>
-(id)to;
-(id)cc;
-(id)bcc;
-(id)from;
-(id)clientID;
-(id)instanceID;
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
-(int)importance;
-(id)initWithCoder:(id)arg1 ;
-(id)rfc822Data;
-(id)conversationId;
-(id)meetingRequestUUID;
-(id)remoteID;
-(int)lastVerb;
-(int)bodySize;
-(id)serverID;
-(int)bodyType;
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
@end

