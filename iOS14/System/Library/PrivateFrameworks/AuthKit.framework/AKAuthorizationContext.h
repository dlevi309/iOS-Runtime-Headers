/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/AKAuthenticationContext.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, AKDevice, AKAuthorizationRequest, AKAuthorizationScopesUserSelection;

@interface AKAuthorizationContext : NSObject <AKAuthenticationContext, NSSecureCoding> {

	NSString* _proxiedAppName;
	NSString* _altDSID;
	NSDictionary* _appProvidedData;
	AKDevice* _companionDevice;
	AKDevice* _proxiedDevice;
	long long _serviceType;
	NSString* _appProvidedContext;
	NSString* _teamID;
	NSString* _clientID;
	AKAuthorizationRequest* _request;
	AKAuthorizationScopesUserSelection* _userSelection;
	NSString* _realUserVerificationData;

}

@property (nonatomic,readonly) BOOL _hasApplicationMetaData; 
@property (nonatomic,copy) NSString * teamID;                                                  //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                                //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy,readonly) AKAuthorizationRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AKAuthorizationScopesUserSelection * userSelection;               //@synthesize userSelection=_userSelection - In the implementation block
@property (nonatomic,copy) NSString * realUserVerificationData;                                //@synthesize realUserVerificationData=_realUserVerificationData - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                                 //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) long long serviceType;                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (setter=_setProxiedAppName:,nonatomic,copy) NSString * _proxiedAppName;              //@synthesize proxiedAppName=_proxiedAppName - In the implementation block
@property (nonatomic,copy) NSDictionary * appProvidedData;                                     //@synthesize appProvidedData=_appProvidedData - In the implementation block
@property (nonatomic,copy) NSString * appProvidedContext;                                      //@synthesize appProvidedContext=_appProvidedContext - In the implementation block
@property (nonatomic,copy) AKDevice * proxiedDevice;                                           //@synthesize proxiedDevice=_proxiedDevice - In the implementation block
@property (nonatomic,copy) AKDevice * companionDevice;                                         //@synthesize companionDevice=_companionDevice - In the implementation block
@property (assign,nonatomic) long long authenticationMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)teamID;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(AKDevice *)companionDevice;
-(void)_setProxiedAppName:(id)arg1 ;
-(void)setAppProvidedData:(NSDictionary *)arg1 ;
-(void)setProxiedDevice:(AKDevice *)arg1 ;
-(NSString *)appProvidedContext;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAppProvidedContext:(NSString *)arg1 ;
-(NSDictionary *)appProvidedData;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(AKAuthorizationRequest *)request;
-(void)setServiceType:(long long)arg1 ;
-(NSString *)description;
-(NSString *)altDSID;
-(AKDevice *)proxiedDevice;
-(NSString *)_proxiedAppName;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_hasApplicationMetaData;
-(NSString *)realUserVerificationData;
-(void)setRealUserVerificationData:(NSString *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(long long)serviceType;
-(AKAuthorizationScopesUserSelection *)userSelection;
-(void)setUserSelection:(AKAuthorizationScopesUserSelection *)arg1 ;
@end

