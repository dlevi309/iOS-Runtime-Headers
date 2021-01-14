/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, HMDAppleAccountManager, HMDRemoteAccountManager, NSArray, NSString;

@interface HMDAccountRegistry : HMFObject <HMFLogging, NSFastEnumeration> {

	id<HMFLocking> _lock;
	BOOL _started;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMDAppleAccountManager* _appleAccountManager;
	HMDRemoteAccountManager* _remoteAccountManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) HMDAppleAccountManager * appleAccountManager;                    //@synthesize appleAccountManager=_appleAccountManager - In the implementation block
@property (readonly) HMDRemoteAccountManager * remoteAccountManager;                  //@synthesize remoteAccountManager=_remoteAccountManager - In the implementation block
@property (readonly) BOOL started;                                                    //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) NSArray * accounts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedRegistry;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSArray *)accounts;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)start;
-(BOOL)started;
-(void)stop;
-(id)accountForHandle:(id)arg1 ;
-(id)attributeDescriptions;
-(void)reset;
-(id)deviceForHandle:(id)arg1 ;
-(void)_resolveAccountForHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAppleAccountManager:(id)arg1 remoteAccountManager:(id)arg2 ;
-(void)__handleAppleAccountUpdate:(id)arg1 ;
-(void)__handleAddedRemoteAccount:(id)arg1 ;
-(void)__handleRemovedRemoteAccount:(id)arg1 ;
-(HMDAppleAccountManager *)appleAccountManager;
-(HMDRemoteAccountManager *)remoteAccountManager;
-(id)accountForHandle:(id)arg1 exists:(BOOL*)arg2 ;
-(id)deviceForIdentifier:(id)arg1 ;
-(id)deviceForHandle:(id)arg1 exists:(BOOL*)arg2 ;
-(id)deviceForDevice:(id)arg1 exists:(BOOL*)arg2 ;
-(BOOL)accountExistsForHandle:(id)arg1 ;
-(BOOL)deviceExistsForHandle:(id)arg1 ;
-(BOOL)deviceExistsForDevice:(id)arg1 ;
-(id)deviceForDevice:(id)arg1 ;
-(id)deviceForPushToken:(id)arg1 ;
-(void)__handleAppleAccountHandlesUpdated:(id)arg1 ;
-(void)__handleAppleAccountDeviceAdded:(id)arg1 ;
@end

