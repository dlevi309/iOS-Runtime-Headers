/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDatabaseDelegate.h>
#import <libobjc.A.dylib/HMDCloudShareMessengerDelegate.h>
#import <libobjc.A.dylib/HMDCloudShareParticipantsManagerDelegate.h>

@protocol HMDDatabaseZoneManagerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDDatabase, HMBLocalZoneDelegateHMBCloudZoneDelegate, OS_dispatch_queue;
@class NSString, HMBLocalZone, HMBCloudZone, NSSet, HMBCloudZoneConfiguration, HMDHome, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, NSObject, NSUUID;

@interface HMDDatabaseZoneManager : HMFObject <HMFLogging, HMDDatabaseDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDelegate> {

	id<HMDDatabaseZoneManagerDelegate> _delegate;
	id<HMDCloudShareParticipantsManagerDataSource> _participantsManagerDataSource;
	NSString* _zoneName;
	HMBLocalZone* _localZone;
	HMBCloudZone* _cloudZone;
	NSSet* _externalRecordTypesForSubscriptions;
	HMBCloudZoneConfiguration* _cloudZoneConfiguration;
	long long _state;
	id<HMDDatabase> _database;
	HMDHome* _home;
	HMDCloudShareMessenger* _shareMessenger;
	HMDCloudShareParticipantsManager* _participantsManager;
	id<HMBLocalZoneDelegate><HMBCloudZoneDelegate> _zoneDelegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _participantsManagerFactory;

}

@property (assign) long long state;                                                                           //@synthesize state=_state - In the implementation block
@property (readonly) id<HMDDatabase> database;                                                                //@synthesize database=_database - In the implementation block
@property (readonly) HMDHome * home;                                                                          //@synthesize home=_home - In the implementation block
@property (readonly) HMDCloudShareMessenger * shareMessenger;                                                 //@synthesize shareMessenger=_shareMessenger - In the implementation block
@property (retain) HMDCloudShareParticipantsManager * participantsManager;                                    //@synthesize participantsManager=_participantsManager - In the implementation block
@property (retain) HMBLocalZone * localZone;                                                                  //@synthesize localZone=_localZone - In the implementation block
@property (retain) HMBCloudZone * cloudZone;                                                                  //@synthesize cloudZone=_cloudZone - In the implementation block
@property (__weak,readonly) id<HMBLocalZoneDelegate><HMBCloudZoneDelegate> zoneDelegate;                      //@synthesize zoneDelegate=_zoneDelegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                                                    //@synthesize workQueue=_workQueue - In the implementation block
@property (copy) id participantsManagerFactory;                                                               //@synthesize participantsManagerFactory=_participantsManagerFactory - In the implementation block
@property (__weak) id<HMDDatabaseZoneManagerDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<HMDCloudShareParticipantsManagerDataSource> participantsManagerDataSource;              //@synthesize participantsManagerDataSource=_participantsManagerDataSource - In the implementation block
@property (copy,readonly) NSString * containerIdentifier; 
@property (copy,readonly) NSString * zoneName;                                                                //@synthesize zoneName=_zoneName - In the implementation block
@property (copy,readonly) NSUUID * messageTargetUUID; 
@property (getter=isOwnerUser,readonly) BOOL ownerUser; 
@property (copy) NSSet * externalRecordTypesForSubscriptions;                                                 //@synthesize externalRecordTypesForSubscriptions=_externalRecordTypesForSubscriptions - In the implementation block
@property (copy) HMBCloudZoneConfiguration * cloudZoneConfiguration;                                          //@synthesize cloudZoneConfiguration=_cloudZoneConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDDatabaseZoneManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDDatabaseZoneManagerDelegate>)arg1 ;
-(void)start;
-(long long)state;
-(id)remove;
-(void)setState:(long long)arg1 ;
-(id<HMDDatabase>)database;
-(NSString *)containerIdentifier;
-(NSString *)zoneName;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHome *)home;
-(void)configure;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(BOOL)isOwnerUser;
-(HMBLocalZone *)localZone;
-(HMBCloudZone *)cloudZone;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(HMDCloudShareParticipantsManager *)participantsManager;
-(void)updateShareParticipants;
-(HMDCloudShareMessenger *)shareMessenger;
-(void)setParticipantsManager:(HMDCloudShareParticipantsManager *)arg1 ;
-(void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3 ;
-(void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)messengerDidReceiveInvitationRequest:(id)arg1 ;
-(void)database:(id)arg1 didCreateZoneWithName:(id)arg2 ;
-(void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 ;
-(void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2 ;
-(id)participantsManagerFactory;
-(void)setParticipantsManagerFactory:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 shareMessenger:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6 ;
-(HMBCloudZoneConfiguration *)cloudZoneConfiguration;
-(id<HMBLocalZoneDelegate><HMBCloudZoneDelegate>)zoneDelegate;
-(NSSet *)externalRecordTypesForSubscriptions;
-(void)_tearDownState;
-(id<HMDCloudShareParticipantsManagerDataSource>)participantsManagerDataSource;
-(id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 messageTargetUUID:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6 ;
-(void)setParticipantsManagerDataSource:(id<HMDCloudShareParticipantsManagerDataSource>)arg1 ;
-(void)setExternalRecordTypesForSubscriptions:(NSSet *)arg1 ;
-(void)setCloudZoneConfiguration:(HMBCloudZoneConfiguration *)arg1 ;
@end

