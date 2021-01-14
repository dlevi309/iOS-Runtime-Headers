/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMailboxChangeAction.h>

@class NSString;

@interface EMRenameMailboxChangeAction : EMMailboxChangeAction {

	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithMailboxObjectID:(id)arg1 newName:(id)arg2 ;
-(id)initWithMailbox:(id)arg1 newName:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

