/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDHomeAIPersonDataReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMIExternalPersonManagerDataSource.h>

@class HMIExternalPersonManager, NSString;

@interface HMDHomeAIPhotosPersonDataReceiver : HMDHomeAIPersonDataReceiver <HMFLogging, HMIExternalPersonManagerDataSource> {

	HMIExternalPersonManager* _photosPersonManager;

}

@property (readonly) HMIExternalPersonManager * photosPersonManager;              //@synthesize photosPersonManager=_photosPersonManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(HMIExternalPersonManager *)photosPersonManager;
-(void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3 ;
-(id)initWithPhotosPersonManager:(id)arg1 workQueue:(id)arg2 ;
@end

