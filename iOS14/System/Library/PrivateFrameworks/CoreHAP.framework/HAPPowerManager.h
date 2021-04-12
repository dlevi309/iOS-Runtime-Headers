/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface HAPPowerManager : NSObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned _systemPowerMgr;
	unsigned _systemPowerNotifier;
	IONotificationPortRef _systemPowerPort;
	NSMapTable* _delegatesMap;

}

@property (nonatomic,readonly) unsigned systemPowerMgr;                            //@synthesize systemPowerMgr=_systemPowerMgr - In the implementation block
@property (nonatomic,readonly) IONotificationPortRef systemPowerPort;              //@synthesize systemPowerPort=_systemPowerPort - In the implementation block
@property (nonatomic,readonly) unsigned systemPowerNotifier;                       //@synthesize systemPowerNotifier=_systemPowerNotifier - In the implementation block
@property (nonatomic,retain) NSMapTable * delegatesMap;                            //@synthesize delegatesMap=_delegatesMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedInstance;
-(id)init;
-(IONotificationPortRef)systemPowerPort;
-(void)dealloc;
-(void)registerForSleepWake:(id)arg1 queue:(id)arg2 ;
-(void)deRegisterFromSleepWake:(id)arg1 ;
-(NSMapTable *)delegatesMap;
-(unsigned)systemPowerMgr;
-(void)systemPowerChanged:(unsigned)arg1 notificationID:(void*)arg2 ;
-(unsigned)systemPowerNotifier;
-(void)setDelegatesMap:(NSMapTable *)arg1 ;
@end

