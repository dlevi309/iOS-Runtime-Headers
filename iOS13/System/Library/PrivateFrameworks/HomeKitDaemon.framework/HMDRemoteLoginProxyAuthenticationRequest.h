/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginAuthenticationRequest.h>
#import <libobjc.A.dylib/HMRemoteLoginMessageProtocol.h>

@class NSString, NSDictionary;

@interface HMDRemoteLoginProxyAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol> {

	NSString* _username;
	NSString* _rawPassword;
	NSString* _passwordToken;
	NSString* _altDSID;

}

@property (nonatomic,retain) NSString * username;                           //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * rawPassword;                        //@synthesize rawPassword=_rawPassword - In the implementation block
@property (nonatomic,retain) NSString * passwordToken;                      //@synthesize passwordToken=_passwordToken - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                            //@synthesize altDSID=_altDSID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * messageName; 
@property (nonatomic,copy,readonly) NSString * xpcMessageName; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
+(BOOL)supportsSecureCoding;
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)messageName;
-(void)setRawPassword:(NSString *)arg1 ;
-(NSString *)rawPassword;
-(NSDictionary *)messagePayload;
-(NSString *)xpcMessageName;
-(void)setPasswordToken:(NSString *)arg1 ;
-(NSString *)passwordToken;
@end

