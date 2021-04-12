/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSDictionary;

@interface TransparencySettings : NSObject {

	NSDictionary* _settings;

}

@property (retain) NSDictionary * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)allowsInternalSecurityPolicies;
+(double)defaultNetworkTimeout;
+(BOOL)getBool:(id)arg1 ;
+(id)deviceUserAgent;
+(double)defaultQueryCacheTimeout;
-(void)setSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)settings;
@end

