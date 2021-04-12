/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMSharedUtilities/IMRuntimeTestCase.h>
#import <IMCore/IMCloudKitEventHandler.h>

@class IMCloudKitHookTestSingleton, NSString;

@interface IMCloudKitEventNotificationManagerRuntimeTest : IMRuntimeTestCase <IMCloudKitEventHandler> {

	double _previousInterval;
	double _defaultTestDuration;
	IMCloudKitHookTestSingleton* _cloudKitHooks;

}

@property (assign) double defaultTestDuration;                                         //@synthesize defaultTestDuration=_defaultTestDuration - In the implementation block
@property (nonatomic,retain) IMCloudKitHookTestSingleton * cloudKitHooks;              //@synthesize cloudKitHooks=_cloudKitHooks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUp;
-(void)tearDown;
-(IMCloudKitHookTestSingleton *)cloudKitHooks;
-(void)setCloudKitHooks:(IMCloudKitHookTestSingleton *)arg1 ;
-(void)startTest;
-(void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2 ;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(void)sendSyncStateChangedEvent;
-(id)createSyncStatisticsForMockSyncState:(id)arg1 ;
-(void)willUpdateSyncState:(id)arg1 ;
-(void)setDefaultTestDuration:(double)arg1 ;
-(void)willSendSyncState:(id)arg1 withSyncStatistics:(id)arg2 ;
-(void)updateMockSyncState;
-(double)defaultTestDuration;
@end

