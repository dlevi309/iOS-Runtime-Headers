/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDAssistantAccessControlModelUpdateReceiver.h>
#import <libobjc.A.dylib/HMDMediaContentProfileAccessControlModelUpdateReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue, HMDUserDataControllerDelegate, HMDUserDataControllerTimerCreator, HMDSettingsControllerProtocol;
@class HMFUnfairLock, NSUUID, NSObject, NSMutableSet, HMFTimer, NSArray, NSDictionary, HMBModel, NSString;

@interface HMDUserDataController : NSObject <HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMFLogging, HMFTimerDelegate> {

	BOOL _isModifyingState;
	BOOL _assistantAccessControlRequiresAuthenticationForSecureRequests;
	unsigned long long _state;
	HMFUnfairLock* _lock;
	NSUUID* _homeUUID;
	NSUUID* _userUUID;
	NSObject*<OS_dispatch_queue> _clientQueue;
	id<HMDUserDataControllerDelegate> _delegate;
	id<HMDUserDataControllerTimerCreator> _timerCreator;
	NSUUID* _sharedSettingsRootUUID;
	NSUUID* _assistantAccessControlModelUUID;
	NSMutableSet* _assistantAccessControlAccessoryUUIDs;
	NSUUID* _mediaContentProfileAccessControlModelUUID;
	NSMutableSet* _mediaContentProfileAccessControlAccessories;
	NSUUID* _privateSettingsRootUUID;
	HMFTimer* _sharedZoneFirstLoadTimer;
	HMFTimer* _privateZoneFirstLoadTimer;
	id<HMDSettingsControllerProtocol> _sharedSettingsController;
	id<HMDSettingsControllerProtocol> _privateSettingsController;

}

