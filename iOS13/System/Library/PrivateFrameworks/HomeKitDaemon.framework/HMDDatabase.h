/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)start;
-(void)addDelegate:(id)arg1;
-(void)removeDelegate:(id)arg1;
-(id)acceptInvitation:(id)arg1;
-(id)declineInvitation:(id)arg1;
-(HMBCloudDatabase *)cloudDatabase;
-(HMBLocalDatabase *)localDatabase;
-(id)registerSharedSubscriptionForExternalRecordType:(id)arg1;
-(id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;
-(id)removeOwnedZonesWithName:(id)arg1;
-(id)removeSharedZonesWithName:(id)arg1;
-(id)ownedZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
-(id)existingSharedZoneIDWithName:(id)arg1;
-(id)sharedZonesWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
-(id)removeLocalAndCloudDataForLocalZone:(id)arg1;

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
-(HMFUnfairLock *)lock;
-(void)start;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(BOOL)hasStarted;
-(void)setHasStarted:(BOOL)arg1 ;
-(id)acceptInvitation:(id)arg1 ;
-(id)declineInvitation:(id)arg1 ;
-(NSHashTable *)delegates;
-(id)logIdentifier;
-(void)performDelegateCallback:(/*^block*/id)arg1 ;
-(HMBCloudDatabase *)cloudDatabase;
-(HMBLocalDatabase *)localDatabase;
-(void)localZone:(id)arg1 didCompleteProcessingWithResult:(id)arg2 ;
-(void)localDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2 ;
-(void)cloudDatabase:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2 ;
-(void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2 ;
-(void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2 ;
-(id)cloudDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2 ;
-(BOOL)localDatabaseShouldLogPrivateInformation:(id)arg1 ;
-(void)localDatabase:(id)arg1 detectedLocalCorruptionWithInfo:(id)arg2 ;
-(id)registerSharedSubscriptionForExternalRecordType:(id)arg1 ;
-(id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1 ;
-(id)removeOwnedZonesWithName:(id)arg1 ;
-(id)removeSharedZonesWithName:(id)arg1 ;
-(id)ownedZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)existingSharedZoneIDWithName:(id)arg1 ;
-(id)sharedZonesWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)removeLocalAndCloudDataForLocalZone:(id)arg1 ;
-(id)initWithCloudContainerIdentifier:(id)arg1 cloudContainerSourceApplicationBundleIdentifier:(id)arg2 ;
-(id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 logEventDispatcher:(id)arg3 ;
-(id)zonesWithID:(id)arg1 isOwned:(BOOL)arg2 configuration:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(id)removeZonesWithID:(id)arg1 isOwned:(BOOL)arg2 ;
-(void)addZoneDelegate:(id)arg1 forLocalZone:(id)arg2 ;
-(NSMapTable *)zoneDelegatesByLocalZone;
-(void)performZoneDelegateCallback:(/*^block*/id)arg1 forLocalZone:(id)arg2 ;
-(void)removeZoneDelegate:(id)arg1 forLocalZone:(id)arg2 ;
-(id)mergedActionFutureForActionFutures:(id)arg1 ;
@end

