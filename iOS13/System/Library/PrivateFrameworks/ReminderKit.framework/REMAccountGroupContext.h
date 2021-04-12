/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMAccount;

@interface REMAccountGroupContext : NSObject {

	REMAccount* _account;

}

@property (nonatomic,retain) REMAccount * account;              //@synthesize account=_account - In the implementation block
-(REMAccount *)account;
-(void)setAccount:(REMAccount *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)fetchGroupsWithError:(id*)arg1 ;
@end

