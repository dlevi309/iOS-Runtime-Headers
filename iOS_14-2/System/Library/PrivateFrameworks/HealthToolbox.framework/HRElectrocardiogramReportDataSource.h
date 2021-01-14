/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

@class HKElectrocardiogram, NSString, NSDateComponents, UIColor;


@protocol HRElectrocardiogramReportDataSource <NSObject>
@property (nonatomic,readonly) HKElectrocardiogram * sample; 
@property (nonatomic,readonly) long long activeAlgorithmVersion; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSDateComponents * dateOfBirthComponents; 
@property (nonatomic,readonly) UIColor * tintColor; 
@required
-(NSString *)firstName;
-(NSString *)lastName;
-(HKElectrocardiogram *)sample;
-(NSDateComponents *)dateOfBirthComponents;
-(UIColor *)tintColor;
-(long long)activeAlgorithmVersion;

@end

