/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction {

	ECMessageFlagChange* _flagChange;

}

@property (nonatomic,readonly) ECMessageFlagChange * flagChange;              //@synthesize flagChange=_flagChange - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)signpostType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ECMessageFlagChange *)flagChange;
-(id)initWithMessageListItems:(id)arg1 flagChange:(id)arg2 ;
@end

