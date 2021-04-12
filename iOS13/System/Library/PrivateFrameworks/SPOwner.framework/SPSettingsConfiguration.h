/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPFMIPRegisterInfo.h>
#import <SPOwner/SPSettingsConfigurating.h>

@protocol SPBeaconManagerXPCProtocol, OS_dispatch_queue;
@class NSUUID, NSString, NSSet, NSDate, NSNumber, NSUserDefaults, FMXPCServiceDescription, FMXPCSession, NSOperationQueue, NSObject;

@interface SPSettingsConfiguration : NSObject <SPFMIPRegisterInfo, SPSettingsConfigurating> {

	NSUserDefaults* _sharedDefaults;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPBeaconManagerXPCProtocol> _proxy;
	id<SPBeaconManagerXPCProtocol> _userAgentProxy;
	id _serviceSettingsChangedNotificationToken;
	NSOperationQueue* _notificationQueue;
	NSString* _serviceState;
	NSSet* _serviceDisabledReasons;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * baUUID; 
@property (nonatomic,copy,readonly) NSString * serviceState; 
@property (nonatomic,copy,readonly) NSSet * serviceDisabledReasons; 
@property (nonatomic,copy,readonly) NSDate * beaconZoneCreationDate; 
@property (nonatomic,copy,readonly) NSNumber * beaconZoneCreationErrorCode; 
@property (nonatomic,copy,readonly) NSDate * lastKeyRollDate; 
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;                   //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> proxy;                           //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> userAgentProxy;                  //@synthesize userAgentProxy=_userAgentProxy - In the implementation block
@property (assign,nonatomic,__weak) id serviceSettingsChangedNotificationToken;              //@synthesize serviceSettingsChangedNotificationToken=_serviceSettingsChangedNotificationToken - In the implementation block
@property (nonatomic,retain) NSOperationQueue * notificationQueue;                           //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,retain) NSUserDefaults * sharedDefaults;                                //@synthesize sharedDefaults=_sharedDefaults - In the implementation block
@property (nonatomic,copy) NSString * serviceState;                                          //@synthesize serviceState=_serviceState - In the implementation block
@property (nonatomic,copy) NSSet * serviceDisabledReasons;                                   //@synthesize serviceDisabledReasons=_serviceDisabledReasons - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(FMXPCSession *)session;
-(void)setSession:(FMXPCSession *)arg1 ;
-(NSOperationQueue *)notificationQueue;
-(void)setProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)proxy;
-(NSUserDefaults *)sharedDefaults;
-(FMXPCServiceDescription *)serviceDescription;
-(void)setNotificationQueue:(NSOperationQueue *)arg1 ;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(NSUUID *)baUUID;
-(NSDate *)beaconZoneCreationDate;
-(NSNumber *)beaconZoneCreationErrorCode;
-(NSDate *)lastKeyRollDate;
-(id)serviceSettingsConfiguration;
-(NSString *)serviceState;
-(NSSet *)serviceDisabledReasons;
-(id<SPBeaconManagerXPCProtocol>)userAgentProxy;
-(void)setUserAgentProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(void)setServiceState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)serviceSettingsChangedNotificationToken;
-(void)setServiceSettingsChangedNotificationToken:(id)arg1 ;
-(void)beginRefreshingServiceStateWithBlock:(/*^block*/id)arg1 ;
-(void)setSharedDefaults:(NSUserDefaults *)arg1 ;
-(void)setServiceState:(NSString *)arg1 ;
-(void)setServiceDisabledReasons:(NSSet *)arg1 ;
@end

