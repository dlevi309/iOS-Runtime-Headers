/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSString;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	BOOL _homeEnabled;
	BOOL _keychainSyncEnabled;
	BOOL _managed;
	BOOL _ephemeral;
	BOOL _migrated;
	int _circleChangedNotificationToken;
	int _viewMembershipChangedNotificationToken;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEducationMode,readonly) BOOL educationMode; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                 //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,nonatomic) BOOL migrated;                                              //@synthesize migrated=_migrated - In the implementation block
@property (assign,nonatomic) int circleChangedNotificationToken;                         //@synthesize circleChangedNotificationToken=_circleChangedNotificationToken - In the implementation block
@property (assign,nonatomic) int viewMembershipChangedNotificationToken;                 //@synthesize viewMembershipChangedNotificationToken=_viewMembershipChangedNotificationToken - In the implementation block
@property (getter=isHomeEnabled,readonly) BOOL homeEnabled;                              //@synthesize homeEnabled=_homeEnabled - In the implementation block
@property (getter=isKeychainSyncEnabled,readonly) BOOL keychainSyncEnabled;              //@synthesize keychainSyncEnabled=_keychainSyncEnabled - In the implementation block
@property (getter=isManaged,readonly) BOOL managed;                                      //@synthesize managed=_managed - In the implementation block
@property (getter=isEphemeral,readonly) BOOL ephemeral;                                  //@synthesize ephemeral=_ephemeral - In the implementation block
+(id)logCategory;
+(id)sharedSettings;
+(BOOL)supportsCloudSettings;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)isManaged;
-(id)init;
-(void)__synchronize;
-(BOOL)isEphemeral;
-(void)synchronize;
-(id)attributeDescriptions;
-(BOOL)isKeychainSyncEnabled;
-(void)dealloc;
-(BOOL)isHomeEnabled;
-(BOOL)isEducationMode;
-(int)circleChangedNotificationToken;
-(int)viewMembershipChangedNotificationToken;
-(void)_notifyClientsOfUpdatedHomeState:(BOOL)arg1 userInitiated:(BOOL)arg2 ;
-(BOOL)migrated;
-(void)__migrateHomePreferences;
-(void)__registerForKeychainChangeNotifications;
-(void)_notifyClientsOfUpdatedKeychainSyncState:(BOOL)arg1 ;
-(void)__updateHomeEnabled:(BOOL)arg1 userInitiated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setMigrated:(BOOL)arg1 ;
-(void)enableHome:(BOOL)arg1 userInitiated:(BOOL)arg2 ;
-(void)updateHomeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCircleChangedNotificationToken:(int)arg1 ;
-(void)setViewMembershipChangedNotificationToken:(int)arg1 ;
@end

