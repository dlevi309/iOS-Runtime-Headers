/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDOperation.h>

@class HDProfile, HDClinicalProviderServiceManager;

@interface HDCPSOperation : HDOperation {

	HDProfile* _profile;
	HDClinicalProviderServiceManager* _providerServiceManager;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,__weak,readonly) HDClinicalProviderServiceManager * providerServiceManager;              //@synthesize providerServiceManager=_providerServiceManager - In the implementation block
-(id)init;
-(HDProfile *)profile;
-(HDClinicalProviderServiceManager *)providerServiceManager;
-(id)initWithManager:(id)arg1 profile:(id)arg2 ;
@end

