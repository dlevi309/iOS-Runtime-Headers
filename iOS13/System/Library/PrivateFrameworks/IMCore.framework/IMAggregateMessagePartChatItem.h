/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)subparts;
-(id)_initWithItem:(id)arg1 messagePartRange:(NSRange)arg2 subparts:(id)arg3 ;
@end

