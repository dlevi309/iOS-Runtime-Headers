/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMIPersonManager.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIExternalPersonManagerDataSource;
@class HMIExternalPersonManagerSettings, NSOperationQueue, HMFTimer, HMFUnfairLock, NSString;

@interface HMIExternalPersonManager : HMIPersonManager <HMFTimerDelegate, HMFLogging> {

	id<HMIExternalPersonManagerDataSource> _dataSource;
	HMIExternalPersonManagerSettings* _settings;
	NSOperationQueue* _operationQueue;
	HMFTimer* _watchdogTimer;
	HMFUnfairLock* _lock;

}

@property (readonly) NSOperationQueue * operationQueue;                                             //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) HMFTimer * watchdogTimer;                                                      //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                                                //@synthesize lock=_lock - In the implementation block
@property (readonly) HMIExternalPersonManagerSettings * settings;                                   //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic,__weak) id<HMIExternalPersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id<HMIExternalPersonManagerDataSource>)dataSource;
-(HMFUnfairLock *)lock;
-(id)logIdentifier;
-(void)setDataSource:(id<HMIExternalPersonManagerDataSource>)arg1 ;
-(HMIExternalPersonManagerSettings *)settings;
-(HMFTimer *)watchdogTimer;
-(void)handleUpdatedPerson:(id)arg1 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg1 ;
-(void)handleUpdatedFaceprint:(id)arg1 ;
-(void)handleRemovedPersonWithUUID:(id)arg1 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg1 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg1 ;
-(void)handleUpdatedSettings:(id)arg1 ;
-(id)initWithUUID:(id)arg1 homeUUID:(id)arg2 ;
-(void)_updateSettings:(id)arg1 ;
@end

