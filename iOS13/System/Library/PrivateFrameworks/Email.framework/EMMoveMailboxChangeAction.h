/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMailboxChangeAction.h>

@class EMMailboxObjectID;

@interface EMMoveMailboxChangeAction : EMMailboxChangeAction {

	EMMailboxObjectID* _parentMailboxID;

}

@property (nonatomic,copy,readonly) EMMailboxObjectID * parentMailboxID;              //@synthesize parentMailboxID=_parentMailboxID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMailboxObjectID:(id)arg1 newParentMailboxID:(id)arg2 ;
-(EMMailboxObjectID *)parentMailboxID;
-(id)initWithMailbox:(id)arg1 newParent:(id)arg2 ;
@end

