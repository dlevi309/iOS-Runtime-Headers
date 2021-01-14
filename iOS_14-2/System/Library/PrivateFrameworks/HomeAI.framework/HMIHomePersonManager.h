/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMIPersonManager.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIHomePersonManagerDataSource;
@class HMIHomePersonManagerSettings, NSOperationQueue, HMFTimer, HMFUnfairLock, NSMutableDictionary, NSString;

@interface HMIHomePersonManager : HMIPersonManager <HMFTimerDelegate, HMFLogging> {

	id<HMIHomePersonManagerDataSource> _dataSource;
	HMIHomePersonManagerSettings* _settings;
	NSOperationQueue* _operationQueue;
	HMFTimer* _watchdogTimer;
	HMFTimer* _analyticsTimer;
	HMFUnfairLock* _lock;
	NSMutableDictionary* _unknownFacesSavedCounts;

}

@property (readonly) NSOperationQueue * operationQueue;                                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) HMFTimer * watchdogTimer;                                                  //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (readonly) HMFTimer * analyticsTimer;                                                 //@synthesize analyticsTimer=_analyticsTimer - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                                            //@synthesize lock=_lock - In the implementation block
@property (readonly) NSMutableDictionary * unknownFacesSavedCounts;                             //@synthesize unknownFacesSavedCounts=_unknownFacesSavedCounts - In the implementation block
@property (readonly) HMIHomePersonManagerSettings * settings;                                   //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic,__weak) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(HMFUnfairLock *)lock;
-(id)logIdentifier;
-(void)setDataSource:(id<HMIHomePersonManagerDataSource>)arg1 ;
-(HMIHomePersonManagerSettings *)settings;
-(HMFTimer *)watchdogTimer;
-(void)handleUpdatedPerson:(id)arg1 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg1 ;
-(void)handleUpdatedFaceprint:(id)arg1 ;
-(void)handleRemovedPersonWithUUID:(id)arg1 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg1 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg1 ;
-(void)handleUpdatedSettings:(id)arg1 ;
-(id)initWithUUID:(id)arg1 homeUUID:(id)arg2 ;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg1 ;
-(void)handleMisclassifiedPersonForFaceCrop:(id)arg1 ;
-(void)_updateSettings:(id)arg1 ;
-(NSMutableDictionary *)unknownFacesSavedCounts;
-(void)storeUnassociatedFaceCrop:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeFaceprint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMFTimer *)analyticsTimer;
-(void)handleNewFaceEvents:(id)arg1 ;
@end

