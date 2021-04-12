/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)subject;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 subject:(id)arg5 ;
-(BOOL)shouldDisplayRichLink;
-(void)setShouldDisplayRichLink:(BOOL)arg1 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 subject:(id)arg5 shouldDisplayLink:(BOOL)arg6 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 subject:(id)arg5 visibleAssociatedMessageChatItems:(id)arg6 ;
@end

