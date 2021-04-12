/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)signpostType;
-(BOOL)copyMessages;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)specialDestinationMailboxType;
-(id)initWithMessageListItems:(id)arg1 destinationMailbox:(id)arg2 copyMessages:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)destinationMailboxURL;
-(ECMessageFlagChange *)flagChange;
-(id)initWithMessageListItems:(id)arg1 specialDestinationMailboxType:(long long)arg2 flagChange:(id)arg3 copyMessages:(BOOL)arg4 ;
@end

