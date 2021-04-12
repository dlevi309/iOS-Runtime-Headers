/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSAccountRegistrationDelegate.h>
#import <IDS/IDSAccountControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMapTable, NSObject, IDSCTAdapter, NSString;

@interface IDSSignInController : NSObject <IDSAccountRegistrationDelegate, IDSAccountControllerDelegate> {

	NSMutableDictionary* _serviceNameAccountControllerMap;
	NSMutableDictionary* _accountIDDescriptionMap;
	NSMapTable* _delegateByServiceType;
	NSMutableDictionary* _initialStateByService;
	NSObject*<OS_dispatch_queue> _signInQueue;
	id _passwordManager;
	double _signInTimeout;
	double _signInFuzz;
	IDSCTAdapter* _CTAdapter;

}

@property (nonatomic,retain) NSMutableDictionary * serviceNameAccountControllerMap;              //@synthesize serviceNameAccountControllerMap=_serviceNameAccountControllerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountIDDescriptionMap;                      //@synthesize accountIDDescriptionMap=_accountIDDescriptionMap - In the implementation block
@property (nonatomic,retain) NSMapTable * delegateByServiceType;                                 //@synthesize delegateByServiceType=_delegateByServiceType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * initialStateByService;                        //@synthesize initialStateByService=_initialStateByService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> signInQueue;                           //@synthesize signInQueue=_signInQueue - In the implementation block
@property (nonatomic,retain) id<_IDSPasswordManager> passwordManager;                            //@synthesize passwordManager=_passwordManager - In the implementation block
@property (nonatomic,retain) IDSCTAdapter * CTAdapter;                                           //@synthesize CTAdapter=_CTAdapter - In the implementation block
@property (assign,nonatomic) double signInTimeout;                                               //@synthesize signInTimeout=_signInTimeout - In the implementation block
@property (assign,nonatomic) double signInFuzz;                                                  //@synthesize signInFuzz=_signInFuzz - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)signInQueue;
-(void)setSignInQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isiMessageEnabled;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(id)initWithPasswordManager:(id)arg1 CTAdapter:(id)arg2 signInTimeout:(double)arg3 signInFuzz:(double)arg4 queue:(id)arg5 ;
-(NSMapTable *)delegateByServiceType;
-(void)setDelegateByServiceType:(NSMapTable *)arg1 ;
-(void)setInitialStateByService:(NSMutableDictionary *)arg1 ;
-(id)_statusOfUsersOnService:(unsigned long long)arg1 ;
-(NSMutableDictionary *)initialStateByService;
-(id)_serviceNameForType:(unsigned long long)arg1 ;
-(id)_accountControllerForName:(id)arg1 ;
-(NSMutableDictionary *)accountIDDescriptionMap;
-(void)setServiceNameAccountControllerMap:(NSMutableDictionary *)arg1 ;
-(void)_initializeStateMachineForAccountID:(id)arg1 service:(id)arg2 state:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_actionOnAccountOfType:(unsigned long long)arg1 onService:(unsigned long long)arg2 actionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)_statusOfAccount:(id)arg1 ;
-(void)_cleanupStateForAccountID:(id)arg1 ;
-(id<_IDSPasswordManager>)passwordManager;
-(id)_createAccountWithDictionary:(id)arg1 accountID:(id)arg2 serviceName:(id)arg3 ;
-(void)signInUsername:(id)arg1 onService:(unsigned long long)arg2 waitUntilRegistered:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)provideCredential:(id)arg1 forUser:(id)arg2 onService:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_scheduleValidationAfter:(double)arg1 forAccountID:(id)arg2 allowFuzz:(BOOL)arg3 ;
-(void)_validateStateForAccountID:(id)arg1 timeoutMode:(unsigned long long)arg2 ;
-(unsigned long long)_serviceTypeForName:(id)arg1 ;
-(id)_accountWithUniqueID:(id)arg1 ;
-(IDSCTAdapter *)CTAdapter;
-(id)_createAccountControllerForService:(id)arg1 ;
-(void)_validateDelegateState;
-(void)accountController:(id)arg1 accountAdded:(id)arg2 ;
-(void)accountController:(id)arg1 accountRemoved:(id)arg2 ;
-(void)accountController:(id)arg1 accountDisabled:(id)arg2 ;
-(void)setDelegate:(id)arg1 forService:(unsigned long long)arg2 ;
-(void)removeDelegateForService:(unsigned long long)arg1 ;
-(void)enableUserType:(unsigned long long)arg1 onService:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)disableUserType:(unsigned long long)arg1 onService:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)statusOfUsersOnService:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)signInUsername:(id)arg1 withProvidedCredential:(id)arg2 onService:(unsigned long long)arg3 waitUntilRegistered:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)signOutService:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)serviceNameAccountControllerMap;
-(void)setAccountIDDescriptionMap:(NSMutableDictionary *)arg1 ;
-(void)setPasswordManager:(id<_IDSPasswordManager>)arg1 ;
-(double)signInTimeout;
-(void)setSignInTimeout:(double)arg1 ;
-(double)signInFuzz;
-(void)setSignInFuzz:(double)arg1 ;
-(void)setCTAdapter:(IDSCTAdapter *)arg1 ;
-(BOOL)_isServiceCurrentlyEnabled:(id)arg1 ;
-(BOOL)isFaceTimeEnabled;
@end

