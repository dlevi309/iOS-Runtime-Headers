/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
*/


@class NSDictionary;

@interface ProviderConfiguration : NSObject {

	NSDictionary* _configuration;
	BOOL _providerOff;
	BOOL _socialEngineeringThreatTypeOff;
	BOOL _malwareThreatTypeOff;
	BOOL _unwantedSoftwareThreatTypeOff;

}

@property (assign,nonatomic) BOOL providerOff;                                   //@synthesize providerOff=_providerOff - In the implementation block
@property (nonatomic,readonly) BOOL socialEngineeringThreatTypeOff;              //@synthesize socialEngineeringThreatTypeOff=_socialEngineeringThreatTypeOff - In the implementation block
@property (nonatomic,readonly) BOOL malwareThreatTypeOff;                        //@synthesize malwareThreatTypeOff=_malwareThreatTypeOff - In the implementation block
@property (nonatomic,readonly) BOOL unwantedSoftwareThreatTypeOff;               //@synthesize unwantedSoftwareThreatTypeOff=_unwantedSoftwareThreatTypeOff - In the implementation block
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)providerOff;
-(void)_parseConfiguration:(id)arg1 ;
-(void)_configureToUseDefaultValues;
-(id)_currentRegionCode;
-(void)_configureToBeOff;
-(void)setProviderOff:(BOOL)arg1 ;
-(BOOL)socialEngineeringThreatTypeOff;
-(BOOL)malwareThreatTypeOff;
-(BOOL)unwantedSoftwareThreatTypeOff;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
@end

