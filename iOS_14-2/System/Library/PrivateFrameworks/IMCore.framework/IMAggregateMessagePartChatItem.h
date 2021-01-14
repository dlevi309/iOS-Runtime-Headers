/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTextMessagePartChatItem.h>

@class NSArray;

@interface IMAggregateMessagePartChatItem : IMTextMessagePartChatItem {

	NSArray* _subparts;

}

@property (nonatomic,copy,readonly) NSArray * subparts;              //@synthesize subparts=_subparts - In the implementation block
-(Class)__ck_chatItemClass;
-(NSArray *)subparts;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 messagePartRange:(NSRange)arg2 subparts:(id)arg3 ;
-(id)replyContextPreviewChatItemForReply:(id)arg1 ;
@end

