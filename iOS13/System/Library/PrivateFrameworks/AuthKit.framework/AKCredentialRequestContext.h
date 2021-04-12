/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSNumber, NSValue, NSArray, NSUUID, AKAuthorizationRequest, AKPasswordRequest;

@interface AKCredentialRequestContext : NSObject <NSSecureCoding> {

	BOOL _passcodeProtected;
	BOOL _shouldForceUI;
	BOOL _shouldSkipBiometrics;
	BOOL _shouldSkipAuthorizationUI;
	BOOL _shouldForcePrivateEmail;
	BOOL _requirePassword;
	BOOL _isWebLogin;
	BOOL _isFirstPartyLogin;
	BOOL _isRapportLogin;
	NSString* _informativeText;
	NSString* _iconName;
	NSData* _iconData;
	NSNumber* _iconScale;
	NSValue* _iconSize;
	NSString* _proxiedClientAppName;
	NSString* _proxiedClientBundleID;
	NSString* _proxiedClientAppID;
	NSString* _proxiedClientTeamID;
	NSArray* _proxiedAssociatedDomains;
	NSString* _callerBundleID;
	NSString* _proxiedDeviceName;
	NSString* _proxiedDeviceClass;
	NSString* _proxiedClientServiceID;
	NSUUID* _requestIdentifier;
	AKAuthorizationRequest* _authorizationRequest;
	AKPasswordRequest* _passwordRequest;

}

