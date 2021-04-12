/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSArray, NSDictionary, NSSet;

@interface PKPaymentDigitalIssuanceMetadata : NSObject {

	NSString* _serviceProviderIdentifier;
	NSString* _serviceProviderCountryCode;
	NSArray* _serviceProviderAcceptedNetworks;
	NSArray* _serviceProviderCapabilities;
	NSDictionary* _serviceProviderDict;
	NSString* _action;
	NSString* _merchantID;
	NSArray* _defaultSuggestions;
	NSSet* _serviceProviderSupportedCountries;

}

@property (nonatomic,copy,readonly) NSString * serviceProviderIdentifier;                    //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceProviderCountryCode;                   //@synthesize serviceProviderCountryCode=_serviceProviderCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serviceProviderSupportedNetworks; 
@property (nonatomic,copy,readonly) NSArray * serviceProviderAcceptedNetworks;               //@synthesize serviceProviderAcceptedNetworks=_serviceProviderAcceptedNetworks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serviceProviderCapabilities;                   //@synthesize serviceProviderCapabilities=_serviceProviderCapabilities - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceProviderDict;                      //@synthesize serviceProviderDict=_serviceProviderDict - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                                       //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * merchantID;                                   //@synthesize merchantID=_merchantID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSuggestions;                            //@synthesize defaultSuggestions=_defaultSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * serviceProviderSupportedCountries;               //@synthesize serviceProviderSupportedCountries=_serviceProviderSupportedCountries - In the implementation block
-(NSString *)action;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)merchantID;
-(NSArray *)serviceProviderSupportedNetworks;
-(NSString *)serviceProviderIdentifier;
-(NSString *)serviceProviderCountryCode;
-(NSArray *)serviceProviderAcceptedNetworks;
-(NSArray *)serviceProviderCapabilities;
-(NSDictionary *)serviceProviderDict;
-(NSArray *)defaultSuggestions;
-(NSSet *)serviceProviderSupportedCountries;
@end

