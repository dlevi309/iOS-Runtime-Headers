/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSString, NSNumber;

@interface MCAPNInfo : NSObject {

	NSString* _apnName;
	NSString* _username;
	NSString* _password;
	NSString* _proxy;
	NSNumber* _proxyPort;

}

@property (nonatomic,retain) NSString * apnName;                //@synthesize apnName=_apnName - In the implementation block
@property (nonatomic,retain) NSString * username;               //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;               //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * proxy;                  //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPort;              //@synthesize proxyPort=_proxyPort - In the implementation block
-(void)setProxy:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)proxy;
-(id)installationWarnings;
-(NSNumber *)proxyPort;
-(void)setProxyPort:(NSNumber *)arg1 ;
-(id)defaultsRepresentation;
-(id)strippedDefaultsRepresentation;
-(NSString *)password;
-(NSString *)username;
-(id)description;
-(void)setPassword:(NSString *)arg1 ;
-(void)setApnName:(NSString *)arg1 ;
-(NSString *)apnName;
@end

