/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>

@class HMFUnfairLock, NSUUID, NSString, HMHome, HMApplicationData, _HMContext, HMMutableArray, NSArray;

@interface HMServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSUUID* _uuid;
	NSString* _name;
	HMHome* _home;
	HMApplicationData* _applicationData;
	_HMContext* _context;
	HMMutableArray* _currentServices;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentServices;                                //@synthesize currentServices=_currentServices - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * services; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (nonatomic,readonly) HMApplicationData * applicationData; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)_invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(void)setContext:(_HMContext *)arg1 ;
-(HMHome *)home;
-(NSArray *)services;
-(void)setHome:(HMHome *)arg1 ;
-(HMApplicationData *)applicationData;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)_unconfigure;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_findService:(id)arg1 ;
-(NSUUID *)applicationDataIdentifier;
-(HMMutableArray *)currentServices;
-(void)_addService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleServiceAddedNotification:(id)arg1 ;
-(void)_handleServiceRemovedNotification:(id)arg1 ;
-(void)_handleServiceGroupRenamedNotification:(id)arg1 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(void)_removeServices:(id)arg1 ;
-(void)addService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentServices:(HMMutableArray *)arg1 ;
@end

