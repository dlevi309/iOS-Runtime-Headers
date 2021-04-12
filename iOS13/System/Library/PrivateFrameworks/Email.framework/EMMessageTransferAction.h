/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMessageChangeAction.h>

@class NSURL, ECMessageFlagChange;

@interface EMMessageTransferAction : EMMessageChangeAction {

	BOOL _copyMessages;
	NSURL* _destinationMailboxURL;
	long long _specialDestinationMailboxType;
	ECMessageFlagChange* _flagChange;

}

@property (nonatomic,readonly) NSURL * destinationMailboxURL;                        //@synthesize destinationMailboxURL=_destinationMailboxURL - In the implementation block
@property (nonatomic,readonly) long long specialDestinationMailboxType;              //@synthesize specialDestinationMailboxType=_specialDestinationMailboxType - In the implementation block
@property (nonatomic,readonly) ECMessageFlagChange * flagChange;                     //@synthesize flagChange=_flagChange - In the implementation block
@property (nonatomic,readonly) BOOL copyMessages;                                    //@synthesize copyMessages=_copyMessages - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)signpostType;
-(ECMessageFlagChange *)flagChange;
-(BOOL)copyMessages;
-(NSURL *)destinationMailboxURL;
-(id)initWithMessageListItems:(id)arg1 specialDestinationMailboxType:(long long)arg2 flagChange:(id)arg3 copyMessages:(BOOL)arg4 ;
-(long long)specialDestinationMailboxType;
-(id)initWithMessageListItems:(id)arg1 destinationMailbox:(id)arg2 copyMessages:(BOOL)arg3 ;
@end

