/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _listenerGUID;

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
@property (nonatomic,retain) NSString * listenerGUID;                                            //@synthesize listenerGUID=_listenerGUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(id)_serviceNameForType:(unsigned long long)arg1 ;
-(void)setPasswordManager:(id<_IDSPasswordManager>)arg1 ;
-(unsigned long long)_statusOfAccount:(id)arg1 ;
-(id)init;
-(void)_scheduleValidationAfter:(double)arg1 forAccountID:(id)arg2 allowFuzz:(BOOL)arg3 ;
-(void)accountController:(id)arg1 accountRemoved:(id)arg2 ;
-(void)removeDelegateForService:(unsigned long long)arg1 ;
-(void)_validateDelegateState;
-(double)signInTimeout;
-(NSMutableDictionary *)serviceNameAccountControllerMap;
-(NSMapTable *)delegateByServiceType;
-(void)setCTAdapter:(IDSCTAdapter *)arg1 ;
-(IDSCTAdapter *)CTAdapter;
-(void)_initializeStateMachineForAccountID:(id)arg1 service:(id)arg2 state:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)signInUsername:(id)arg1 onService:(unsigned long long)arg2 waitUntilRegistered:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)enableUserType:(unsigned long long)arg1 onService:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)accountIDDescriptionMap;
-(void)signOutService:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPasswordManager:(id)arg1 CTAdapter:(id)arg2 signInTimeout:(double)arg3 signInFuzz:(double)arg4 queue:(id)arg5 ;
-(void)setInitialStateByService:(NSMutableDictionary *)arg1 ;
-(id)_accountControllerForName:(id)arg1 ;
-(id)_accountWithUniqueID:(id)arg1 ;
-(BOOL)_actionOnAccountOfType:(unsigned long long)arg1 onService:(unsigned long long)arg2 actionBlock:(/*^block*/id)arg3 ;
-(id)_createAccountWithDictionary:(id)arg1 accountID:(id)arg2 serviceName:(id)arg3 ;
-(void)provideCredential:(id)arg1 forUser:(id)arg2 onService:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)signInUsername:(id)arg1 withProvidedCredential:(id)arg2 onService:(unsigned long long)arg3 waitUntilRegistered:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)setSignInTimeout:(double)arg1 ;
-(void)setDelegate:(id)arg1 forService:(unsigned long long)arg2 ;
-(BOOL)isiMessageEnabled;
-(void)disableUserType:(unsigned long long)arg1 onService:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setServiceNameAccountControllerMap:(NSMutableDictionary *)arg1 ;
-(void)setSignInFuzz:(double)arg1 ;
-(void)setListenerGUID:(NSString *)arg1 ;
-(void)accountController:(id)arg1 accountAdded:(id)arg2 ;
-(NSMutableDictionary *)initialStateByService;
-(BOOL)isFaceTimeEnabled;
-(NSString *)listenerGUID;
-(void)setSignInQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegateByServiceType:(NSMapTable *)arg1 ;
-(double)signInFuzz;
-(void)setAccountIDDescriptionMap:(NSMutableDictionary *)arg1 ;
-(unsigned long long)_serviceTypeForName:(id)arg1 ;
-(id)_createAccountControllerForService:(id)arg1 ;
-(void)accountController:(id)arg1 accountDisabled:(id)arg2 ;
-(void)_validateStateForAccountID:(id)arg1 timeoutMode:(unsigned long long)arg2 ;
-(void)_cleanupStateForAccountID:(id)arg1 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(id<_IDSPasswordManager>)passwordManager;
-(void)dealloc;
-(BOOL)_isServiceCurrentlyEnabled:(id)arg1 ;
-(id)_statusOfUsersOnService:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)signInQueue;
-(void)statusOfUsersOnService:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
@end
