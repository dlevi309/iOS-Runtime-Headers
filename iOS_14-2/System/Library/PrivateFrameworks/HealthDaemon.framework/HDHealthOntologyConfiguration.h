/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSDictionary, NSArray;

@interface HDHealthOntologyConfiguration : NSObject {

	NSDictionary* _countryConfigurations;

}

@property (nonatomic,copy,readonly) NSDictionary * countryConfigurations;              //@synthesize countryConfigurations=_countryConfigurations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allCountryConfigurations; 
+(id)bundledHealthOntologyConfiguration;
-(id)initWithCountryConfigurations:(id)arg1 ;
-(id)init;
-(id)configurationForCountryCode:(id)arg1 ;
-(NSArray *)allCountryConfigurations;
-(NSDictionary *)countryConfigurations;
@end

