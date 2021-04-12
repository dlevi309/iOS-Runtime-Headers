/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMailboxChangeAction.h>

@class NSString;

@interface EMRenameMailboxChangeAction : EMMailboxChangeAction {

	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMailboxObjectID:(id)arg1 newName:(id)arg2 ;
-(id)initWithMailbox:(id)arg1 newName:(id)arg2 ;
@end

