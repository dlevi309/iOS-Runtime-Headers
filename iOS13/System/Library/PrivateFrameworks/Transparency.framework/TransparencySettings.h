/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSDictionary;

@interface TransparencySettings : NSObject {

	NSDictionary* _settings;

}

@property (retain) NSDictionary * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)allowsInternalSecurityPolicies;
+(double)defaultNetworkTimeout;
+(double)defaultQueryCacheTimeout;
+(BOOL)getBool:(id)arg1 ;
+(id)deviceUserAgent;
-(NSDictionary *)settings;
-(void)setSettings:(NSDictionary *)arg1 ;
@end

