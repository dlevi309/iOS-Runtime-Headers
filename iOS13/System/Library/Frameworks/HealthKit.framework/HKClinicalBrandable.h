/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

@class NSString, HKClinicalBrand;


@protocol HKClinicalBrandable <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) HKClinicalBrand * brand; 
@required
-(NSString *)title;
-(NSString *)subtitle;
-(HKClinicalBrand *)brand;

@end

