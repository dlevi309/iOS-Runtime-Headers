/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDStatisticsCollectionCalculatorSourceOrderProvider.h>

@class HDProfile, HKQuantityType, NSString;

@interface HDStatisticsCollectionCalculatorDefaultSourceOrderProvider : NSObject <HDStatisticsCollectionCalculatorSourceOrderProvider> {

	HDProfile* _profile;
	HKQuantityType* _quantityType;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sourceForSourceID:(long long)arg1 ;
-(HKQuantityType *)quantityType;
-(id)initWithProfile:(id)arg1 quantityType:(id)arg2 ;
-(HDProfile *)profile;
-(id)orderedSourceIDsWithUnorderedIDs:(id)arg1 ;
@end

