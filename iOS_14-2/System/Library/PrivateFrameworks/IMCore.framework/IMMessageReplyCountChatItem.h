/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMMessageStatusChatItem.h>
#import <IMCore/IMReplyContext.h>

@class IMItem, NSString;

@interface IMMessageReplyCountChatItem : IMMessageStatusChatItem <IMReplyContext> {

	BOOL _replyIsFromMe;
	IMItem* _parentItem;
	NSString* _threadIdentifier;
	NSString* _replyMessageGUID;

}

@property (nonatomic,retain) IMItem * _parentItem;                            //@synthesize parentItem=_parentItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadIdentifier;              //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL replyIsFromMe;                            //@synthesize replyIsFromMe=_replyIsFromMe - In the implementation block
@property (nonatomic,copy,readonly) NSString * replyMessageGUID;              //@synthesize replyMessageGUID=_replyMessageGUID - In the implementation block
-(Class)__ck_chatItemClass;
-(NSString *)threadIdentifier;
-(BOOL)replyIsFromMe;
-(NSString *)replyMessageGUID;
-(IMItem *)_parentItem;
-(void)set_parentItem:(IMItem *)arg1 ;
-(id)_initWithItem:(id)arg1 parentItem:(id)arg2 threadIdentifier:(id)arg3 replyMessageGUID:(id)arg4 replyIsFromMe:(BOOL)arg5 count:(unsigned long long)arg6 ;
@end

