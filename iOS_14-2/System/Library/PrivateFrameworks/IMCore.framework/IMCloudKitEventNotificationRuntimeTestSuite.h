/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUp;
-(void)tearDown;
-(IMCloudKitHookTestSingleton *)cloudKitHooks;
-(id)init;
-(void)setCloudKitHooks:(IMCloudKitHookTestSingleton *)arg1 ;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(void)setShouldTearDown:(BOOL)arg1 ;
-(BOOL)shouldTearDown;
@end

