/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HKQuantityType *)quantityType;
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 quantityType:(id)arg2 ;
-(id)orderedSourceIDsWithUnorderedIDs:(id)arg1 ;
-(id)sourceForSourceID:(long long)arg1 ;
@end

