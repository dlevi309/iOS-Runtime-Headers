/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,readonly) BOOL _hasApplicationMetaData; 
@property (nonatomic,copy) NSString * teamID;                                                  //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                                //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy,readonly) AKAuthorizationRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AKAuthorizationScopesUserSelection * userSelection;               //@synthesize userSelection=_userSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * altDSID;                                                 //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) long long serviceType;                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (setter=_setProxiedAppName:,nonatomic,copy) NSString * _proxiedAppName;              //@synthesize proxiedAppName=_proxiedAppName - In the implementation block
@property (nonatomic,copy) NSDictionary * appProvidedData;                                     //@synthesize appProvidedData=_appProvidedData - In the implementation block
@property (nonatomic,copy) NSString * appProvidedContext;                                      //@synthesize appProvidedContext=_appProvidedContext - In the implementation block
@property (nonatomic,copy) AKDevice * proxiedDevice;                                           //@synthesize proxiedDevice=_proxiedDevice - In the implementation block
@property (nonatomic,copy) AKDevice * companionDevice;                                         //@synthesize companionDevice=_companionDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)teamID;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(long long)serviceType;
-(AKAuthorizationRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(void)setServiceType:(long long)arg1 ;
-(AKDevice *)companionDevice;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(AKAuthorizationScopesUserSelection *)userSelection;
-(void)setUserSelection:(AKAuthorizationScopesUserSelection *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(AKDevice *)proxiedDevice;
-(NSString *)appProvidedContext;
-(void)setAppProvidedContext:(NSString *)arg1 ;
-(void)setProxiedDevice:(AKDevice *)arg1 ;
-(void)setAppProvidedData:(NSDictionary *)arg1 ;
-(NSDictionary *)appProvidedData;
-(NSString *)_proxiedAppName;
-(void)_setProxiedAppName:(id)arg1 ;
-(BOOL)_hasApplicationMetaData;
@end

