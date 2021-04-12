/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTextMessagePartChatItem.h>
#import <libobjc.A.dylib/CKReplyContext.h>

@interface CKReplyContextTextMessagePartChatItem : CKTextMessagePartChatItem <CKReplyContext>
-(BOOL)isEditable;
-(char)balloonStyle;
-(BOOL)replyIsFromMe;
-(id)bodyTextFont;
-(BOOL)wantsOutline;
-(id)meMentionsTextColor;
-(id)loadTranscriptDrawerText;
-(BOOL)shouldUseBigEmoji;
-(char)color;
-(Class)balloonViewClass;
-(BOOL)isReplyContextPreview;
-(CKBalloonDescriptor_t)balloonDescriptor;
@end

