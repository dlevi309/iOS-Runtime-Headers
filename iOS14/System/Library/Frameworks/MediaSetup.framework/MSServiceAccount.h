/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSUUID, NSArray;

@interface MSServiceAccount : NSObject <NSSecureCoding> {

	NSString* _serviceName;
	NSString* _accountName;
	NSString* _clientID;
	NSString* _clientSecret;
	NSURL* _configurationURL;
	NSURL* _authorizationTokenURL;
	NSString* _authorizationScope;
	NSUUID* _serviceID;
	NSArray* _intentExamples;

}

@property (nonatomic,copy) NSUUID * serviceID;                             //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intentExamples;              //@synthesize intentExamples=_intentExamples - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountName;                //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * clientID;                            //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * clientSecret;                        //@synthesize clientSecret=_clientSecret - In the implementation block
@property (nonatomic,copy) NSURL * configurationURL;                       //@synthesize configurationURL=_configurationURL - In the implementation block
@property (nonatomic,copy) NSURL * authorizationTokenURL;                  //@synthesize authorizationTokenURL=_authorizationTokenURL - In the implementation block
@property (nonatomic,copy) NSString * authorizationScope;                  //@synthesize authorizationScope=_authorizationScope - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)accountName;
-(NSURL *)configurationURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)serviceID;
-(void)setServiceID:(NSUUID *)arg1 ;
-(id)description;
-(void)setConfigurationURL:(NSURL *)arg1 ;
-(NSString *)serviceName;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientSecret;
-(NSArray *)intentExamples;
-(NSURL *)authorizationTokenURL;
-(NSString *)authorizationScope;
-(id)initWithServiceName:(id)arg1 accountName:(id)arg2 ;
-(void)setClientSecret:(NSString *)arg1 ;
-(void)setAuthorizationTokenURL:(NSURL *)arg1 ;
-(void)setAuthorizationScope:(NSString *)arg1 ;
@end

