/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class CNUIUserActionListDataSource, CNUIContactsEnvironment;

@interface CNContactActionsContext : NSObject {

	CNUIUserActionListDataSource* _dataSource;
	CNUIContactsEnvironment* _environment;

}

@property (readonly) CNUIUserActionListDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) CNUIContactsEnvironment * environment;                  //@synthesize environment=_environment - In the implementation block
-(id)init;
-(void)setCacheEntryExpirationAge:(double)arg1 ;
-(void)setCacheEntryRefreshAge:(double)arg1 ;
-(CNUIUserActionListDataSource *)dataSource;
-(void)setCacheEntryLimit:(unsigned long long)arg1 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 ;
-(id)description;
-(CNUIContactsEnvironment *)environment;
@end

