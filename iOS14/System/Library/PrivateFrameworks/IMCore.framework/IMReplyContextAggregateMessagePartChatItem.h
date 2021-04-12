/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMAggregateMessagePartChatItem.h>
#import <IMCore/IMReplyContext.h>

@class IMItem, NSString;

@interface IMReplyContextAggregateMessagePartChatItem : IMAggregateMessagePartChatItem <IMReplyContext> {

	BOOL _replyIsFromMe;
	IMItem* _parentItem;
	NSString* _replyMessageGUID;

}

@property (nonatomic,retain) IMItem * _parentItem;                   //@synthesize parentItem=_parentItem - In the implementation block
@property (assign,nonatomic) BOOL replyIsFromMe;                     //@synthesize replyIsFromMe=_replyIsFromMe - In the implementation block
@property (nonatomic,copy) NSString * replyMessageGUID;              //@synthesize replyMessageGUID=_replyMessageGUID - In the implementation block
-(Class)__ck_chatItemClass;
-(BOOL)replyIsFromMe;
-(BOOL)canDelete;
-(NSString *)replyMessageGUID;
-(BOOL)isReplyContextPreview;
-(IMItem *)_parentItem;
-(void)set_parentItem:(IMItem *)arg1 ;
-(void)setReplyIsFromMe:(BOOL)arg1 ;
-(void)setReplyMessageGUID:(NSString *)arg1 ;
-(id)_initWithItem:(id)arg1 parentItem:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(BOOL)arg4 messagePartRange:(NSRange)arg5 subparts:(id)arg6 ;
@end

