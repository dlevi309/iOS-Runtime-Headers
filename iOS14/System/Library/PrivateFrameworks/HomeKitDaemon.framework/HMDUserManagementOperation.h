/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMFLocking, HMDUserManagementOperationDelegate, OS_dispatch_queue;
@class NSMutableArray, HMDUserManagementOperationManager, NSUUID, HMDUser, HMDAccessory, NSDate, HAPPairingIdentity, NSObject, HMFTimer, NSArray, HMDAccessoryInvitation, NSDictionary, NSString;

@interface HMDUserManagementOperation : HMFObject <HMFTimerDelegate, NSSecureCoding> {

	id<HMFLocking> _lock;
	NSMutableArray* _dependencies;
	BOOL _executing;
	BOOL _backingOff;
	BOOL _lastOperationFailed;
	unsigned long long _state;
	HMDUserManagementOperationManager* _operationManager;
	id<HMDUserManagementOperationDelegate> _delegate;
	NSUUID* _identifier;
	unsigned long long _operationType;
	HMDUser* _user;
	HMDAccessory* _accessory;
	NSDate* _expirationDate;
	HAPPairingIdentity* _ownerPairingIdentity;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMFTimer* _expirationTimer;
	double _backoffInterval;
	HMFTimer* _backoffTimer;
	NSArray* _auditUsersToBeAdded;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                                 //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) HMFTimer * expirationTimer;                                      //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) HMDUserManagementOperationManager * operationManager;              //@synthesize operationManager=_operationManager - In the implementation block
@property (nonatomic,readonly) double backoffInterval;                                          //@synthesize backoffInterval=_backoffInterval - In the implementation block
@property (nonatomic,retain) HMFTimer * backoffTimer;                                           //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (assign,getter=isBackingOff,nonatomic) BOOL backingOff;                               //@synthesize backingOff=_backingOff - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HMDAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (getter=isAddOperation,nonatomic,readonly) BOOL addOperation; 
@property (getter=isRemoveOperation,nonatomic,readonly) BOOL removeOperation; 
@property (getter=isAuditOperation,nonatomic,readonly) BOOL auditOperation; 
@property (nonatomic,retain) NSArray * auditUsersToBeAdded;                                     //@synthesize auditUsersToBeAdded=_auditUsersToBeAdded - In the implementation block
@property (assign,nonatomic) BOOL lastOperationFailed;                                          //@synthesize lastOperationFailed=_lastOperationFailed - In the implementation block
@property (nonatomic,readonly) HMDAccessoryInvitation * accessoryInvitation; 
@property (nonatomic,readonly) NSDictionary * accessoryInvitationInformation; 
@property (__weak) id<HMDUserManagementOperationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long operationType;                                //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) HMDUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (nonatomic,copy) HAPPairingIdentity * ownerPairingIdentity;                           //@synthesize ownerPairingIdentity=_ownerPairingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)operationWithDictionary:(id)arg1 home:(id)arg2 ;
+(id)auditUserManagementOperationAccessory:(id)arg1 model:(id)arg2 ;
+(id)addUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 model:(id)arg3 ;
+(id)removeUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 model:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(unsigned long long)operationType;
-(void)timerDidFire:(id)arg1 ;
-(id)init;
-(id<HMDUserManagementOperationDelegate>)delegate;
-(BOOL)_isFinished;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSString *)debugDescription;
-(HMDAccessory *)accessory;
-(NSArray *)dependencies;
-(BOOL)isFinished;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setDelegate:(id<HMDUserManagementOperationDelegate>)arg1 ;
-(NSString *)description;
-(HMFTimer *)backoffTimer;
-(BOOL)isValid;
-(void)addDependency:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isReady;
-(BOOL)isExpired;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(HMDUser *)user;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isExecuting;
-(unsigned long long)state;
-(NSUUID *)identifier;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setOperationManager:(HMDUserManagementOperationManager *)arg1 ;
-(HMDUserManagementOperationManager *)operationManager;
-(void)setBackoffTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)expirationTimer;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(NSDictionary *)accessoryInvitationInformation;
-(HMDAccessoryInvitation *)accessoryInvitation;
-(id)dictionaryEncoding;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 parentUUID:(id)arg2 ;
-(void)executeWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOwnerPairingIdentity:(HAPPairingIdentity *)arg1 ;
-(BOOL)isAuditOperation;
-(NSArray *)auditUsersToBeAdded;
-(BOOL)isAddOperation;
-(void)populateModelObjectWithChangeType:(id)arg1 version:(long long)arg2 ;
-(id)initWithOperationType:(unsigned long long)arg1 identifier:(id)arg2 user:(id)arg3 accessory:(id)arg4 expiration:(id)arg5 ;
-(void)_setupExpirationTimer;
-(BOOL)isBackingOff;
-(double)backoffInterval;
-(double)nextBackoffInterval;
-(void)setBackingOff:(BOOL)arg1 ;
-(void)setLastOperationFailed:(BOOL)arg1 ;
-(void)_startBackoffTimer;
-(void)_addPairingToHAPAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removePairingFromHAPAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_auditPairingsForHAPAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_findConflictingAccessory:(id)arg1 ;
-(void)setAuditUsersToBeAdded:(NSArray *)arg1 ;
-(BOOL)lastOperationFailed;
-(long long)_accessoryInvitationState;
-(HAPPairingIdentity *)ownerPairingIdentity;
-(void)_endBackoffTimer;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 parentUUID:(id)arg2 ;
-(BOOL)isRemoveOperation;
-(void)updateDelegate:(id)arg1 ;
-(BOOL)mergeWithOperation:(id)arg1 ;
@end

