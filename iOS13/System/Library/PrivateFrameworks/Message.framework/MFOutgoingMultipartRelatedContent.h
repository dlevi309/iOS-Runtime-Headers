/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFOutgoingRichtextMessageContent.h>

@class NSString;

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent {

	NSString* _htmlBody;

}

@property (nonatomic,retain) NSString * htmlBody;              //@synthesize htmlBody=_htmlBody - In the implementation block
-(id)copy;
-(id)multipartContent;
-(void)setHtmlBody:(NSString *)arg1 ;
-(NSString *)htmlBody;
@end

