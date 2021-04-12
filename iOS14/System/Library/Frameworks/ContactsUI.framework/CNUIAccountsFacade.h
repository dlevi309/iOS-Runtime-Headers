/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

