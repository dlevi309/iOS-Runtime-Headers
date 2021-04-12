/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/AKCredential.h>

@class NSString, NSArray, NSData, AKUserInformation;

@interface AKAuthorizationCredential : NSObject <AKCredential> {

	BOOL _isLikelyRealUser;
	NSString* _userIdentifier;
	NSArray* _authorizedScopes;
	NSData* _identityToken;
	NSData* _authorizationCode;
	NSString* _state;
	AKUserInformation* _userInformation;
	NSString* _transactionID;

}

@property (assign,nonatomic) BOOL isLikelyRealUser;                              //@synthesize isLikelyRealUser=_isLikelyRealUser - In the implementation block
@property (nonatomic,copy,readonly) NSArray * authorizedScopes;                  //@synthesize authorizedScopes=_authorizedScopes - In the implementation block
@property (nonatomic,copy,readonly) NSData * identityToken;                      //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * authorizationCode;                  //@synthesize authorizationCode=_authorizationCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) AKUserInformation * userInformation;              //@synthesize userInformation=_userInformation - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * userIdentifier;                   //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)_credentialScopes;
-(id)authenticationServicesCredential;
-(NSString *)userIdentifier;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)authorizedScopes;
-(NSData *)authorizationCode;
-(BOOL)isLikelyRealUser;
-(void)setIsLikelyRealUser:(BOOL)arg1 ;
-(NSString *)description;
-(NSData *)identityToken;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(id)initWithServerResponse:(id)arg1 ;
-(AKUserInformation *)userInformation;
-(NSString *)transactionID;
@end

