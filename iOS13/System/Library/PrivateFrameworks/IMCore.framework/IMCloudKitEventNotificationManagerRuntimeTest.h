/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)tearDown;
-(void)setUp;
-(void)startTest;
-(void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2 ;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(IMCloudKitHookTestSingleton *)cloudKitHooks;
-(void)setCloudKitHooks:(IMCloudKitHookTestSingleton *)arg1 ;
-(void)sendSyncStateChangedEvent;
-(id)createSyncStatisticsForMockSyncState:(id)arg1 ;
-(void)willUpdateSyncState:(id)arg1 ;
-(void)setDefaultTestDuration:(double)arg1 ;
-(void)willSendSyncState:(id)arg1 withSyncStatistics:(id)arg2 ;
-(void)updateMockSyncState;
-(double)defaultTestDuration;
@end

