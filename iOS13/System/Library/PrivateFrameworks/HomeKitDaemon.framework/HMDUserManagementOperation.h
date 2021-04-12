/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMDUserManagementOperationDelegate, OS_dispatch_queue;
@class NSMutableArray, HMDUserManagementOperationManager, NSUUID, HMDUser, HMDAccessory, NSDate, HAPPairingIdentity, NSObject, HMFTimer, HMDAccessoryInvitation, NSDictionary, NSArray, NSString;

@interface HMDUserManagementOperation : HMFObject <HMFTimerDelegate, NSSecureCoding> {

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
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFTimer* _expirationTimer;
	double _backoffInterval;
	HMFTimer* _backoffTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                                 //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) HMFTimer * expirationTimer;                                      //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) HMDUserManagementOperationManager * operationManager;              //@synthesize operationManager=_operationManager - In the implementation block
@property (nonatomic,readonly) double backoffInterval;                                          //@synthesize backoffInterval=_backoffInterval - In the implementation block
@property (nonatomic,retain) HMFTimer * backoffTimer;                                           //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (assign,getter=isBackingOff,nonatomic) BOOL backingOff;                               //@synthesize backingOff=_backingOff - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HMDAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
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
+(id)addUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 model:(id)arg3 ;
+(id)removeUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 model:(id)arg3 ;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(HMDUser *)user;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMDUserManagementOperationDelegate>)delegate;
-(void)setDelegate:(id<HMDUserManagementOperationDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(NSArray *)dependencies;
-(void)addDependency:(id)arg1 ;
-(unsigned long long)state;
-(NSDate *)expirationDate;
-(BOOL)_isFinished;
-(unsigned long long)operationType;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setState:(unsigned long long)arg1 ;
-(id)shortDescription;
-(BOOL)isExpired;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setExecuting:(BOOL)arg1 ;
-(HMDAccessory *)accessory;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HMFTimer *)backoffTimer;
-(void)setBackoffTimer:(HMFTimer *)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(NSDictionary *)accessoryInvitationInformation;
-(HMDAccessoryInvitation *)accessoryInvitation;
-(id)dictionaryEncoding;
-(void)executeWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOwnerPairingIdentity:(HAPPairingIdentity *)arg1 ;
-(HMFTimer *)expirationTimer;
-(void)setOperationManager:(HMDUserManagementOperationManager *)arg1 ;
-(id)initWithOperationType:(unsigned long long)arg1 identifier:(id)arg2 user:(id)arg3 accessory:(id)arg4 expiration:(id)arg5 ;
-(void)_setupExpirationTimer;
-(BOOL)isBackingOff;
-(HMDUserManagementOperationManager *)operationManager;
-(double)backoffInterval;
-(double)nextBackoffInterval;
-(void)setBackingOff:(BOOL)arg1 ;
-(void)setLastOperationFailed:(BOOL)arg1 ;
-(void)_startBackoffTimer;
-(void)_addPairingToHAPAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removePairingFromHAPAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)lastOperationFailed;
-(long long)_accessoryInvitationState;
-(HAPPairingIdentity *)ownerPairingIdentity;
-(void)_endBackoffTimer;
-(BOOL)mergeWithOperation:(id)arg1 ;
@end

