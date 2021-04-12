/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction {

	ECMessageFlagChange* _flagChange;

}

@property (nonatomic,readonly) ECMessageFlagChange * flagChange;              //@synthesize flagChange=_flagChange - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)signpostType;
-(ECMessageFlagChange *)flagChange;
-(id)initWithMessageListItems:(id)arg1 flagChange:(id)arg2 ;
@end

