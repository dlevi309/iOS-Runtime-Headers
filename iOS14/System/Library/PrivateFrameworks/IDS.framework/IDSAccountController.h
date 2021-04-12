/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class _IDSAccountController, NSSet;

@interface IDSAccountController : NSObject {

	_IDSAccountController* _internal;

}

@property (nonatomic,readonly) NSSet * accounts; 
-(void)disableAccount:(id)arg1 ;
-(NSSet *)accounts;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(id)_internal;
-(void)removeAccount:(id)arg1 ;
-(void)_enableAccount:(id)arg1 ;
-(void)_disableAccount:(id)arg1 ;
-(id)_initWithService:(id)arg1 onIDSQueue:(BOOL)arg2 ;
-(void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithService:(id)arg1 ;
-(id)accountWithLoginID:(id)arg1 service:(id)arg2 ;
-(id)accountWithUniqueID:(id)arg1 ;
-(void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)serviceName;
-(void)_removeAccount:(id)arg1 ;
-(id)enabledAccounts;
-(void)enableAccount:(id)arg1 ;
-(id)_initWithService:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

