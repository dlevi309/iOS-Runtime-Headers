/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMAccount;

@interface REMAccountGroupContext : NSObject {

	REMAccount* _account;

}

@property (nonatomic,retain) REMAccount * account;              //@synthesize account=_account - In the implementation block
-(REMAccount *)account;
-(void)setAccount:(REMAccount *)arg1 ;
-(id)fetchGroupsWithError:(id*)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

