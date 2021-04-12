/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithMailboxObjectID:(id)arg1 newParentMailboxID:(id)arg2 ;
-(id)initWithMailbox:(id)arg1 newParent:(id)arg2 ;
-(EMMailboxObjectID *)parentMailboxID;
-(id)initWithCoder:(id)arg1 ;
@end

