/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/HRElectrocardiogramReportDataSource.h>

@class HKElectrocardiogram, NSString, NSDateComponents, UIColor, HKHealthStore;

@interface WDElectrocardiogramReportDataSource : NSObject <HRElectrocardiogramReportDataSource> {

	HKElectrocardiogram* _sample;
	UIColor* _tintColor;
	HKHealthStore* _healthStore;
	NSString* _firstName;
	NSString* _lastName;
	NSDateComponents* _dateOfBirthComponents;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                         //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateOfBirthComponents;              //@synthesize dateOfBirthComponents=_dateOfBirthComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HKElectrocardiogram * sample;                        //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                                 //@synthesize tintColor=_tintColor - In the implementation block
-(HKHealthStore *)healthStore;
-(UIColor *)tintColor;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(HKElectrocardiogram *)sample;
-(void)setDateOfBirthComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)dateOfBirthComponents;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 ;
-(void)_fetchDemographicInformation;
@end

