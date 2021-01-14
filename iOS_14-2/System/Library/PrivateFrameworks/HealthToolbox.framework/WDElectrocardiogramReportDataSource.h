/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/HRElectrocardiogramReportDataSource.h>

@class HKElectrocardiogram, NSString, NSDateComponents, UIColor, HKHealthStore;

@interface WDElectrocardiogramReportDataSource : NSObject <HRElectrocardiogramReportDataSource> {

	HKElectrocardiogram* _sample;
	UIColor* _tintColor;
	HKHealthStore* _healthStore;
	long long _activeAlgorithmVersion;
	NSString* _firstName;
	NSString* _lastName;
	NSDateComponents* _dateOfBirthComponents;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                         //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) long long activeAlgorithmVersion;                    //@synthesize activeAlgorithmVersion=_activeAlgorithmVersion - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateOfBirthComponents;              //@synthesize dateOfBirthComponents=_dateOfBirthComponents - In the implementation block
@property (nonatomic,readonly) HKElectrocardiogram * sample;                        //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                                 //@synthesize tintColor=_tintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKHealthStore *)healthStore;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(HKElectrocardiogram *)sample;
-(void)setFirstName:(NSString *)arg1 ;
-(NSDateComponents *)dateOfBirthComponents;
-(UIColor *)tintColor;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 ;
-(void)_fetchDemographicInformation;
-(long long)activeAlgorithmVersion;
-(void)setDateOfBirthComponents:(NSDateComponents *)arg1 ;
@end

