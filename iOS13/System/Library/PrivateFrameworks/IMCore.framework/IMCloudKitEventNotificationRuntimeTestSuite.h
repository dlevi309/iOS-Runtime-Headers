/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMSharedUtilities/IMRuntimeTestSuite.h>
#import <IMCore/IMCloudKitEventHandler.h>

@class IMCloudKitHookTestSingleton, NSString;

@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite <IMCloudKitEventHandler> {

	BOOL _shouldTearDown;
	IMCloudKitHookTestSingleton* _cloudKitHooks;

}

@property (assign) BOOL shouldTearDown;                                                //@synthesize shouldTearDown=_shouldTearDown - In the implementation block
@property (nonatomic,retain) IMCloudKitHookTestSingleton * cloudKitHooks;              //@synthesize cloudKitHooks=_cloudKitHooks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)runTestsIfNeeded;
-(id)init;
-(void)tearDown;
-(void)setUp;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(IMCloudKitHookTestSingleton *)cloudKitHooks;
-(void)setCloudKitHooks:(IMCloudKitHookTestSingleton *)arg1 ;
-(void)setShouldTearDown:(BOOL)arg1 ;
-(BOOL)shouldTearDown;
@end

