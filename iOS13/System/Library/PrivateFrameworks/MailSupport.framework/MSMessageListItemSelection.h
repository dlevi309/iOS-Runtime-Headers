/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

