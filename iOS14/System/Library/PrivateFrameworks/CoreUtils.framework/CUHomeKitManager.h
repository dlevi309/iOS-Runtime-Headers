/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/HMAccessoryDelegatePrivate.h>
#import <libobjc.A.dylib/HMHomeDelegate.h>
#import <libobjc.A.dylib/HMHomeDelegatePrivate.h>
#import <libobjc.A.dylib/HMHomeManagerDelegate.h>
#import <libobjc.A.dylib/HMHomeManagerDelegatePrivate.h>
#import <libobjc.A.dylib/HMMediaSystemDelegate.h>
#import <libobjc.A.dylib/HMUserDelegatePrivate.h>

@protocol OS_dispatch_queue;
@class HMHomeManager, NSMutableDictionary, NSUUID, HMUser, NSObject, NSString, NSArray, HMAccessory, NSDictionary, HMMediaSystem, HMMediaSystemRole;

@interface CUHomeKitManager : NSObject <HMAccessoryDelegatePrivate, HMHomeDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HMMediaSystemDelegate, HMUserDelegatePrivate> {

	int _homeKitPrefsNotifyToken;
	HMHomeManager* _homeManager;
	BOOL _homeManagerDidUpdateHomes;
	NSMutableDictionary* _homes;
	NSMutableDictionary* _resolvableAccessoriesMap;
	BOOL _selfAccessoryEnabled;
	NSUUID* _selfAccessoryRoomID;
	BOOL _selfAccessoryMediaAccessEnabled;
	BOOL _selfAccessoryMediaSystemEnabled;
	BOOL _selfAccessorySiriAccessEnabled;
	HMUser* _selfAccessoryUser;
	NSMutableDictionary* _users;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	BOOL _selfAccessorySiriEnabled;
	unsigned _flags;
	unsigned _state;
	unsigned _selfAccessoryMediaAccessFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _stateChangedHandler;
	NSArray* _resolvableAccessories;
	/*^block*/id _resolvableAccessoriesChangedHandler;
	HMAccessory* _selfAccessory;
	NSDictionary* _selfAccessoryAppData;
	/*^block*/id _selfAccessoryAppDataChangedHandler;
	/*^block*/id _selfAccessoryUpdatedHandler;
	NSString* _selfAccessoryMediaAccessPassword;
	/*^block*/id _selfAccessoryMediaAccessUpdatedHandler;
	HMMediaSystem* _selfAccessoryMediaSystem;
	HMAccessory* _selfAccessoryMediaSystemCounterpart;
	NSString* _selfAccessoryMediaSystemName;
	HMMediaSystemRole* _selfAccessoryMediaSystemRole;
	/*^block*/id _selfAccessoryMediaSystemUpdatedHandler;
	/*^block*/id _selfAccessorySiriAccessUpdatedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                       //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * label;                                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                             //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                             //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) unsigned state;                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangedHandler;                                             //@synthesize stateChangedHandler=_stateChangedHandler - In the implementation block
@property (nonatomic,copy,readonly) NSArray * resolvableAccessories;                           //@synthesize resolvableAccessories=_resolvableAccessories - In the implementation block
@property (nonatomic,copy) id resolvableAccessoriesChangedHandler;                             //@synthesize resolvableAccessoriesChangedHandler=_resolvableAccessoriesChangedHandler - In the implementation block
@property (nonatomic,readonly) HMAccessory * selfAccessory;                                    //@synthesize selfAccessory=_selfAccessory - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * selfAccessoryAppData;                       //@synthesize selfAccessoryAppData=_selfAccessoryAppData - In the implementation block
@property (nonatomic,copy) id selfAccessoryAppDataChangedHandler;                              //@synthesize selfAccessoryAppDataChangedHandler=_selfAccessoryAppDataChangedHandler - In the implementation block
@property (nonatomic,copy) id selfAccessoryUpdatedHandler;                                     //@synthesize selfAccessoryUpdatedHandler=_selfAccessoryUpdatedHandler - In the implementation block
@property (nonatomic,readonly) unsigned selfAccessoryMediaAccessFlags;                         //@synthesize selfAccessoryMediaAccessFlags=_selfAccessoryMediaAccessFlags - In the implementation block
@property (nonatomic,copy,readonly) NSString * selfAccessoryMediaAccessPassword;               //@synthesize selfAccessoryMediaAccessPassword=_selfAccessoryMediaAccessPassword - In the implementation block
@property (nonatomic,copy) id selfAccessoryMediaAccessUpdatedHandler;                          //@synthesize selfAccessoryMediaAccessUpdatedHandler=_selfAccessoryMediaAccessUpdatedHandler - In the implementation block
@property (nonatomic,readonly) HMMediaSystem * selfAccessoryMediaSystem;                       //@synthesize selfAccessoryMediaSystem=_selfAccessoryMediaSystem - In the implementation block
@property (nonatomic,readonly) HMAccessory * selfAccessoryMediaSystemCounterpart;              //@synthesize selfAccessoryMediaSystemCounterpart=_selfAccessoryMediaSystemCounterpart - In the implementation block
@property (nonatomic,copy) NSString * selfAccessoryMediaSystemName;                            //@synthesize selfAccessoryMediaSystemName=_selfAccessoryMediaSystemName - In the implementation block
@property (nonatomic,readonly) HMMediaSystemRole * selfAccessoryMediaSystemRole;               //@synthesize selfAccessoryMediaSystemRole=_selfAccessoryMediaSystemRole - In the implementation block
@property (nonatomic,copy) id selfAccessoryMediaSystemUpdatedHandler;                          //@synthesize selfAccessoryMediaSystemUpdatedHandler=_selfAccessoryMediaSystemUpdatedHandler - In the implementation block
@property (nonatomic,readonly) BOOL selfAccessorySiriEnabled;                                  //@synthesize selfAccessorySiriEnabled=_selfAccessorySiriEnabled - In the implementation block
@property (nonatomic,copy) id selfAccessorySiriAccessUpdatedHandler;                           //@synthesize selfAccessorySiriAccessUpdatedHandler=_selfAccessorySiriAccessUpdatedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateUsers;
-(void)setStateChangedHandler:(id)arg1 ;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(void)home:(id)arg1 didUpdateMediaPassword:(id)arg2 ;
-(BOOL)_isOwnerOfHome:(id)arg1 ;
-(void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2 ;
-(id)stateChangedHandler;
-(void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)_updateSelfAccessoryMediaSystem;
-(id)_bestUserAndLabel:(id*)arg1 ;
-(void)_updateAccessories;
-(id)_selfAccessoryMediaSystemUncached:(id*)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)selfAccessoryAppDataChangedHandler;
-(unsigned)flags;
-(void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)accessoryDidUpdateApplicationData:(id)arg1 ;
-(unsigned)selfAccessoryMediaAccessFlags;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)home:(id)arg1 didRemoveMediaSystem:(id)arg2 ;
-(NSString *)selfAccessoryMediaSystemName;
-(void)_findPairedPeerWithContext:(id)arg1 label:(id)arg2 pairingIdentity:(id)arg3 error:(id)arg4 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)setSelfAccessoryAppDataChangedHandler:(id)arg1 ;
-(void)setSelfAccessoryMediaAccessUpdatedHandler:(id)arg1 ;
-(NSArray *)resolvableAccessories;
-(void)_updateState;
-(void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)activate;
-(HMMediaSystemRole *)selfAccessoryMediaSystemRole;
-(void)_getPairingIdentityForAccessoryWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setSelfAccessoryMediaSystemName:(NSString *)arg1 ;
-(HMMediaSystem *)selfAccessoryMediaSystem;
-(void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3 ;
-(void)setResolvableAccessoriesChangedHandler:(id)arg1 ;
-(void)_updateSelfAccessoryMediaAccess;
-(id)selfAccessoryMediaAccessUpdatedHandler;
-(void)accessory:(id)arg1 didUpdateDevice:(id)arg2 ;
-(void)home:(id)arg1 didAddUser:(id)arg2 ;
-(void)_interrupted;
-(void)home:(id)arg1 didRemoveUser:(id)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)selfAccessoryUpdatedHandler;
-(void)_findPairedPeerWithContext:(id)arg1 ;
-(id)_cuPairingIdentityWithHMFPairingIdentity:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3 ;
-(void)_getPairingIdentityCompleted:(id)arg1 options:(unsigned long long)arg2 error:(id)arg3 label:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)mediaSystem:(id)arg1 didUpdateComponents:(id)arg2 ;
-(void)_invalidated;
-(NSDictionary *)selfAccessoryAppData;
-(void)_activateIfNeeded;
-(unsigned)state;
-(NSString *)selfAccessoryMediaAccessPassword;
-(void)invalidate;
-(void)_updateHomes;
-(void)_clearHomeKitState;
-(void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2 ;
-(void)setSelfAccessoryUpdatedHandler:(id)arg1 ;
-(HMAccessory *)selfAccessory;
-(void)setSelfAccessoryMediaSystemUpdatedHandler:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(BOOL)selfAccessorySiriEnabled;
-(id)selfAccessorySiriAccessUpdatedHandler;
-(id)resolvableAccessoriesChangedHandler;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(id)invalidationHandler;
-(void)setSelfAccessorySiriAccessUpdatedHandler:(id)arg1 ;
-(HMAccessory *)selfAccessoryMediaSystemCounterpart;
-(void)accessoryDidUpdatePairingIdentity:(id)arg1 ;
-(void)_updateSelfAccessoryIfNeeded;
-(void)_getPairingIdentityForUserWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)label;
-(void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(BOOL)arg2 ;
-(id)interruptionHandler;
-(void)dealloc;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1 ;
-(void)mediaSystem:(id)arg1 didUpdateName:(id)arg2 ;
-(void)home:(id)arg1 didAddMediaSystem:(id)arg2 ;
-(void)_updateSelfAccessorySiriAccess;
-(id)selfAccessoryMediaSystemUpdatedHandler;
@end

