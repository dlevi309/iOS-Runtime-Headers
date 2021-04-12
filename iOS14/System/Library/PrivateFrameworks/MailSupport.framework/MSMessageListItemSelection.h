/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/


@class NSArray;

@interface MSMessageListItemSelection : NSObject {

	BOOL _isSelectAll;
	NSArray* _messageListItems;
	NSArray* _mailboxes;

}

@property (nonatomic,readonly) NSArray * messageListItems;              //@synthesize messageListItems=_messageListItems - In the implementation block
@property (nonatomic,readonly) NSArray * mailboxes;                     //@synthesize mailboxes=_mailboxes - In the implementation block
@property (nonatomic,readonly) BOOL isSelectAll;                        //@synthesize isSelectAll=_isSelectAll - In the implementation block
-(NSArray *)mailboxes;
-(id)initWithMessageListItems:(id)arg1 ;
-(NSArray *)messageListItems;
-(BOOL)isSelectAll;
-(id)initWithMailboxes:(id)arg1 excludedMessageListItems:(id)arg2 ;
@end

