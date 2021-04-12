/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(BOOL)providerOff;
-(void)_parseConfiguration:(id)arg1 ;
-(void)_configureToUseDefaultValues;
-(id)_currentRegionCode;
-(void)_configureToBeOff;
-(void)setProviderOff:(BOOL)arg1 ;
-(BOOL)socialEngineeringThreatTypeOff;
-(BOOL)malwareThreatTypeOff;
-(BOOL)unwantedSoftwareThreatTypeOff;
@end

