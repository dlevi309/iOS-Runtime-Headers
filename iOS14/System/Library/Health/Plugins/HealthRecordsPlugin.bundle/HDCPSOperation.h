/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <Foundation/NSOperation.h>

@class HDProfile, HDClinicalProviderServiceManager;

@interface HDCPSOperation : NSOperation {

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

