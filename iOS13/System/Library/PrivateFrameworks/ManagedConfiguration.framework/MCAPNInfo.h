/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(id)installationWarnings;
-(NSNumber *)proxyPort;
-(void)setUsername:(NSString *)arg1 ;
-(void)setProxyPort:(NSNumber *)arg1 ;
-(void)setApnName:(NSString *)arg1 ;
-(void)setProxy:(NSString *)arg1 ;
-(id)defaultsRepresentation;
-(id)strippedDefaultsRepresentation;
-(NSString *)apnName;
-(NSString *)proxy;
@end

