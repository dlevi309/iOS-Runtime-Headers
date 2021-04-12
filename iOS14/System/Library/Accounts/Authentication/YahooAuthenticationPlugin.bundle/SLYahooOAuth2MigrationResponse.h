/*
* Generated on Thursday, January 14, 2021 at 2:29:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Authentication/YahooAuthenticationPlugin.bundle/YahooAuthenticationPlugin
*/


@class NSError, NSDictionary, NSString, NSDate;

@interface SLYahooOAuth2MigrationResponse : NSObject {

	long long _statusCode;
	NSError* _error;
	NSDictionary* _responseBody;
	NSString* _accessToken;
	NSString* _refreshToken;
	NSDate* _expiryDate;

}

@property (readonly) long long statusCode;                     //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (readonly) NSDictionary * responseBody;              //@synthesize responseBody=_responseBody - In the implementation block
@property (readonly) NSString * accessToken;                   //@synthesize accessToken=_accessToken - In the implementation block
@property (readonly) NSString * refreshToken;                  //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) NSDate * expiryDate;                      //@synthesize expiryDate=_expiryDate - In the implementation block
-(NSString *)accessToken;
-(NSString *)refreshToken;
-(NSError *)error;
-(long long)statusCode;
-(NSDate *)expiryDate;
-(NSDictionary *)responseBody;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
@end

