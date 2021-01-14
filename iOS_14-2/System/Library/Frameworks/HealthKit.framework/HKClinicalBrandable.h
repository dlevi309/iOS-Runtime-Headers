/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

@class NSString, HKClinicalBrand;


@protocol HKClinicalBrandable <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) HKClinicalBrand * brand; 
@required
-(HKClinicalBrand *)brand;
-(NSString *)subtitle;
-(NSString *)title;

@end

