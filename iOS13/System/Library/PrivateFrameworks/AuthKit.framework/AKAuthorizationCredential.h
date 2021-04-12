/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (assign,nonatomic) BOOL isLikelyRealUser;                              //@synthesize isLikelyRealUser=_isLikelyRealUser - In the implementation block
@property (nonatomic,copy,readonly) NSArray * authorizedScopes;                  //@synthesize authorizedScopes=_authorizedScopes - In the implementation block
@property (nonatomic,copy,readonly) NSData * identityToken;                      //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * authorizationCode;                  //@synthesize authorizationCode=_authorizationCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) AKUserInformation * userInformation;              //@synthesize userInformation=_userInformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * userIdentifier;                   //@synthesize userIdentifier=_userIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSData *)identityToken;
-(AKUserInformation *)userInformation;
-(id)initWithServerResponse:(id)arg1 ;
-(NSArray *)authorizedScopes;
-(NSData *)authorizationCode;
-(BOOL)isLikelyRealUser;
-(void)setIsLikelyRealUser:(BOOL)arg1 ;
@end

