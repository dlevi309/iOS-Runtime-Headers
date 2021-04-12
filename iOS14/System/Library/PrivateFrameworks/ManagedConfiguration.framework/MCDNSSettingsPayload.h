/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSArray, NSNumber;

@interface MCDNSSettingsPayload : MCPayload {

	NSDictionary* _dnsSettings;
	NSArray* _onDemandRules;
	NSNumber* _prohibitDisablement;

}

@property (nonatomic,copy,readonly) NSDictionary * configurationDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * dnsSettings;                          //@synthesize dnsSettings=_dnsSettings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * onDemandRules;                             //@synthesize onDemandRules=_onDemandRules - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * prohibitDisablement;                      //@synthesize prohibitDisablement=_prohibitDisablement - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)installationWarnings;
-(NSArray *)onDemandRules;
-(NSNumber *)prohibitDisablement;
-(NSDictionary *)configurationDictionary;
-(id)verboseDescription;
-(NSDictionary *)dnsSettings;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

