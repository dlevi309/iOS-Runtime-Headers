/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
*/


@class NSString, NSError, NSURL, NSDictionary, NSMutableDictionary, NSDate, CMSNetworkActivity;

@interface CMSCloudExtensionConfiguration : NSObject {

	NSString* _version;
	NSError* _parsingError;
	NSURL* _configUrl;
	NSDictionary* _configDictionary;
	NSMutableDictionary* _endpointConfigs;
	NSURL* _baseURL;
	NSDictionary* _globalHeaders;
	NSDate* _configExpiry;
	CMSNetworkActivity* _parentNetworkActivity;

}

@property (nonatomic,retain) NSMutableDictionary * endpointConfigs;                     //@synthesize endpointConfigs=_endpointConfigs - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                           //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * globalHeaders;                            //@synthesize globalHeaders=_globalHeaders - In the implementation block
@property (nonatomic,retain) NSDate * configExpiry;                                     //@synthesize configExpiry=_configExpiry - In the implementation block
@property (nonatomic,retain) NSDictionary * configDictionary;                           //@synthesize configDictionary=_configDictionary - In the implementation block
@property (nonatomic,readonly) CMSNetworkActivity * parentNetworkActivity;              //@synthesize parentNetworkActivity=_parentNetworkActivity - In the implementation block
@property (nonatomic,readonly) NSString * version;                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSError * parsingError;                                  //@synthesize parsingError=_parsingError - In the implementation block
@property (nonatomic,readonly) NSURL * configUrl;                                       //@synthesize configUrl=_configUrl - In the implementation block
@property (getter=isExpiringSoon,nonatomic,readonly) BOOL expiringSoon; 
+(id)_configurationFromJWS:(id)arg1 URL:(id)arg2 parentNetworkActivity:(id)arg3 keyID:(id)arg4 publicKey:(id)arg5 error:(id*)arg6 ;
+(void)configurationFromURL:(id)arg1 forSession:(id)arg2 usingAuth:(id)arg3 authProvider:(id)arg4 parentNetworkActivity:(id)arg5 keyID:(id)arg6 publicKey:(id)arg7 URLSessionConfiguration:(id)arg8 completion:(/*^block*/id)arg9 ;
-(NSURL *)baseURL;
-(void)setEndpointConfigs:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)description;
-(NSMutableDictionary *)endpointConfigs;
-(NSDictionary *)configDictionary;
-(NSString *)version;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
-(CMSNetworkActivity *)parentNetworkActivity;
-(id)initWithDictionary:(id)arg1 fromURL:(id)arg2 parentNetworkActivity:(id)arg3 ;
-(NSError *)parsingError;
-(void)_configureEndpoint:(id)arg1 withDictionary:(id)arg2 headers:(id)arg3 ;
-(NSDictionary *)globalHeaders;
-(id)configForEndpoint:(id)arg1 ;
-(BOOL)isExpiringSoon;
-(NSURL *)configUrl;
-(NSDate *)configExpiry;
-(void)setConfigExpiry:(NSDate *)arg1 ;
@end

