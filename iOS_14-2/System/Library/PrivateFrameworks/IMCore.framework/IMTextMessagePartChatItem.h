/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessagePartChatItem.h>

@class NSAttributedString;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem {

	NSAttributedString* _subject;

}

@property (nonatomic,copy,readonly) NSAttributedString * subject;              //@synthesize subject=_subject - In the implementation block
-(Class)__ck_chatItemClass;
-(NSAttributedString *)subject;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 subject:(id)arg5 ;
-(BOOL)shouldDisplayRichLink;
-(id)description;
-(void)setShouldDisplayRichLink:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 subject:(id)arg5 shouldDisplayLink:(BOOL)arg6 ;
-(id)replyContextPreviewChatItemForReply:(id)arg1 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 subject:(id)arg5 visibleAssociatedMessageChatItems:(id)arg6 ;
@end

