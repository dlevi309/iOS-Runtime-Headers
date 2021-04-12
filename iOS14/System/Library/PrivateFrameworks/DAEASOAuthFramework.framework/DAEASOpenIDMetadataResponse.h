/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@class NSString, NSDictionary, NSError;

@interface DAEASOpenIDMetadataResponse : NSObject {

	NSString* _tokenRequestURI;
	NSString* _authorizationURI;
	NSString* _jwksURI;
	NSString* _issuer;
	NSDictionary* _data;
	long long _statusCode;
	NSError* _error;
	NSString* _errorMessage;

}

@property (nonatomic,readonly) NSString * tokenRequestURI;               //@synthesize tokenRequestURI=_tokenRequestURI - In the implementation block
@property (nonatomic,readonly) NSString * authorizationURI;              //@synthesize authorizationURI=_authorizationURI - In the implementation block
@property (nonatomic,readonly) NSString * jwksURI;                       //@synthesize jwksURI=_jwksURI - In the implementation block
@property (nonatomic,readonly) NSString * issuer;                        //@synthesize issuer=_issuer - In the implementation block
@property (nonatomic,readonly) NSDictionary * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long statusCode;                     //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;                  //@synthesize errorMessage=_errorMessage - In the implementation block
-(NSString *)issuer;
-(NSString *)errorMessage;
-(NSError *)error;
-(long long)statusCode;
-(NSDictionary *)data;
-(NSString *)jwksURI;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)tokenRequestURI;
-(NSString *)authorizationURI;
@end

