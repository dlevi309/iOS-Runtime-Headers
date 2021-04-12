/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

@class HKElectrocardiogram, NSString, NSDateComponents, UIColor;


@protocol HRElectrocardiogramReportDataSource <NSObject>
@property (nonatomic,readonly) HKElectrocardiogram * sample; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSDateComponents * dateOfBirthComponents; 
@property (nonatomic,readonly) UIColor * tintColor; 
@required
-(UIColor *)tintColor;
-(NSString *)firstName;
-(NSString *)lastName;
-(HKElectrocardiogram *)sample;
-(NSDateComponents *)dateOfBirthComponents;

@end