@property (readonly) HMFUnfairLock * lock;                                                            //@synthesize lock=_lock - In the implementation block
@property (readonly) NSUUID * homeUUID;                                                               //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) NSUUID * userUUID;                                                               //@synthesize userUUID=_userUUID - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> clientQueue;                                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (__weak,readonly) id<HMDUserDataControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) id<HMDUserDataControllerTimerCreator> timerCreator;                              //@synthesize timerCreator=_timerCreator - In the implementation block
@property (retain) NSUUID * sharedSettingsRootUUID;                                                   //@synthesize sharedSettingsRootUUID=_sharedSettingsRootUUID - In the implementation block
@property (retain) NSUUID * assistantAccessControlModelUUID;                                          //@synthesize assistantAccessControlModelUUID=_assistantAccessControlModelUUID - In the implementation block
@property (retain) NSMutableSet * assistantAccessControlAccessoryUUIDs;                               //@synthesize assistantAccessControlAccessoryUUIDs=_assistantAccessControlAccessoryUUIDs - In the implementation block
@property (assign) BOOL assistantAccessControlRequiresAuthenticationForSecureRequests;                //@synthesize assistantAccessControlRequiresAuthenticationForSecureRequests=_assistantAccessControlRequiresAuthenticationForSecureRequests - In the implementation block
@property (retain) NSUUID * mediaContentProfileAccessControlModelUUID;                                //@synthesize mediaContentProfileAccessControlModelUUID=_mediaContentProfileAccessControlModelUUID - In the implementation block
@property (retain) NSMutableSet * mediaContentProfileAccessControlAccessories;                        //@synthesize mediaContentProfileAccessControlAccessories=_mediaContentProfileAccessControlAccessories - In the implementation block
@property (retain) NSUUID * privateSettingsRootUUID;                                                  //@synthesize privateSettingsRootUUID=_privateSettingsRootUUID - In the implementation block
@property (assign) unsigned long long state;                                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HMFTimer * sharedZoneFirstLoadTimer;                                     //@synthesize sharedZoneFirstLoadTimer=_sharedZoneFirstLoadTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * privateZoneFirstLoadTimer;                                    //@synthesize privateZoneFirstLoadTimer=_privateZoneFirstLoadTimer - In the implementation block
@property (readonly) id<HMDSettingsControllerProtocol> sharedSettingsController;                      //@synthesize sharedSettingsController=_sharedSettingsController - In the implementation block
@property (readonly) id<HMDSettingsControllerProtocol> privateSettingsController;                     //@synthesize privateSettingsController=_privateSettingsController - In the implementation block
@property (copy,readonly) NSArray * assistantAccessControlAccessoriesToEncode; 
@property (copy,readonly) NSArray * mediaContentProfileAccessControlAccessoriesToEncode; 
@property (copy,readonly) NSDictionary * sharedSettingValuesByKeyPathForAWD; 
@property (copy,readonly) NSDictionary * privateSettingValuesByKeyPathForAWD; 
@property (copy,readonly) HMBModel * assistantAccessControlModelToReset; 
@property (readonly) BOOL isInitialized; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)isInitialized;
-(NSUUID *)homeUUID;
-(void)timerDidFire:(id)arg1 ;
-(void)configure;
-(id<HMDUserDataControllerDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(HMFUnfairLock *)lock;
-(id)logIdentifier;
-(NSUUID *)userUUID;
-(void)setState:(unsigned long long)arg1 ;
-(id<HMDSettingsControllerProtocol>)privateSettingsController;
-(unsigned long long)state;
-(void)handleRemovedAccessory:(id)arg1 ;
-(NSDictionary *)privateSettingValuesByKeyPathForAWD;
-(NSDictionary *)sharedSettingValuesByKeyPathForAWD;
-(void)assistantAccessControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)mediaContentProfileAccessControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSUUID *)assistantAccessControlModelUUID;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6 timerCreator:(id)arg7 ;
-(NSMutableSet *)assistantAccessControlAccessoryUUIDs;
-(NSMutableSet *)mediaContentProfileAccessControlAccessories;
-(id<HMDSettingsControllerProtocol>)sharedSettingsController;
-(void)setAssistantAccessControlModelUUID:(NSUUID *)arg1 ;
-(NSUUID *)mediaContentProfileAccessControlModelUUID;
-(void)setMediaContentProfileAccessControlModelUUID:(NSUUID *)arg1 ;
-(void)setSharedSettingsRootUUID:(NSUUID *)arg1 ;
-(void)setAssistantAccessControlAccessoryUUIDs:(NSMutableSet *)arg1 ;
-(void)setAssistantAccessControlRequiresAuthenticationForSecureRequests:(BOOL)arg1 ;
-(void)setMediaContentProfileAccessControlAccessories:(NSMutableSet *)arg1 ;
-(void)eventDidInitializeSharedZone;
-(void)setPrivateSettingsRootUUID:(NSUUID *)arg1 ;
-(void)eventDidInitializePrivateZone;
-(void)initializeSharedZoneController:(id)arg1 userDataModel:(id)arg2 ;
-(void)_invalidateSharedZoneFirstLoadTimer;
-(void)_startSharedZoneFirstLoadTimer;
-(HMFTimer *)sharedZoneFirstLoadTimer;
-(id<HMDUserDataControllerTimerCreator>)timerCreator;
-(void)setSharedZoneFirstLoadTimer:(HMFTimer *)arg1 ;
-(void)initializePrivateZoneController:(id)arg1 userDataModel:(id)arg2 ;
-(void)_invalidatePrivateZoneFirstLoadTimer;
-(void)_startPrivateZoneFirstLoadTimer;
-(HMFTimer *)privateZoneFirstLoadTimer;
-(void)setPrivateZoneFirstLoadTimer:(HMFTimer *)arg1 ;
-(void)performFirstRunOperationsOnSharedZoneController:(id)arg1 ;
-(void)performFirstRunOperationsOnPrivateZoneController:(id)arg1 ;
-(void)_startupSharedZone;
-(void)_startupPrivateZone;
-(BOOL)assistantAccessControlRequiresAuthenticationForSecureRequests;
-(void)assistantAccessControlModelRemoved:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mediaContentProfileAccessControlModelRemoved:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6 ;
-(NSArray *)assistantAccessControlAccessoriesToEncode;
-(NSArray *)mediaContentProfileAccessControlAccessoriesToEncode;
-(void)handleStartForZoneController:(id)arg1 ;
-(void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg1 requireAuthenticationForSecureRequests:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMBModel *)assistantAccessControlModelToReset;
-(NSUUID *)sharedSettingsRootUUID;
-(NSUUID *)privateSettingsRootUUID;
@end

