/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <Message/MFOutgoingRichtextMessageContent.h>

@class NSString;

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent {

	NSString* _htmlBody;

}

@property (nonatomic,retain) NSString * htmlBody;              //@synthesize htmlBody=_htmlBody - In the implementation block
-(id)multipartContent;
-(void)setHtmlBody:(NSString *)arg1 ;
-(id)copy;
-(NSString *)htmlBody;
@end

