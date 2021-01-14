/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/

#import <libobjc.A.dylib/HDProfileExtension.h>

@class HDAudioAnalyticsManager, HDHeadphoneDoseManager, NSString;

@interface HDHearingProfileExtension : NSObject <HDProfileExtension> {

	HDAudioAnalyticsManager* _analyticsManager;
	HDHeadphoneDoseManager* _headphoneDoseManager;

}

@property (nonatomic,readonly) HDHeadphoneDoseManager * headphoneDoseManager;              //@synthesize headphoneDoseManager=_headphoneDoseManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDHeadphoneDoseManager *)headphoneDoseManager;
-(id)initWithProfile:(id)arg1 ;
@end

