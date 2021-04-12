/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMMailboxObjectID;

@interface EMMailboxChangeAction : NSObject <NSSecureCoding> {

	EMMailboxObjectID* _mailboxObjectID;

}

@property (nonatomic,copy,readonly) EMMailboxObjectID * mailboxObjectID;              //@synthesize mailboxObjectID=_mailboxObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)initWithMailboxObjectID:(id)arg1 ;
-(EMMailboxObjectID *)mailboxObjectID;
@end

