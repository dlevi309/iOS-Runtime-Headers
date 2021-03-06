/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBLocalDatabaseDelegate.h>
#import <libobjc.A.dylib/HMBCloudDatabaseDelegate.h>
#import <libobjc.A.dylib/HMDDatabaseZoneDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDatabase.h>
@class HMBCloudDatabase, HMBLocalDatabase;


@protocol HMDDatabase <NSObject>
@property (readonly) HMBCloudDatabase * cloudDatabase; 
@property (readonly) HMBLocalDatabase * localDatabase; 
@required
-(void)addDelegate:(id)arg1;
-(void)removeDelegate:(id)arg1;
-(id)registerSharedSubscriptionForExternalRecordType:(id)arg1;
-(void)start;
-(id)declineInvitation:(id)arg1;
-(id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;
-(id)acceptInvitation:(id)arg1;
-(HMBLocalDatabase *)localDatabase;
-(HMBCloudDatabase *)cloudDatabase;
-(id)removePrivateZonesWithName:(id)arg1;
-(id)removeSharedZonesWithName:(id)arg1;
-(id)privateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
-(id)existingSharedZoneIDWithName:(id)arg1;
-(id)sharedZonesWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
-(id)removeLocalAndCloudDataForLocalZone:(id)arg1;
-(id)existingPrivateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;

@end


@class HMBCloudDatabase, HMBLocalDatabase, NSHashTable, NSMapTable, HMFUnfairLock, HMDLogEventDispatcher, NSString;

@interface HMDDatabase : HMFObject <HMBLocalDatabaseDelegate, HMBCloudDatabaseDelegate, HMDDatabaseZoneDelegate, HMFLogging, HMDDatabase> {

	BOOL _hasStarted;
	HMBLocalDatabase* _localDatabase;
	HMBCloudDatabase* _cloudDatabase;
	NSHashTable* _delegates;
	NSMapTable* _zoneDelegatesByLocalZone;
	HMFUnfairLock* _lock;
	HMDLogEventDispatcher* _logEventDispatcher;

}

@property (readonly) HMFUnfairLock * lock;                                    //@synthesize lock=_lock - In the implementation block
@property (readonly) NSHashTable * delegates;                                 //@synthesize delegates=_delegates - In the implementation block
@property (readonly) NSMapTable * zoneDelegatesByLocalZone;                   //@synthesize zoneDelegatesByLocalZone=_zoneDelegatesByLocalZone - In the implementation block
@property (readonly) HMDLogEventDispatcher * logEventDispatcher;              //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
@property (assign) BOOL hasStarted;                                           //@synthesize hasStarted=_hasStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HMBCloudDatabase * cloudDatabase;                        //@synthesize cloudDatabase=_cloudDatabase - In the implementation block
@property (readonly) HMBLocalDatabase * localDatabase;                        //@synthesize localDatabase=_localDatabase - In the implementation block
+(id)logCategory;
+(id)defaultDatabase;
+(id)cameraClipsDatabase;
+(id)defaultLocalDatabaseFileURL;
-(NSHashTable *)delegates;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)registerSharedSubscriptionForExternalRecordType:(id)arg1 ;
-(void)start;
-(void)setHasStarted:(BOOL)arg1 ;
-(HMFUnfairLock *)lock;
-(id)declineInvitation:(id)arg1 ;
-(id)logIdentifier;
-(BOOL)hasStarted;
-(id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1 ;
-(id)acceptInvitation:(id)arg1 ;
-(void)performDelegateCallback:(/*^block*/id)arg1 ;
-(HMBLocalDatabase *)localDatabase;
-(HMBCloudDatabase *)cloudDatabase;
-(void)localZone:(id)arg1 didCompleteProcessingWithResult:(id)arg2 ;
-(void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onZone:(id)arg4 ;
-(void)cloudZone:(id)arg1 didChangeRebuildStatus:(id)arg2 ;
-(void)localDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2 ;
-(void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2 ;
-(void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2 ;
-(id)cloudDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2 ;
-(void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onContainer:(id)arg4 ;
-(void)cloudDatabase:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2 ;
-(BOOL)localDatabaseShouldLogPrivateInformation:(id)arg1 ;
-(void)localDatabase:(id)arg1 detectedLocalCorruptionWithInfo:(id)arg2 ;
-(void)cloudZone:(id)arg1 didRemoveParticipantWithClientIdentifier:(id)arg2 ;
-(id)removePrivateZonesWithName:(id)arg1 ;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(id)removeSharedZonesWithName:(id)arg1 ;
-(id)privateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)existingSharedZoneIDWithName:(id)arg1 ;
-(id)sharedZonesWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)removeLocalAndCloudDataForLocalZone:(id)arg1 ;
-(id)existingPrivateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)initWithFileURL:(id)arg1 cloudContainerIdentifier:(id)arg2 cloudContainerSourceApplicationBundleIdentifier:(id)arg3 ;
-(id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 logEventDispatcher:(id)arg3 ;
-(id)zonesWithID:(id)arg1 isPrivate:(BOOL)arg2 shouldCreate:(BOOL)arg3 configuration:(id)arg4 delegate:(id)arg5 error:(id*)arg6 ;
-(id)removeZonesWithID:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)addZoneDelegate:(id)arg1 forLocalZone:(id)arg2 ;
-(NSMapTable *)zoneDelegatesByLocalZone;
-(void)performZoneDelegateCallback:(/*^block*/id)arg1 forLocalZone:(id)arg2 ;
-(void)removeZoneDelegate:(id)arg1 forLocalZone:(id)arg2 ;
-(id)mergedActionFutureForActionFutures:(id)arg1 ;
@end