@property (nonatomic,copy) NSString * _iconName;                                         //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy) NSData * _iconData;                                           //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,copy) NSNumber * _iconScale;                                        //@synthesize iconScale=_iconScale - In the implementation block
@property (nonatomic,copy) NSValue * _iconSize;                                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,copy) NSString * _informativeText;                                  //@synthesize informativeText=_informativeText - In the implementation block
@property (assign,nonatomic) BOOL _shouldForceUI;                                        //@synthesize shouldForceUI=_shouldForceUI - In the implementation block
@property (assign,nonatomic) BOOL _shouldSkipBiometrics;                                 //@synthesize shouldSkipBiometrics=_shouldSkipBiometrics - In the implementation block
@property (assign,nonatomic) BOOL _shouldSkipAuthorizationUI;                            //@synthesize shouldSkipAuthorizationUI=_shouldSkipAuthorizationUI - In the implementation block
@property (assign,nonatomic) BOOL _shouldForcePrivateEmail;                              //@synthesize shouldForcePrivateEmail=_shouldForcePrivateEmail - In the implementation block
@property (assign,nonatomic) BOOL _requirePassword;                                      //@synthesize requirePassword=_requirePassword - In the implementation block
@property (assign,nonatomic) BOOL _isWebLogin;                                           //@synthesize isWebLogin=_isWebLogin - In the implementation block
@property (assign,nonatomic) BOOL _isFirstPartyLogin;                                    //@synthesize isFirstPartyLogin=_isFirstPartyLogin - In the implementation block
@property (assign,nonatomic) BOOL _isRapportLogin;                                       //@synthesize isRapportLogin=_isRapportLogin - In the implementation block
@property (nonatomic,retain) NSString * _callerBundleID;                                 //@synthesize callerBundleID=_callerBundleID - In the implementation block
@property (nonatomic,retain) NSString * _proxiedClientAppName;                           //@synthesize proxiedClientAppName=_proxiedClientAppName - In the implementation block
@property (nonatomic,retain) NSString * _proxiedClientBundleID;                          //@synthesize proxiedClientBundleID=_proxiedClientBundleID - In the implementation block
@property (nonatomic,retain) NSString * _proxiedClientServiceID;                         //@synthesize proxiedClientServiceID=_proxiedClientServiceID - In the implementation block
@property (nonatomic,retain) NSString * _proxiedClientTeamID;                            //@synthesize proxiedClientTeamID=_proxiedClientTeamID - In the implementation block
@property (nonatomic,retain) NSString * _proxiedClientAppID;                             //@synthesize proxiedClientAppID=_proxiedClientAppID - In the implementation block
@property (nonatomic,retain) NSArray * _proxiedAssociatedDomains;                        //@synthesize proxiedAssociatedDomains=_proxiedAssociatedDomains - In the implementation block
@property (nonatomic,retain) NSString * _proxiedDeviceName;                              //@synthesize proxiedDeviceName=_proxiedDeviceName - In the implementation block
@property (nonatomic,retain) NSString * _proxiedDeviceClass;                             //@synthesize proxiedDeviceClass=_proxiedDeviceClass - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * requestIdentifier;                          //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) AKAuthorizationRequest * authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (nonatomic,retain) AKPasswordRequest * passwordRequest;                        //@synthesize passwordRequest=_passwordRequest - In the implementation block
@property (nonatomic,retain) NSArray * credentialRequests; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)_iconName;
-(NSData *)_iconData;
-(NSValue *)_iconSize;
-(NSNumber *)_iconScale;
-(NSUUID *)requestIdentifier;
-(AKAuthorizationRequest *)authorizationRequest;
-(void)setCredentialRequests:(NSArray *)arg1 ;
-(NSArray *)credentialRequests;
-(BOOL)_requirePassword;
-(void)set_requirePassword:(BOOL)arg1 ;
-(BOOL)_shouldForceUI;
-(void)set_shouldForceUI:(BOOL)arg1 ;
-(BOOL)_shouldSkipBiometrics;
-(void)set_shouldSkipBiometrics:(BOOL)arg1 ;
-(BOOL)_shouldSkipAuthorizationUI;
-(void)set_shouldSkipAuthorizationUI:(BOOL)arg1 ;
-(NSString *)_informativeText;
-(void)set_informativeText:(NSString *)arg1 ;
-(void)set_iconName:(NSString *)arg1 ;
-(void)set_iconData:(NSData *)arg1 ;
-(void)set_iconScale:(NSNumber *)arg1 ;
-(void)set_iconSize:(NSValue *)arg1 ;
-(BOOL)_shouldForcePrivateEmail;
-(void)set_shouldForcePrivateEmail:(BOOL)arg1 ;
-(NSString *)_proxiedClientAppName;
-(void)set_proxiedClientAppName:(NSString *)arg1 ;
-(NSString *)_proxiedClientBundleID;
-(void)set_proxiedClientBundleID:(NSString *)arg1 ;
-(NSString *)_proxiedClientAppID;
-(void)set_proxiedClientAppID:(NSString *)arg1 ;
-(NSString *)_proxiedClientTeamID;
-(void)set_proxiedClientTeamID:(NSString *)arg1 ;
-(NSArray *)_proxiedAssociatedDomains;
-(void)set_proxiedAssociatedDomains:(NSArray *)arg1 ;
-(BOOL)_isWebLogin;
-(void)set_isWebLogin:(BOOL)arg1 ;
-(BOOL)_isFirstPartyLogin;
-(void)set_isFirstPartyLogin:(BOOL)arg1 ;
-(BOOL)_isRapportLogin;
-(void)set_isRapportLogin:(BOOL)arg1 ;
-(NSString *)_callerBundleID;
-(void)set_callerBundleID:(NSString *)arg1 ;
-(NSString *)_proxiedDeviceName;
-(void)set_proxiedDeviceName:(NSString *)arg1 ;
-(NSString *)_proxiedDeviceClass;
-(void)set_proxiedDeviceClass:(NSString *)arg1 ;
-(NSString *)_proxiedClientServiceID;
-(void)set_proxiedClientServiceID:(NSString *)arg1 ;
-(void)setAuthorizationRequest:(AKAuthorizationRequest *)arg1 ;
-(AKPasswordRequest *)passwordRequest;
-(void)setPasswordRequest:(AKPasswordRequest *)arg1 ;
@end

