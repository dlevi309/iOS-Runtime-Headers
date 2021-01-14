/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSSet;

@interface HDHealthOntologyCountryConfiguration : NSObject {

	NSString* _countryCode;
	NSSet* _supportedCodingSystems;
	unsigned long long _analyticsOptions;

}

@property (nonatomic,copy,readonly) NSString * countryCode;                      //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSSet * supportedCodingSystems;              //@synthesize supportedCodingSystems=_supportedCodingSystems - In the implementation block
@property (nonatomic,readonly) unsigned long long analyticsOptions;              //@synthesize analyticsOptions=_analyticsOptions - In the implementation block
-(NSString *)countryCode;
-(unsigned long long)analyticsOptions;
-(NSSet *)supportedCodingSystems;
-(id)initWithCountryCode:(id)arg1 supportedCodingSystems:(id)arg2 analyticsOptions:(unsigned long long)arg3 ;
@end

