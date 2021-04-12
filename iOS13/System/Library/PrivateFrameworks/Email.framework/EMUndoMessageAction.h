/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMessageChangeAction.h>

@class NSArray;

@interface EMUndoMessageAction : EMMessageChangeAction {

	NSArray* _individualActions;

}

@property (nonatomic,copy,readonly) NSArray * individualActions;              //@synthesize individualActions=_individualActions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)signpostType;
-(NSArray *)individualActions;
-(id)initWithIndividualActions:(id)arg1 ;
@end

