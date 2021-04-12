/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKMessageStatusChatItem.h>

@interface CKMessageReplyCountChatItem : CKMessageStatusChatItem

@property (nonatomic,readonly) unsigned long long replyCount; 
-(BOOL)isEditable;
-(char)transcriptOrientation;
-(Class)cellClass;
-(unsigned long long)replyCount;
-(id)loadTranscriptButtonText;
-(BOOL)shouldHideDuringDarkFSM;
-(id)_loadTranscriptButtonTextForReplyCountButtonType;
-(long long)buttonType;
@end

