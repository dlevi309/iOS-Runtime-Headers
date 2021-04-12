/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary;

@interface MCDNSProxyPayload : MCPayload {

	NSString* _appBundleIdentifier;
	NSString* _providerBundleIdentifier;
	NSDictionary* _providerConfiguration;

}

@property (nonatomic,copy,readonly) NSDictionary * configurationDictionary; 
@property (nonatomic,copy,readonly) NSString * appBundleIdentifier;                      //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerBundleIdentifier;                 //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * providerConfiguration;                //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)installationWarnings;
-(NSDictionary *)configurationDictionary;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)appBundleIdentifier;
-(NSDictionary *)providerConfiguration;
-(NSString *)providerBundleIdentifier;
-(id)verboseDescription;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

