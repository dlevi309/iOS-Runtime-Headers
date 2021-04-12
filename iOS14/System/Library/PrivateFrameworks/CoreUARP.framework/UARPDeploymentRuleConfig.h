/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/


@class NSDate, NSArray, NSNumber;

@interface UARPDeploymentRuleConfig : NSObject {

	NSDate* _goLiveDate;
	NSArray* _countryList;
	NSNumber* _rampPeriod;
	NSNumber* _deploymentLimit;

}

@property (copy) NSDate * goLiveDate;                     //@synthesize goLiveDate=_goLiveDate - In the implementation block
@property (copy) NSArray * countryList;                   //@synthesize countryList=_countryList - In the implementation block
@property (copy) NSNumber * rampPeriod;                   //@synthesize rampPeriod=_rampPeriod - In the implementation block
@property (copy) NSNumber * deploymentLimit;              //@synthesize deploymentLimit=_deploymentLimit - In the implementation block
-(NSArray *)countryList;
-(NSNumber *)rampPeriod;
-(NSNumber *)deploymentLimit;
-(NSDate *)goLiveDate;
-(void)setGoLiveDate:(NSDate *)arg1 ;
-(void)setCountryList:(NSArray *)arg1 ;
-(void)setRampPeriod:(NSNumber *)arg1 ;
-(void)setDeploymentLimit:(NSNumber *)arg1 ;
@end

