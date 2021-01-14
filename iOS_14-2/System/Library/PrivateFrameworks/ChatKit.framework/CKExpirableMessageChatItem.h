/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKAttachmentMessagePartChatItem.h>

@interface CKExpirableMessageChatItem : CKAttachmentMessagePartChatItem

@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isSaved; 
-(BOOL)isPlayed;
-(BOOL)canForward;
-(BOOL)canExport;
-(BOOL)canSendAsTextMessage;
-(BOOL)canCopy;
-(BOOL)isSaved;
@end

