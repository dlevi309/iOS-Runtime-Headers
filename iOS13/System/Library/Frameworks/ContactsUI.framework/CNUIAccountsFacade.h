/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class ACAccountStore, CNUIAccountsFacadeRequestRunner;

@interface CNUIAccountsFacade : NSObject {

	ACAccountStore* _accountStore;
	CNUIAccountsFacadeRequestRunner* _requestRunner;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                                //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) CNUIAccountsFacadeRequestRunner * requestRunner;              //@synthesize requestRunner=_requestRunner - In the implementation block
-(id)init;
-(ACAccountStore *)accountStore;
-(id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2 ;
-(void)fetchiCloudFamilyMembersWithCompletionHandler:(/*^block*/id)arg1 ;
-(CNUIAccountsFacadeRequestRunner *)requestRunner;
@end

