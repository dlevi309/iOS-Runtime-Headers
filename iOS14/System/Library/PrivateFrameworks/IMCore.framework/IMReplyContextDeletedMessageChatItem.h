/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMReplyContextTextMessagePartChatItem.h>
#import <IMCore/IMReplyContext.h>

@class NSString;

@interface IMReplyContextDeletedMessageChatItem : IMReplyContextTextMessagePartChatItem <IMReplyContext>

@property (nonatomic,readonly) BOOL replyIsFromMe; 
@property (nonatomic,copy,readonly) NSString * replyMessageGUID; 
-(Class)__ck_chatItemClass;
-(BOOL)isFromMe;
-(id)_initWithReplyItem:(id)arg1 threadIdentifier:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(BOOL)arg4 ;
@end

