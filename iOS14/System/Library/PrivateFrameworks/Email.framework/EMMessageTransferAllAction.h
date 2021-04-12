/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMessageTransferAction.h>

@class NSArray;

@interface EMMessageTransferAllAction : EMMessageTransferAction {

	NSArray* _mailboxObjectIDs;

}

@property (nonatomic,copy,readonly) NSArray * mailboxObjectIDs;              //@synthesize mailboxObjectIDs=_mailboxObjectIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)signpostType;
-(NSArray *)mailboxObjectIDs;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 destinationMailbox:(id)arg3 copyMessages:(BOOL)arg4 ;
-(id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 specialDestinationMailboxType:(long long)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5 ;
-(id)initWithCoder:(id)arg1 ;
@end

