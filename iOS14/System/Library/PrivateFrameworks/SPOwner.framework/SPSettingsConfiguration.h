/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,copy,readonly) NSUUID * baUUID; 
@property (nonatomic,copy,readonly) NSString * serviceState; 
@property (nonatomic,copy,readonly) NSSet * serviceDisabledReasons; 
@property (nonatomic,copy,readonly) NSDate * beaconZoneCreationDate; 
@property (nonatomic,copy,readonly) NSNumber * beaconZoneCreationErrorCode; 
@property (nonatomic,copy,readonly) NSDate * lastKeyRollDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)setNotificationQueue:(NSOperationQueue *)arg1 ;
-(void)setProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)userAgentProxy;
-(void)_invalidate;
-(id<SPBeaconManagerXPCProtocol>)proxy;
-(id)init;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(NSUserDefaults *)sharedDefaults;
-(FMXPCServiceDescription *)serviceDescription;
-(NSUUID *)baUUID;
-(FMXPCSession *)session;
-(NSOperationQueue *)notificationQueue;
-(void)setServiceState:(NSString *)arg1 ;
-(void)setSession:(FMXPCSession *)arg1 ;
-(NSDate *)beaconZoneCreationDate;
-(NSNumber *)beaconZoneCreationErrorCode;
-(NSDate *)lastKeyRollDate;
-(id)serviceSettingsConfiguration;
-(NSSet *)serviceDisabledReasons;
-(void)setServiceState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSharedDefaults:(NSUserDefaults *)arg1 ;
-(id)serviceSettingsChangedNotificationToken;
-(void)setServiceSettingsChangedNotificationToken:(id)arg1 ;
-(void)beginRefreshingServiceStateWithBlock:(/*^block*/id)arg1 ;
-(void)setServiceDisabledReasons:(NSSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setUserAgentProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(NSString *)serviceState;
@end

