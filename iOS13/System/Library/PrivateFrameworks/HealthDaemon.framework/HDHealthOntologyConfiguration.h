/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSDictionary, NSArray;

@interface HDHealthOntologyConfiguration : NSObject {

	NSDictionary* _countryConfigurations;

}

@property (nonatomic,copy,readonly) NSDictionary * countryConfigurations;              //@synthesize countryConfigurations=_countryConfigurations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allCountryConfigurations; 
+(id)bundledHealthOntologyConfiguration;
-(id)init;
-(id)initWithCountryConfigurations:(id)arg1 ;
-(id)configurationForCountryCode:(id)arg1 ;
-(NSArray *)allCountryConfigurations;
-(NSDictionary *)countryConfigurations;
@end

