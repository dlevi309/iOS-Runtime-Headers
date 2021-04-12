/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCountryCode:(id)arg1 supportedCodingSystems:(id)arg2 analyticsOptions:(unsigned long long)arg3 ;
-(NSSet *)supportedCodingSystems;
-(unsigned long long)analyticsOptions;
@end

